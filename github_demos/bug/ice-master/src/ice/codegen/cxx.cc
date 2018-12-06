#include <fstream>
#include <iostream>
#include <ostream>
#include <stack>
#include <algorithm>
#include <vector>

#include <sys/stat.h>

#include "ice/ast.hh"
#include "ice/utils.hh"

#include "ice/codegen/cxx.hh"

class cxx_codegen {
    private:
        enum scope {
            NONE = 0,
            IN_MODULE = 1,
            IN_FUNCTION = 2
        };
    public:
        cxx_codegen(std::ostream& stream);
        virtual ~cxx_codegen();

        void visit(ice::ast::module *mod);

        void visit(ice::ast::func_decl *fdecl);

        void visit(ice::ast::var_decl *vdecl);

        void visit(ice::ast::expr_stmt *e);

        void visit(ice::ast::return_stmt *r);

        void visit(ice::ast::getattr *getattr);

        void visit(ice::ast::call *call);

        void visit(ice::ast::alloc *alloc);

        void visit(ice::ast::dealloc *dealloc);

        void visit(ice::ast::assign *assign);

        void visit(ice::ast::ident *ident);

        void visit(ice::ast::integer *i);

        void visit(ice::ast::string *s);

        void visit(ice::ast::type *t);

        void visit(ice::ast::expr *e);

        void visit(ice::ast::stmt *s);

        void visit(ice::ast::decl *d);

    private:
        void push(ice::ast::node *node, scope s);
        void pop();

        void write(const char *s);
        void writeline(const char *s);
        void writeline();
        void writestream(std::istream& in);

        void _do_builtins();
        void _do_headers();
        void _do_imports();
        void _do_main();

        void set_scope(scope s);
        scope get_scope() const;

        std::ostream& _stream;
        scope _scope;
        typedef std::stack<std::pair<ice::ast::node*, scope> > stack;
        stack _stack;
        ice::ast::module *_module;
        ice::ast::func_decl *_main;
        typedef std::vector<std::string> modules;
        modules _imports;
        bool _ident_hack;
};

static std::string
make_qualified_cxx_name(const ice::utils::string_list& name)
{
    return ice::utils::join("::", name);
}

cxx_codegen::cxx_codegen(std::ostream& stream)
    : _stream(stream), _scope(NONE), _module(NULL), _main(NULL), _ident_hack(false)
{
}

cxx_codegen::~cxx_codegen()
{
}

template <class T>
static void visit_all(const std::list<T>& list, cxx_codegen *v)
{
    typename std::list<T>::const_iterator iter;

    iter = list.begin();
    while (iter != list.end()) {
        v->visit(*iter);
        iter++;
    }
}

void
cxx_codegen::_do_builtins()
{
    std::fstream in("modules/builtin.cc", std::ios::in | std::ios::binary);
    writestream(in);
}

static std::string
module_header_file_name(const ice::ast::string_list& name)
{
    return "modules/" + ice::utils::join("_", name) + ".hh";
}

static std::string
module_cxx_file_name(const ice::ast::string_list& name)
{
    return "modules/" + ice::utils::join("_", name) + ".cc";
}

void
cxx_codegen::_do_headers()
{
    ice::ast::import_list::const_iterator iter = _module->get_imports().begin();
    while (iter != _module->get_imports().end()) {
        struct stat sb;
        std::string filename = module_header_file_name(iter->first);
        if (stat(filename.c_str(), &sb) < 0) {
            iter++;
            continue;
        }
        std::fstream in(filename.c_str(), std::ios::in | std::ios::binary);
        writestream(in);
        in.close();
        writeline();
        iter++;
    }
}

void
cxx_codegen::_do_imports()
{
    _imports.clear();

    ice::ast::import_list::const_iterator iter = _module->get_imports().begin();
    while (iter != _module->get_imports().end()) {
        std::string filename = module_cxx_file_name(iter->first);
        std::fstream in(filename.c_str(), std::ios::in | std::ios::binary);
        std::string alias = iter->second;
        int depth = 0;
        if (alias.empty()) {
            ice::utils::string_list::const_iterator iter2 = iter->first.begin();
            while (iter2 != iter->first.end()) {
                write("namespace ");
                write(iter2->c_str());
                writeline("{");
                iter2++;
                depth++;
            }
            alias = ice::utils::make_package_name(iter->first);
        }
        else {
            write("namespace "); write(alias.c_str()); write("{");
            depth++;
        }
        writestream(in);
        writeline();
        while (depth > 0) {
            writeline("};");
            depth--;
        }
        writeline();
        in.close();

        _imports.push_back(alias);

        iter++;
    }
}

