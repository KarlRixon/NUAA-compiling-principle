#include "../head/tree.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdarg.h>
TREE_NODE *root = NULL;
char *name[] = {
    "INT", "FLOAT", 
    "ID",
    "SEMI", "COMMA",
    "ASSINOP", 
    "RELOP",
    "PLUS", "MINUS",
    "STAR", "DIV",
    "AND", "OR",
    "DOT",
    "NOT",
    "TYPE",
    "LP", "RP",
    "LB", "RB",
    "LC", "RC",
    "STRUCT",
    "RETURN",
    "IF", "ELSE",
    "WHILE",

    "Program", "ExtDefList", "ExtDef", "ExtDecList",
    "Specifier", "StructSpecifier", "OptTag", "Tag",
    "VarDec", "FunDec", "VarList", "ParamDec",
    "CompSt", "StmtList", "Stmt",
    "DefList", "Def", "DecList", "Dec",
    "Exp", "Args"
};
int error = 0;

void add_child(TREE_NODE *parent, TREE_NODE *child) {
    if(child != NULL) {
        if(parent->first_child == NULL) {
            parent->first_child = child;
            parent->last_child = child;
        }
        else {
            parent->last_child->brother = child;
            parent->last_child = child;
        }
    }
}

void add_children(TREE_NODE *parent, int n, ...) {
    va_list childs;
    va_start(childs, n);
    for(int i = 0;i < n;i++) {
        TREE_NODE *child = va_arg(childs, TREE_NODE*);
        add_child(parent, child);
    }
    va_end(childs);
}

TREE_NODE* new_tree_node(NODE_TYPE node_type, int lineno, char *value) {
    TREE_NODE *ret = (TREE_NODE*)malloc(sizeof(TREE_NODE));
    ret->s_value = NULL;
    ret->first_child = NULL;
    ret->last_child = NULL;
    ret->brother = NULL;

    ret->node_type = node_type;
    ret->lineno = lineno;

    switch(ret->node_type) {
        case INT_T:
        ret->i_value = strtol(value,NULL,0);
        break;

        case FLOAT_T:
        ret->f_value = atof(value);
        break;

        case ID_T:
        case TYPE_T:
        ret->s_value = (char*)malloc(sizeof(char)*(strlen(value)+1));
        strcpy(ret->s_value, value);
        break;

        default:
        break;
    }

    return ret;
}

void print_node(TREE_NODE *node) {
    printf("%s", node_name(node->node_type));
    switch(node->node_type) {
        case ID_T:
        case TYPE_T:
        printf(": %s", node->s_value);
        break;
        case INT_T:
        printf(": %d", node->i_value);
        break;
        case FLOAT_T:
        printf(": %lf", node->f_value);
        break;

        default:
        if(node->node_type >= PROGRAM_T) {
            printf(" (%d)", node->lineno);
        }
        break;
    }
    printf("\n");
}

void print_tree(TREE_NODE *cur, int indent) {
    for(int i = 0;i < indent;i++) {
        printf(" ");
    }
    print_node(cur);
    indent += 2;
    TREE_NODE *p = cur->first_child;
    while(p) {
        print_tree(p, indent);
        p = p->brother;
    }
}
