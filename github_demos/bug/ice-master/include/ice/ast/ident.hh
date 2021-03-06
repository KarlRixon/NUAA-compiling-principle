#ifndef _ICE_AST_IDENT_HH_INCLUDED_
#define _ICE_AST_IDENT_HH_INCLUDED_

#include <string>

#include "ice/ast/expr.hh"

namespace ice {
    namespace ast {
        class ident : public expr {
            public:
                ident(const char *id);
                virtual ~ident();

                node_type get_node_type() const { return NODE_TYPE_IDENT; }

                const char *get_id() const;

                void format(std::ostream& stream) const;

            private:
                std::string _id;
        };
    };
};

#endif

