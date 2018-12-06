#ifndef _ICE_AST_ASSIGN_HH_INCLUDED_
#define _ICE_AST_ASSIGN_HH_INCLUDED_

#include "ice/ast/expr.hh"

namespace ice {
    namespace ast {
        class assign : public expr {
            public:
                assign(expr *target, expr *value);
                virtual ~assign();

                node_type get_node_type() const { return NODE_TYPE_ASSIGN; }

                expr *get_target() const;
                expr *get_value() const;

                void format(std::ostream& stream) const;

            private:
                expr *_target;
                expr *_value;
        };
    };
};

#endif

