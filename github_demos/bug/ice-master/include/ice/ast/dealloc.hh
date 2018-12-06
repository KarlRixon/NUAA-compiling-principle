#ifndef _ICE_AST_DEALLOC_HH_INCLUDED_
#define _ICE_AST_DEALLOC_HH_INCLUDED_

#include "ice/ast/stmt.hh"
#include "ice/ast/expr.hh"

namespace ice {
    namespace ast {
        class dealloc : public stmt {
            public:
                dealloc(expr *expr);
                virtual ~dealloc();

                node_type get_node_type() const { return NODE_TYPE_DEALLOC; }

                expr* get_expr() const;

                void format(std::ostream& stream) const;

            private:
                expr *_expr;
        };
    };
};

#endif

