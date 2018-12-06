#ifndef _ICE_AST_VAR_DECL_HH_INCLUDED_
#define _ICE_AST_VAR_DECL_HH_INCLUDED_

#include "ice/ast/stmt.hh"
#include "ice/ast/func_decl.hh"

namespace ice {
    namespace ast {
        class var_decl : public stmt {
            public:
                var_decl(const char *name, type *type);
                virtual ~var_decl();

                node_type get_node_type() const { return NODE_TYPE_VAR_DECL; }

                const char *get_name() const;
                type *get_type() const;

                void format(std::ostream& stream) const;

            private:
                std::string _name;
                type *_type;
        };
    };
};

#endif