void
cxx_codegen::_do_main()
{
    if (_main) {
        writeline("");
        writeline("");
        writeline("int");
        writeline("main(int argc, char **argv)");
        writeline("{");
        if (!_main->get_params().empty()) {
            writeline("array<string> args;");
            writeline("for (int i = 0; i < argc; i++) {");
            writeline("args.push(argv[i]);");
            writeline("}");
        }
        if (_main->get_return_type() && _main->get_params().empty()) {
            writeline("return _ice_user__main__main();");
        }
        else if (_main->get_return_type()) {
            writeline("return _ice_user__main__main(args);");
        }
        else if (!_main->get_params().empty()) {
            writeline("_ice_user__main__main(args);");
        }
        else {
            writeline("_ice_user__main__main();");
            writeline("return 0;");
        }
        writeline("}");
    }
}

void
cxx_codegen::visit(ice::ast::module *mod)
{
    _module = mod;

    _do_headers();
    _do_builtins();
    _do_imports();

    push(mod, IN_MODULE);

    visit_all(mod->get_body(), this);

    pop();

    _do_main();

    _module = NULL;
    _main = NULL;
}

void
cxx_codegen::visit(ice::ast::expr_stmt *e)
{
    visit(e->get_expr());
    writeline(";\n");
}

void
cxx_codegen::visit(ice::ast::return_stmt *r)
{
    write("return ");
    if (r->get_value()) {
        visit(r->get_value());
    }
    writeline(";\n");
}

void
cxx_codegen::visit(ice::ast::func_decl *fdecl)
{
    if (fdecl->get_return_type()) {
        visit(fdecl->get_return_type());
        writeline();
    }
    else {
        writeline("void");
    }
    std::string package = make_qualified_cxx_name(_module->get_name());
    write("_ice_user__"); write(package.c_str()); write("__"); write(fdecl->get_name());
    
    write("(");
    ice::ast::param_list::const_iterator iter = fdecl->get_params().begin();
    while (iter != fdecl->get_params().end()) {
        ice::ast::param *param = (*iter);
        visit(param->get_type()); write(" "); write(param->get_name());
        iter++;
        if (iter != fdecl->get_params().end()) write(", ");
    }

    writeline(")");
    writeline("{");
    push(fdecl, IN_FUNCTION);

    if (std::string("main") == package && fdecl->get_name() == std::string("main")) {
        _main = fdecl;
    }

    visit_all(fdecl->get_body(), this);

    writeline("}");
    writeline("");

    pop();
}

void
cxx_codegen::visit(ice::ast::var_decl *vdecl)
{
    visit(vdecl->get_type());
    write(" ");
    write(vdecl->get_name());
    writeline(";");
}

void
cxx_codegen::visit(ice::ast::getattr *getattr)
{
    visit(getattr->get_target());
    bool module = false;
    if (getattr->get_target()->is_ident()) {
        ice::ast::ident *ident = (ice::ast::ident*)getattr->get_target();
        if (std::find(_imports.begin(), _imports.end(), ident->get_id()) != _imports.end()) {
            module = true;
        }
    }
    if (module) {
        write("::");
    }
    else {
        write("->");
    }
    visit(getattr->get_attr());
}

void
cxx_codegen::visit(ice::ast::call *call)
{
    if (call->get_target()->is_ident()) {
        std::string package = make_qualified_cxx_name(_module->get_name());
        write("_ice_user__"); write(package.c_str()); write("__");
    }
    visit(call->get_target());
    write("(");
    ice::ast::expr_list::const_iterator iter = call->get_args().begin();
    while (iter != call->get_args().end()) {
        visit((*iter));
        iter++;
        if (iter != call->get_args().end()) write(", ");
    }
    write(")");
}

void
cxx_codegen::visit(ice::ast::alloc *alloc)
{
    write("new ");
    visit(alloc->get_type());
}

void
cxx_codegen::visit(ice::ast::dealloc *dealloc)
{
    write("delete ");
    visit(dealloc->get_expr());
    writeline(";");
}

void
cxx_codegen::visit(ice::ast::assign *assign)
{
    visit(assign->get_target());
    write(" = ");
    visit(assign->get_value());
}

void
cxx_codegen::visit(ice::ast::ident *ident)
{
    write(ident->get_id());
}

void
cxx_codegen::visit(ice::ast::integer *i)
{
    // XXX hard-coding int32 sucks */
    write("int32(");
    write(i->get_value());
    write(")");
}

