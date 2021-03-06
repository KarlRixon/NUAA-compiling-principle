#ifndef _ICE_AST_INTEGER_HH_INCLUDED_
#define _ICE_AST_INTEGER_HH_INCLUDED_

#include <string>

#include "ice/ast/expr.hh"

namespace ice {
    namespace ast {
        class integer : public expr {
            public:
                integer(const char *value);
                virtual ~integer();

                node_type get_node_type() const { return NODE_TYPE_INTEGER; }

                const char *get_value() const;

                void format(std::ostream& stream) const;

            private:
                std::string _value;
        };
    };
};

#endif

