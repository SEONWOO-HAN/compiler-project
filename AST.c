#include "AST.h"
//#include "minicpp.y"
#include <string.h>
//#include <stdlib.h>
#include <stdio.h>

void yyerror(char *);

struct ast *alloc_program(int type, struct ast *_class, struct ast *classMethodDef, struct ast *mainFunc)
{
	struct Program *node = malloc(sizeof(struct Program));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->_class = (struct Class *)_class;
	node->classMethodDef = (struct ClassMethodDef *)classMethodDef;
	node->mainFunc = (struct MainFunc *)mainFunc;
	return (struct ast *)node;
}

struct ast *alloc_class(int type, char *id, struct ast *priMember, struct ast *pubMember, struct ast *prev)
{
	struct Class *node = malloc(sizeof(struct Class));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	strcat(node->id, id);
	node->priMember = (struct Member *)priMember;
	node->pubMember = (struct Member *)pubMember;
	node->prev = (struct Class *)prev;
	return (struct ast *)node;
}

struct ast *change_class_prev(struct ast *_class, struct ast *prev)
{
	((struct Class *)_class)->prev = (struct Class *)prev;
	return (struct ast *)_class;
}

struct ast *alloc_member(int type, struct ast *varDecl, struct ast *methodDecl, struct ast *methodDef)
{
	struct Member *node = malloc(sizeof(struct Member));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->varDecl = (struct VarDecl *)varDecl;
	node->methodDecl = (struct MethodDecl *)methodDecl;
	node->methodDef = (struct MethodDef *)methodDef;
	return (struct ast *)node;
}

struct ast *alloc_vardecl(int type1, struct ast *type2, struct ast *ident, bool isInt, int intnum, float floatnum, struct ast *prev)
{
	struct VarDecl *node = malloc(sizeof(struct VarDecl));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	node->type2 = (struct Type *)type2;
	node->ident = (struct Ident *)ident;
	node->isInt = isInt;
	if(isInt)
		node->assigner.intnum = intnum;
	else
		node->assigner.floatnum = floatnum;
	node->prev = (struct VarDecl *)prev;
	return (struct ast *)node;
}

struct ast *change_vardecl_prev(struct ast *varDecl, struct ast *prev)
{
	((struct VarDecl *)varDecl)->prev = (struct VarDecl *)prev;
	return (struct ast *)varDecl;
}

struct ast *alloc_methoddecl(int type1, char *id, struct ast *type2, struct ast *param, struct ast *prev)
{
	struct MethodDecl *node = malloc(sizeof(struct MethodDecl));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	strcat(node->id, id);
	node->type2 = (struct Type *)type2;
	node->param = (struct Param *)param;
	node->prev = (struct MethodDecl *)prev;
	return (struct ast *)node;
}

struct ast *change_methoddecl_prev(struct ast *methodDecl, struct ast *prev)
{
	((struct MethodDecl *)methodDecl)->prev = (struct MethodDecl *)prev;
	return (struct ast *)methodDecl;
}

struct ast *alloc_methoddef(int type1, char *id, struct ast *type2, struct ast *param, struct ast *compoundStmt, struct ast *prev)
{
	struct MethodDef *node = malloc(sizeof(struct MethodDef));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	strcat(node->id, id);
	node->type2 = (struct Type *)type2;
	node->param = (struct Param *)param;
	node->compoundStmt = (struct CompoundStmt *)compoundStmt;
	node->prev = (struct MethodDef *)prev;
	return (struct ast *)node;
}

struct ast *change_methoddef_prev(struct ast *methodDef, struct ast *prev)
{
	((struct MethodDef *)methodDef)->prev = (struct MethodDef *)prev;
	return (struct ast *)methodDef;
}

struct ast *alloc_classmethoddef(int type1, struct ast *type2, char *className, char *methodName, struct ast *param, struct ast *compoundStmt, struct ast *prev)
{
	struct ClassMethodDef *node = malloc(sizeof(struct ClassMethodDef));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	node->type2 = (struct Type *)type2;
	strcat(node->className, className);
	strcat(node->methodName, methodName);
	node->param = (struct Param *)param;
	node->compoundStmt = (struct CompoundStmt *)compoundStmt;
	node->prev = (struct MethodDef *)prev;
	return (struct ast *)node;
}

