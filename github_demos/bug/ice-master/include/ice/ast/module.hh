#ifndef _ICE_AST_MODULE_HH_INCLUDED_
#define _ICE_AST_MODULE_HH_INCLUDED_

#include <string>

#include "ice/ast/node.hh"
#include "ice/ast/decl.hh"

namespace ice {
    namespace ast {
        typedef std::list<std::string> string_list;
        typedef std::list<std::pair<string_list, std::string> > import_list;

        class module : public node {
            public:
                module(const string_list& name, const import_list& imports, const decl_list& body);
                virtual ~module();

                node_type get_node_type() const { return NODE_TYPE_MODULE; }

                const string_list& get_name() const;
                const char *get_package() const;
                const import_list& get_imports() const;
                const decl_list& get_body() const;

                void format(std::ostream& stream) const;

                //
                // copy / assign not allowed
                //
            private:
                module(const module& mod) {}
                const module& operator=(const module &mod) { return *this; }

            private:
                string_list _name;
                std::string _package;
                import_list _imports;
                decl_list   _body;
        };

        void format_string_list(std::ostream& stream, const string_list& list);
        void format_import_list(std::ostream& stream, const import_list& list);
    };
};

#endif