void
cxx_codegen::visit(ice::ast::string *s)
{
    write("string(\"");
    write(s->get_value());
    write("\")");
}

void
cxx_codegen::visit(ice::ast::type *t)
{
    write(make_qualified_cxx_name(t->get_name()).c_str());
    if (!t->get_specializations().empty()) {
        write("<");
        ice::ast::type_list::const_iterator iter = t->get_specializations().begin();
        while (iter != t->get_specializations().end()) {
            visit((*iter));
            iter++;
            if (iter != t->get_specializations().end()) write(", ");
        }
        write(">");
    }
    for (int i = 0; i < t->get_pointer(); i++) {
        write("*");
    }
}

void
cxx_codegen::visit(ice::ast::expr *e)
{
    switch (e->get_node_type()) {
        case ice::ast::NODE_TYPE_IDENT:
            {
                visit((ice::ast::ident*)e);
                break;
            }
        case ice::ast::NODE_TYPE_INTEGER:
            {
                visit((ice::ast::integer*)e);
                break;
            }
        case ice::ast::NODE_TYPE_STRING:
            {
                visit((ice::ast::string*)e);
                break;
            }
        case ice::ast::NODE_TYPE_GETATTR:
            {
                visit((ice::ast::getattr*)e);
                break;
            }
        case ice::ast::NODE_TYPE_CALL:
            {
                visit((ice::ast::call*)e);
                break;
            }
        case ice::ast::NODE_TYPE_ALLOC:
            {
                visit((ice::ast::alloc*)e);
                break;
            }
        default:
            {
                /* XXX error */
                break;
            }
    };
}

void
cxx_codegen::visit(ice::ast::stmt *s)
{
    switch (s->get_node_type()) {
        case ice::ast::NODE_TYPE_EXPR_STMT:
            {
                visit((ice::ast::expr_stmt*)s);
                break;
            }
        case ice::ast::NODE_TYPE_RETURN_STMT:
            {
                visit((ice::ast::return_stmt*)s);
                break;
            }
        case ice::ast::NODE_TYPE_ASSIGN:
            {
                visit((ice::ast::assign*)s);
                break;
            }
        case ice::ast::NODE_TYPE_DEALLOC:
            {
                visit((ice::ast::dealloc*)s);
                break;
            }
        default:
            {
                /* XXX error */
                break;
            }
    };
}

void
cxx_codegen::visit(ice::ast::decl *d)
{
    switch (d->get_node_type()) {
        case ice::ast::NODE_TYPE_VAR_DECL:
            {
                visit((ice::ast::var_decl*)d);
                break;
            }
        case ice::ast::NODE_TYPE_FUNC_DECL:
            {
                visit((ice::ast::func_decl*)d);
                break;
            }
        default:
            {
                /* XXX error */
                break;
            }
    };
}

void
cxx_codegen::push(ice::ast::node *node, cxx_codegen::scope s)
{
    _stack.push(stack::value_type(node, _scope));
    _scope = s;
}

void
cxx_codegen::pop()
{
    stack::value_type top = _stack.top();
    _stack.pop();
    _scope = top.second;
}

void
cxx_codegen::write(const char *s)
{
    _stream << s;
}

void
cxx_codegen::writeline(const char *s)
{
    _stream << s << "\n";
}

void
cxx_codegen::writeline()
{
    writeline("");
}

void
cxx_codegen::writestream(std::istream& in)
{
    char buf[8192];
    size_t n;
    while (!in.eof()) {
        n = sizeof(buf);
        n = in.readsome(buf, n);
        if (n <= 0) break;
        _stream.write(buf, n);
    }
}

void
cxx_codegen::set_scope(cxx_codegen::scope scope)
{
    _scope = scope;
}

cxx_codegen::scope
cxx_codegen::get_scope() const
{
    return _scope;
}

bool
ice::codegen::cxx(const char *filename, ice::ast::module *root)
{
    std::fstream s((std::string(filename) + ".cc").c_str(), std::ios::out | std::ios::binary);
    cxx_codegen v(s);

    v.visit(root);

    s.flush();
    s.close();

    std::string binary = filename;
    binary = binary.substr(0, binary.length() - 4); // XXX
    std::string cxxfile = filename;
    cxxfile += ".cc";

    // invoke g++ to generate a binary
    execlp("g++", "g++", "-Wall", "-o", binary.c_str(), cxxfile.c_str(), NULL);

    return true;
}