struct ast *change_classmethoddef_prev(struct ast *classMethodDef, struct ast *prev)
{
	((struct ClassMethodDef *)classMethodDef)->prev = (struct ClassMethodDef *)prev;
	return (struct ast *)classMethodDef;
}

struct ast *alloc_mainfunc(int type, struct ast *compoundStmt)
{
	struct MainFunc *node = malloc(sizeof(struct MainFunc));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->compoundStmt = (struct CompoundStmt *)compoundStmt;
	return (struct ast *)node;
}

struct ast *alloc_param(int type1, struct ast *type2, struct ast *ident, struct ast *prev)
{
	struct Param *node = malloc(sizeof(struct Param));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	node->type2 = (struct Type *)type2;
	node->ident = (struct Ident *)ident;
	node->prev = (struct Param *)prev;
	return (struct ast *)node;
}

struct ast *change_param_prev(struct ast *param, struct ast *prev)
{
	((struct Param *)param)->prev = (struct Param *)prev;
	return (struct ast *)param;
}

struct ast *alloc_ident(int type, char *id, int len)
{
	struct Ident *node = malloc(sizeof(struct Ident));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	strcat(node->id, id);
	node->len = len;
	return (struct ast *)node;
}

struct ast *alloc_type(int type, char *id, Type_e e)
{
	struct Type *node = malloc(sizeof(struct Type));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	strcat(node->id, id);
	node->e = e;
	return (struct ast *)node;
}

