#include <cstring>

#include "ice/ast/module.hh"
#include "ice/utils.hh"

ice::ast::module::module(const string_list& name, const import_list& imports, const decl_list& body)
    : _name(name), _package(ice::utils::make_package_name(name)), _imports(imports), _body(body)
{
}

ice::ast::module::~module()
{
    decl_list::iterator iter = _body.begin();
    while (iter != _body.end()) {
        delete *iter;
        iter++;
    }
}

const ice::ast::string_list&
ice::ast::module::get_name() const
{
    return _name;
}

const char*
ice::ast::module::get_package() const
{
    return _package.c_str();
}

const ice::ast::import_list&
ice::ast::module::get_imports() const
{
    return _imports;
}

const ice::ast::decl_list&
ice::ast::module::get_body() const
{
    return _body;
}

void
ice::ast::module::format(std::ostream& stream) const
{
    stream << "module(";
    stream << "name=" << (_package.c_str()) << ", ";
    stream << "imports=";
    format_import_list(stream, get_imports());
    stream << ", ";
    stream << "body=";
    format_decl_list(stream, get_body());
    stream << ")";
}

void
ice::ast::format_string_list(std::ostream& stream, const string_list& list)
{
    string_list::const_iterator iter = list.begin();
    stream << "[";
    while (iter != list.end()) {
        stream << *iter;
        iter++;
        if (iter != list.end()) stream << ", ";
    }
    stream << "]";
}

void
ice::ast::format_import_list(std::ostream& stream, const import_list& list)
{
    import_list::const_iterator iter = list.begin();
    stream << "[";
    while (iter != list.end()) {
        stream << ice::utils::make_package_name(iter->first).c_str();
        if (!iter->second.empty()) {
            stream << " (" << iter->second.c_str() << ")";
        }
        iter++;
        if (iter != list.end()) stream << ", ";
    }
    stream << "]";
}

