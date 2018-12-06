#ifndef _ICE_AST_RETURN_STMT_HH_INCLUDED_
#define _ICE_AST_RETURN_STMT_HH_INCLUDED_

#include "ice/ast/stmt.hh"
#include "ice/ast/expr.hh"

namespace ice {
    namespace ast {
        class return_stmt : public stmt {
            public:
                return_stmt(expr *value);
                virtual ~return_stmt();

                node_type get_node_type() const { return NODE_TYPE_RETURN_STMT; }

                expr *get_value() const;

                void format(std::ostream& stream) const;

            private:
                expr *_value;
        };
    };
};

#endif