struct ast *alloc_compoundstmt(int type, struct ast *varDecl, struct ast *stmt)
{
	struct CompoundStmt *node = malloc(sizeof(struct CompoundStmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->varDecl = (struct VarDecl *)varDecl;
	node->stmt = (struct Stmt *)stmt;
	return (struct ast *)node;
}

struct ast *alloc_stmt(int type1, Stmt_e e, struct ast *stmt, struct ast *prev)
{
	struct Stmt *node = malloc(sizeof(struct Stmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	node->e = e;
	if(e == eExpr)
		node->type2.exprStmt = (struct ExprStmt *)stmt;
	else if(e == eAssign)
		node->type2.assignStmt = (struct AssignStmt *)stmt;
	else if(e == eRet)
		node->type2.retStmt = (struct ReturnStmt *)stmt;
	else if(e == eWhile)
		node->type2.whileStmt = (struct WhileStmt *)stmt;
	else if(e == eDo)
		node->type2.doStmt = (struct DoStmt *)stmt;
	else if(e == eFor)
		node->type2.forStmt = (struct ForStmt *)stmt;
	else if(e == eIf)
		node->type2.ifStmt = (struct IfStmt *)stmt;
	else if(e == eCompound)
		node->type2.compoundStmt = (struct CompoundStmt *)stmt;
	else {
		yyerror("wrong statement");
		exit(0);
	}
	node->prev = (struct Stmt *)prev;
	return (struct ast *)node;
}

struct ast *change_stmt_prev(struct ast *stmt, struct ast *prev)
{
	((struct Stmt *)stmt)->prev = (struct Stmt *)prev;
	return (struct ast *)stmt;
}

////////////////////////////////////////////////////////////////////////////

struct ast *alloc_exprstmt(int type, struct ast* expr)
{
	struct ExprStmt *node = malloc(sizeof(struct ExprStmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->expr = (struct Expr*)expr;

	return (struct ast*)node;
}

struct ast *alloc_assignstmt(int type, struct ast* refVarExpr, struct ast* expr)
{
	struct AssignStmt *node = malloc(sizeof(struct AssignStmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->refVarExpr = refVarExpr;
	node->expr = (struct Expr*)expr;

	return (struct ast*)node;
}

struct ast *alloc_retstmt(int type, struct ast* expr)
{
	struct RetStmt *node = malloc(sizeof(struct RetStmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->expr = (struct Expr*)expr;

	return (struct ast*)node;
}

struct ast *alloc_whilestmt(int type, struct ast* cond, struct ast* body)
{
	struct WhileStmt *node = malloc(sizeof(struct WhileStmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->cond = (struct Expr*)cond;
	node->body = (struct Stmt*)body;

	return (struct ast*)node;
}

struct ast *alloc_dostmt(int type, struct ast* cond, struct ast* body)
{
	struct DoStmt *node = malloc(sizeof(struct DoStmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->cond = (struct Expr*)cond;
	node->body = (struct Stmt*)body;

	return (struct ast*)node;
}

struct ast *alloc_forstmt(int type, struct ast* init, struct ast* cond, struct ast* incr,
				struct ast* body)
{
	struct ForStmt *node = malloc(sizeof(struct ForStmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->init = (struct Expr*)init;
	node->cond = (struct Expr*)cond;
	node->incr = (struct Expr*)incr;
	node->body = (struct body*)body;
	return (struct ast*)node;

}

struct ast *alloc_ifstmt(int type, struct ast* cond, struct ast* ifbody, struct ast* elsebody)
{
	struct IfStmt *node = malloc(sizeof(struct IfStmt));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->cond = (struct Expr*)cond;
	node->ifBody = (struct Stmt*)ifbody;
	node->elseBody = (struct Stmt*)elsebody;
	return (struct ast*)node;
}

//eOper, eRef, eIntnum, eFloatnum
struct ast *alloc_expr(int type1, Expr_e e, int intnum, float floatnum, struct ast* expr)
{
	struct Expr *node = malloc(sizeof(struct Expr));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	switch(e)
	{
	case eOper:
		node->type.operExpr = (struct OperExpr*)expr;
		break;
	case eRef:
		node->type.refExpr = (struct RefExpr*)expr;
		break;
	case eIntnum:
		node->type.intnum = intnum;
		break;
	case eFloatnum:
		node->type.floatnum = floatnum;
		break;
	}
	return (struct ast*)node;
}


//eUn, eAddi, eMult, eRela, eEqlt, eBracket
//미완??????????
//expr * expr인데 expr 각각할당?
struct ast *alloc_operexpr(int type1, Oper_e e, 
			struct ast* operexpr, struct ast* expr1, struct ast* expr2)
{
	struct OperExpr *node = malloc(sizeof(struct OperExpr));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	switch(e)
	{
	case eUn:
		node->type.un = malloc(sizeof(struct UnOp));
		node->type.un = (struct UnOp*)operexpr;
		break;
	case eAddi:
		node->type.addi = malloc(sizeof(struct AddiOp));
		node->type.addi->lhs=(struct Expr*)expr1;
		node->type.addi->rhs=(struct Expr*)expr2;
		break;
	case eMult:
		node->type.mult = malloc(sizeof(struct MultOp));
		node->type.mult->lhs=(struct Expr*)expr1;
		node->type.mult->rhs=(struct Expr*)expr2;
		break;
	case eRela:
		node->type.rela = malloc(sizeof(struct RelaOp));
		node->type.rela->lhs=(struct Expr*)expr1;
		node->type.rela->rhs=(struct Expr*)expr2;
		break;
	case eEqlt:
		node->type.eqlt = malloc(sizeof(struct EqltOp));
		node->type.eqlt->lhs=(struct Expr*)expr1;
		node->type.eqlt->rhs=(struct Expr*)expr2;
		break;
	case eBracket:
		node->type.bracket = malloc(sizeof(struct Expr));
		node->type.bracket=(struct Expr*)expr1;
		break;	
	}
	return (struct ast*)node;
}

//eVar, eCall
struct ast *alloc_refexpr(int type1, Ref_e e, struct ast* ref_Expr)
{
	struct RefExpr *node = malloc(sizeof(struct RefExpr));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type1 = type1;
	
	switch(e)
	{
	case eVar: 
		node->type.refVarExpr=(struct refVarExpr*)ref_Expr;
		break;
	case eCall:
		node->type.refCallExpr=(struct refCallExpr*)ref_Expr;
		break;
	}
	return (struct ast*)node;
}

struct ast *alloc_refvarexpr(int type, struct ast* refExpr, struct ast* identExpr)
{
	struct RefVarExpr *node = malloc(sizeof(struct RefVarExpr));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->refExpr=(struct RefExpr*)refExpr;
	node->identExpr=(struct IdentExpr*)identExpr;
	return (struct ast*)node;
}

struct ast *alloc_refcallexpr(int type, struct ast* refExpr, struct ast* callExpr)
{
	struct RefCallExpr *node = malloc(sizeof(struct RefCallExpr));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->refExpr=(struct RefExpr*)refExpr;
	node->callExpr=(struct CallExpr*)callExpr;
	return (struct ast*)node;
}

struct ast *alloc_identexpr(int type, char* id, struct ast* expr)
{
	struct IdentExpr* node = malloc(sizeof(struct IdentExpr));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	strcat(node->id,id);
	node->expr = (struct Expr*)expr;
	return (struct ast*)node;
}

struct ast *alloc_callexpr(int type, char* id, struct ast* arg)
{
	struct CallExpr* node = malloc(sizeof(struct CallExpr));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	strcat(node->id,id);
	node->arg = (struct Arg*)arg;
	return (struct ast*)node;
}

struct ast *alloc_arg(int type, struct ast* expr, struct ast* prev)
{
	struct Arg* node = malloc(sizeof(struct Arg));
	if(!node) {
		yyerror("out of space");
		exit(0);
	}
	node->type = type;
	node->expr = (struct Expr*)expr;
	node->prev = (struct Arg*)prev;
	return (struct ast*)node;
}

struct ast *change_arg_prev(struct ast *arg, struct ast *prev)
{
	((struct Arg *)arg)->prev = (struct Arg *)prev;
	return (struct ast *)arg;
}

#define MAX 1024

struct ast *queue[MAX];
int front, rear;

void init_quque()
{
	front = 0;
	rear = 0;
}

void put(struct ast *node)
{
	if((rear + 1) % MAX == front)
	{
		yyerror("queue overflow");
		exit(0);
	}

	queue[rear] = node;
	rear = ++rear % MAX;
}

bool empty()
{
	if(front == rear)
		return true;
	return false;
}

struct ast *get()
{
	if(empty())
	{
		yyerror("queue underflow");
		exit(0);
	}

	struct ast *node = queue[front];
	front = ++front % MAX;
	return node;
}

void print_ast(struct ast *node)
{
	FILE* fp = fopen("./ast.out", "w");
	if(fp == NULL)
	{
		yyerror("file unopen");
		exit(0);
	}

	int parent_count = 1;
	int descendant_count = 0;

	put(node);
	while(!empty())
	{
		struct ast *current = get();

		if(parent_count == 0)
		{
			parent_count = descendant_count;
			descendant_count = 0;
			fprintf(fp, "\n");
		}
		parent_count--;

		switch(current->type)
		{
			case PROGRAM:
				fprintf(fp, "Program ");
				if(((struct Program *)current)->_class != NULL)
				{
					put((struct ast *)((struct Program *)current)->_class);
					descendant_count++;
				}
				if(((struct Program *)current)->classMethodDef != NULL)
				{
					put((struct ast *)((struct Program *)current)->classMethodDef);
					descendant_count++;
				}
				if(((struct Program *)current)->mainFunc != NULL)
				{
					put((struct ast *)((struct Program *)current)->mainFunc);
					descendant_count++;
				}
				break;
			case CLASS:
				char *id = ((struct Class *)current)->id;
				fprintf(fp, "Class(%s) ", id);
				if(((struct Class *)current)->priMember != NULL)
				{
					put((struct ast *)((struct Class *)current)->priMember);
					descendant_count++;
				}
				if(((struct Class *)current)->pubMember != NULL)
				{
					put((struct ast *)((struct Class *)current)->pubMember);
					descendant_count++;
				}
				if(((struct Class *)current)->prev != NULL)
				{
					put((struct ast *)((struct Class *)current)->prev);
					descendant_count++;
				}
				break;
			case MEMBER:
				fprintf(fp, "Member ");
				if(((struct Member *)current)->varDecl != NULL)
				{
					put((struct ast *)((struct Member *)current)->varDecl);
					descendant_count++;
				}
				if(((struct Member *)current)->methodDecl != NULL)
				{
					put((struct ast *)((struct Member *)current)->methodDecl);
					descendant_count++;
				}
				if(((struct Member *)current)->methodDef != NULL)
				{
					put((struct ast *)((struct Member *)current)->methodDef);
					descendant_count++;
				}
				break;
			case VARIABLE:
				fprintf(fp, "VarDecl ");
				if(((struct VarDecl *)current)->type2 != NULL)
				{
					put((struct ast *)((struct VarDecl *)current)->type2);
					descendant_count++;
				}
				if(((struct VarDecl *)current)->ident != NULL)
				{
					put((struct ast *)((struct VarDecl *)current)->ident);
					descendant_count++;
				}
				if(((struct VarDecl *)current)->prev != NULL)
				{
					put((struct ast *)((struct VarDecl *)current)->prev);
					descendant_count++;
				}
				break;
			case FUNCDECL:
				char *id = ((struct MethodDecl *)current)->id;
				fprintf(fp, "MethodDecl(%s) ", id);
				if(((struct MethodDecl *)current)->type2 != NULL)
				{
					put((struct ast *)((struct MethodDecl *)current)->type2);
					descendant_count++;
				}
				if(((struct MethodDecl *)current)->param != NULL)
				{
					put((struct ast *)((struct MethodDecl *)current)->param);
					descendant_count++;
				}
				if(((struct MethodDecl *)current)->prev != NULL)
				{
					put((struct ast *)((struct MethodDecl *)current)->prev);
					descendant_count++;
				}
				break;
			case FUNCDEF:
				char *id = ((struct MethodDef *)current)->id;
				fprintf(fp, "MethodDef(%s) ", id);
				if(((struct MethodDef *)current)->type2 != NULL)
				{
					put((struct ast *)((struct MethodDef *)current)->type2);
					descendant_count++;
				}
				if(((struct MethodDef *)current)->param != NULL)
				{
					put((struct ast *)((struct MethodDef *)current)->param);
					descendant_count++;
				}
				if(((struct MethodDef *)current)->compoundStmt != NULL)
				{
					put((struct ast *)((struct MethodDef *)current)->compoundStmt);
					descendant_count++;
				}
				if(((struct MethodDef *)current)->prev != NULL)
				{
					put((struct ast *)((struct MethodDef *)current)->prev);
					descendant_count++;
				}
				break;
			case CLASSMETHODDEF:
				char *className = ((struct ClassMethodDef *)current)->className;
				char *methodName = ((struct ClassMethodDef *)current)->methodName;
				fprintf(fp, "ClassMethodDef(%s::%s) ", className, methodName);
				if(((struct MethodDef *)current)->type2 != NULL)
				{
					put((struct ast *)((struct MethodDef *)current)->type2);
					descendant_count++;
				}
				if(((struct MethodDef *)current)->param != NULL)
				{
					put((struct ast *)((struct MethodDef *)current)->param);
					descendant_count++;
				}
				if(((struct MethodDef *)current)->compoundStmt != NULL)
				{
					put((struct ast *)((struct MethodDef *)current)->compoundStmt);
					descendant_count++;
				}
				if(((struct MethodDef *)current)->prev != NULL)
				{
					put((struct ast *)((struct MethodDef *)current)->prev);
					descendant_count++;
				}
				break;
			case MAIN:
				fprintf(fp, "MainFunc ");
				if(((struct MainFunc *)current)->compoundStmt != NULL)
				{
					put((struct ast *)((struct MainFunc *)current)->compoundStmt);
					descendant_count++;
				}
				break;
			case PARAM:
				fprintf(fp, "Param ");
				if(((struct Param *)current)->type2 != NULL)
				{
					put((struct ast *)((struct Param *)current)->type2);
					descendant_count++;
				}
				if(((struct Param *)current)->ident != NULL)
				{
					put((struct ast *)((struct Param *)current)->ident);
					descendant_count++;
				}
				if(((struct Param *)current)->prev != NULL)
				{
					put((struct ast *)((struct Param *)current)->prev);
					descendant_count++;
				}
				break;
			case ID:
				char *id = ((struct Ident *)current)->id;
				fprintf(fp, "Ident(%s) ", id);
				break;
			case TYPE:
				if(((struct Type *)current)->e == eInt)
					fprintf(fp, "Type(int) ");
				else if(((struct Type *)current)->e == eFloat)
					fprintf(fp, "Type(float) ");
				else
				{
					char *id = ((struct Type *)current)->id;
					fprintf(fp, "Type(%s) ", id);
				}
				break;
			case COMPOUNDSTMT:
				fprintf(fp, "CompoundStmt ");
				if(((struct CompoundStmt *)current)->varDecl != NULL)
				{
					put((struct ast *)((struct CompoundStmt *)current)->varDecl);
					descendant_count++;
				}
				if(((struct CompoundStmt *)current)->stmt != NULL)
				{
					put((struct ast *)((struct CompoundStmt *)current)->stmt);
					descendant_count++;
				}
				break;
			case STMT:
				fprintf(fp, "Stmt ");
				if(e == eExpr)
				{
					put((struct ast *)((struct Stmt *)current)->type2.exprStmt);
					descendant_count++;
				}
				else if(e == eAssign)
				{
					put((struct ast *)((struct Stmt *)current)->type2.assignStmt);
					descendant_count++;
				}
				else if(e == eRet)
				{
					put((struct ast *)((struct Stmt *)current)->type2.retStmt);
					descendant_count++;
				}
				else if(e == eWhile)
				{
					put((struct ast *)((struct Stmt *)current)->type2.whileStmt);
					descendant_count++;
				}
				else if(e == eDo)
				{
					put((struct ast *)((struct Stmt *)current)->type2.doStmt);
					descendant_count++;
				}
				else if(e == eFor)
				{
					put((struct ast *)((struct Stmt *)current)->type2.forStmt);
					descendant_count++;
				}
				else if(e == eIf)
				{
					put((struct ast *)((struct Stmt *)current)->type2.ifStmt);
					descendant_count++;
				}
				else
				{
					put((struct ast *)((struct Stmt *)current)->type2.compoundStmt);
					descendant_count++;
				}
				if(((struct Stmt *)current)->prev != NULL)
				{
					put((struct ast *)((struct Stmt *)current)->prev);
					descendant_count++;
				}
				break;
			case EXPRSTMT:
				fprintf(fp, "ExprStmt ");
				if(((struct ExprStmt *)current)->expr != NULL)
				{
					put((struct ast *)((struct ExprStmt *)current)->expr);
					descendant_count++;
				}
			case ASSIGNMENT:
				fprintf(fp, "ArrignStmt ");
				if(((struct AssignStmt *)current)->refVarExpr != NULL)
				{
					put((struct ast *)((struct AssignStmt *)current)->refVarExpr);
					descendant_count++;
				}
				if(((struct AssignStmt *)current)->expr != NULL)
				{
					put((struct ast *)((struct AssignStmt *)current)->expr);
					descendant_count++;
				}
			case RETURN:
				fprintf(fp, "RetStmt ");
				if(((struct RetStmt *)current)->expr != NULL)
				{
					put((struct ast *)((struct RetStmt *)current)->expr);
					descendant_count++;
				}
			case WHILE:
				fprintf(fp, "WhileStmt ");
				if(((struct WhileStmt *)current)->cond != NULL)
				{
					put((struct ast *)((struct WhileStmt *)current)->cond);
					descendant_count++;
				}
				if(((struct WhileStmt *)current)->body != NULL)
				{
					put((struct ast *)((struct WhileStmt *)current)->body);
					descendant_count++;
				}
			case DO:
			case FOR:
			case IF:
			case EXPR:
			case OPEREXPR:
			case REFEXPR:
			case REFVAREXPR:
			case REFCALLEXPR:
			case IDENTEXPR:
			case CALLEXPR:
			case ARGLIST:
		}
	}

	fclose(fp);
}