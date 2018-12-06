#ifndef _ICE_AST_CALL_HH_INCLUDED_
#define _ICE_AST_CALL_HH_INCLUDED_

#include "ice/ast/expr.hh"

namespace ice {
    namespace ast {
        class call : public expr {
            public:
                call(expr *target, const expr_list& args);
                virtual ~call();

                node_type get_node_type() const { return NODE_TYPE_CALL; }

                expr *get_target() const;
                void set_target(expr *target);

                const expr_list &get_args() const;

                void format(std::ostream& stream) const;

            private:
                expr *_target;
                expr_list _args;
        };
    };
};

#endif

