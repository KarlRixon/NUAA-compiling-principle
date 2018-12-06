#ifndef __TREE_H__
#define __TREE_H__

#include<stdio.h>

enum node_type {
    INT_T, FLOAT_T,
    ID_T,
    SEMI_T, COMMA_T,
    ASSIGNOP_T,
    RELOP_T,
    PLUS_T, MINUS_T,
    STAR_T, DIV_T,
    AND_T, OR_T,
    DOT_T,
    NOT_T,
    TYPE_T,
    LP_T, RP_T,
    LB_T, RB_T,
    LC_T, RC_T,
    STRUCT_T,
    RETURN_T,
    IF_T, ELSE_T,
    WHILE_T,

    PROGRAM_T, EXTDEFLIST_T, EXTDEF_T, EXTDECLIST_T,
    SPECIFIER_T, STRUCTSPECIFIER_T, OPTTAG_T, TAG_T,
    VARDEC_T, FUNDEC_T, VARLIST_T, PARAMDEC_T,
    COMPST_T, STMTLIST_T, STMT_T,
    DEFLIST_T, DEF_T, DECLIST_T, DEC_T,
    EXP_T, ARGS_T
};

typedef enum node_type NODE_TYPE;

struct tree_node {
    NODE_TYPE node_type;
    int lineno;
    union {
        char *s_value;
        int i_value;
        float f_value;
    };
    struct tree_node *first_child;
    struct tree_node *last_child;
    struct tree_node *brother;
};

typedef struct tree_node TREE_NODE;

//TREE_NODE *root = NULL;
extern TREE_NODE *root;

extern char *name[];

extern int error;

#define node_name(type) name[type]

void add_child(TREE_NODE *parent, TREE_NODE *child);

void add_children(TREE_NODE *parent, int n, ...);

TREE_NODE* new_tree_node(NODE_TYPE node_type, int lineno, char *value);

void print_node(TREE_NODE *node);

void print_tree(TREE_NODE *cur, int indent);

#endif