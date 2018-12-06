#ifndef _ICE_AST_ALLOC_HH_INCLUDED_
#define _ICE_AST_ALLOC_HH_INCLUDED_

#include "ice/ast/expr.hh"
#include "ice/ast/func_decl.hh"

namespace ice {
    namespace ast {
        class alloc : public expr {
            public:
                alloc(type *t);
                virtual ~alloc();

                node_type get_node_type() const { return NODE_TYPE_ALLOC; }

                type* get_type() const;

                void format(std::ostream& stream) const;

            private:
                type *_type;
        };
    };
};

#endif

