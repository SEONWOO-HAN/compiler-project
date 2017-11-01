#include "AST.h"
#include "minicpp.y"

struct ast *alloc_program(int type, struct ast *_class, struct ast *classMethodDef, struct ast *mainFunc)
{
	struct Program *node = malloc(sizeof(struct Program))
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->_class = _class;
	node->classMethodDef = classMethodDef;
	node->mainFunc = mainFunc;
	return (struct ast *)node;
}

struct ast *alloc_class(int type, char *id, struct ast *priMember, struct ast *pubMember, struct ast *prev)
{
	struct Class *node = malloc(sizeof(struct Class))
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->priMember = priMember;
	node->pubMember = pubMember;
	node->prev = prev;
	return (struct ast *)node;
}

struct ast *change_class_prev(struct ast *_class, struct ast *prev)
{
	_class->prev = prev;
	return (struct ast *)_class;
}
