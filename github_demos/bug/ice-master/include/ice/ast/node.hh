#ifndef _ICE_AST_NODE_HH_INCLUDED_
#define _ICE_AST_NODE_HH_INCLUDED_

#include <list>
#include <ostream>

namespace ice {
    namespace ast {
        enum node_type {
            NODE_TYPE_UNKNOWN,

            /* NODE_TYPE_EXPR, */
            NODE_TYPE_IDENT,
            NODE_TYPE_INTEGER,
            NODE_TYPE_STRING,
            NODE_TYPE_CALL,
            NODE_TYPE_GETATTR,
            NODE_TYPE_ALLOC,

            /* NODE_TYPE_STMT, */
            NODE_TYPE_EXPR_STMT,
            NODE_TYPE_RETURN_STMT,
            NODE_TYPE_ASSIGN,
            NODE_TYPE_DEALLOC,

            /* NODE_TYPE_DECL, */
            NODE_TYPE_VAR_DECL,
            NODE_TYPE_FUNC_DECL,

            NODE_TYPE_TYPE,
            NODE_TYPE_PARAM,

            NODE_TYPE_MODULE,
        };

        class node {
            public:
                node();
                virtual ~node();

                virtual node_type get_node_type() const = 0;
                bool is_ident() const { return get_node_type() == NODE_TYPE_IDENT; }

                virtual void format(std::ostream& s) const = 0;
        };

        typedef std::list<node*> node_list;
    };
};

#endif

