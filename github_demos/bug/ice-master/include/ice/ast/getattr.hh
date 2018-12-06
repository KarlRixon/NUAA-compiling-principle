#ifndef _ICE_AST_GETATTR_HH_INCLUDED_
#define _ICE_AST_GETATTR_HH_INCLUDED_

#include "ice/ast/expr.hh"
#include "ice/ast/ident.hh"

namespace ice {
    namespace ast {
        class getattr : public expr {
            public:
                getattr(expr *target, ident *attr);
                virtual ~getattr();

                node_type get_node_type() const { return NODE_TYPE_GETATTR; }

                expr *get_target() const;
                ident *get_attr() const;

                void format(std::ostream& stream) const;

            private:
                expr *_target;
                ident *_attr;
        };
    };
};

#endif

