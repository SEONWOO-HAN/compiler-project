/**
 * Copyright (C) 2017 ARCS lab - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the ARCS license
 *
 * You should have received a copy of the ARCS license with
 * this file. If not, please write to: jhpark@arcs.skku.edu
 *
 * Freely use this source code, but not allowed for any
 * commercial uses.
 */

#ifndef AST_H
#define AST_H

typedef char bool;
#define true 1
#define false 0

/**
 * Before you started..
 *
 * This file is a header file to implement the Abstract Syntax Tree(AST).
 * You have to use the following structs as the nodes of the tree.
 * This file will be included in bison implementation and tree walker.
 * There are some informations that helps you using this header easly.
 * So we recommend you to read carefully not olny this comment,
 * but also those written in each line.
 * 
 * First of all, all nodes are designed to target the visitor model.
 * There are two models of tree walkers; visitor and listener.
 * In visitor model, the developer controls the order of tree walks one by one.
 * You are developer in this case.
 * For example, when the tree walker program meets "Expr - Expr",
 * you have to make the program visit the right-hand side first at this time.
 *
 * The next information is how to implement "List" structs.
 * All structs of List is implemented in linked list.
 * The variable named "prev" connect between node.
 * The reason not using "next" variable is related to the execution model of Bison.
 * Bison tool is designed for visiting leaf node first.
 * It means that the parser will stack the nodes up while generating AST.
 */

typedef enum
{eInt, eFloat, eClass} Type_e;
typedef enum
{eExpr, eAssign, eRet, eWhile, eDo, eFor, eIf, eCompound, eSemi} Stmt_e;
typedef enum
{eOper, eRef, eIntnum, eFloatnum} Expr_e;
typedef enum
{eUn, eAddi, eMult, eRela, eEqlt, eBracket} Oper_e;
typedef enum
{eVar, eCall} Ref_e;
typedef enum
{eNegative} Unop_e;
typedef enum
{ePlus, eMinus} Addi_e;
typedef enum
{eMul, eDiv} Mult_e;
typedef enum
{eLT, eGT, eLE, eGE} Rela_e;
typedef enum
{eEQ, eNE} Eqlt_e;

// Program := (ClassList)? (ClassMethod)? MainFunc
struct Program {
	int type;
	struct Class *_class;
	struct ClassMethodDef *classMethodDef;
	struct MainFunc *mainFunc;
};

// ClassList := (Class)+
// Class := class id { (previate : Member)? (public : Member)? }
struct Class {
	int type;
	char *id;
	struct Member *priMember;
	struct Member *pubMember;
	struct Class *prev;
};

// Member := (VarDeclList)? (MethodDeclList)? (MethodDefList)?
struct Member {
	int type;
	struct VarDecl *varDecl;
	struct MethodDecl *methodDecl;
	struct MethodDef *methodDef;
};

// VarDeclList := (VarDecl)+
// VarDecl := Type Ident (= (intnum|floatnum))? ;
struct VarDecl {
	int type1;
	struct Type *type2;
	struct Ident *ident;
	bool isInt;	// true if type of assigner value is int, else false
	union {
		int intnum;
		float floatnum;
	} assigner;
	struct VarDecl *prev;
};

// MethodDeclList := (MethodDecl)+
// MethodDecl := Type id ( (ParamList)? ) ;
struct MethodDecl {
	int type1;
	char *id;
	struct Type *type2;
	struct Param *param;
	struct MethodDecl *prev;
};

// MethodDefList := (MethodDef)+
// MethodDef := Type id ( (ParamList)? ) CompoundStmt
struct MethodDef {
	int type1;
	char *id;
	struct Type *type2;
	struct Param *param;
	struct CompoundStmt *compoundStmt;
	struct MethodDef *prev;
};

// ClassMethodList := (ClassMethodDef)+
// ClassMethodDef := Type id :: id ( (ParamList)? ) CompoundStmt
struct ClassMethodDef {
	int type1;
	struct Type *type2;
	char *className;
	char *methodName;
	struct Param *param;
	struct CompoundStmt *compoundStmt;
	struct ClassMethodDef *prev;
};

// MainFunc := int main ( ) CompoundStmt
struct MainFunc {
	int type;
	struct CompoundStmt *compoundStmt;
};

// ParamList := Param (, Param)*
// Param := Type Ident
struct Param {
	int type1;
	struct Type *type2;
	struct Ident *ident;
	struct Param *prev;
};

// Ident := id
//        | id [ intnum ]
struct Ident {
	int type
	char *id;
	int len; // 0 if scalar
};

// Type := int
//       | float
//       | id
struct Type {
	int type
	char *id; // NULL unless class type
	Type_e e;
};

// CompoundStmt := { (VarDeclList)? (StmtList)? }
struct CompoundStmt {
	int type;
	struct VarDecl *varDecl;
	struct Stmt *stmt;
};

// StmtList := (Stmt)+
// Stmt := ExprStmt
//       | AssignStmt
//       | RetStmt
//       | WhileStmt
//       | DoStmt
//       | ForStmt
//       | IfStmt
//       | CompoundStmt
//       | ;
struct Stmt {
	int type1;
	Stmt_e e;
	union {
		struct ExprStmt *exprStmt;
		struct AssignStmt *assignStmt;
		struct RetStmt *retStmt;
		struct WhileStmt *whileStmt;
		struct DoStmt *doStmt;
		struct ForStmt *forStmt;
		struct IfStmt *ifStmt;
		struct CompoundStmt *compoundStmt;
	} type2;
	struct Stmt *prev;
};

// ExprStmt := Expr ;
struct ExprStmt {
	int type;
	struct Expr *expr;
};

// AssignStmt := RefVarExpr = Expr ;
struct AssignStmt {
	int type;
	struct RefVarExpr *refVarExpr;
	struct Expr *expr;
};

// RetStmt := return (Expr)? ;
struct RetStmt {
	int type;
	struct Expr *expr;
};

// WhileStmt := while ( Expr ) Stmt
struct WhileStmt {
	int type;
	struct Expr *cond;
	struct Stmt *body;
};

// DoStmt := do Stmt while ( Expr ) ;
struct DoStmt {
	int type;
	struct Expr *cond;
	struct Stmt *body;
};

// ForStmt := for ( Expr ; Expr ; Expr ) Stmt
struct ForStmt {
	int type;
	struct Expr *init, *cond, *incr;
	struct Stmt *body;
};

// IfStmt := if ( Expr ) Stmt (else Stmt)?
struct IfStmt {
	int type;
	struct Expr *cond;
	struct Stmt *ifBody;
	struct Stmt *elseBody;
};

// Expr := OperExpr
//       | RefExpr
//       | intnum
//       | floatnum
struct Expr {
	Expr_e e;
	int type1;
	union {
		struct OperExpr *operExpr;
		struct RefExpr *refExpr;
		int intnum;
		float floatnum;
	} type;
};

// OperExpr := unop Expr
//           | Expr addiop Expr
//           | Expr multop Expr
//           | Expr relaop Expr
//           | Expr eqltop Expr
//           | ( Expr )
struct OperExpr {
	Oper_e e;
	int type1;
	union {
		struct UnOp *un;
		struct AddiOp *addi;
		struct MultOp *mult;
		struct RelaOp *rela;
		struct EqltOp *eqlt;
		struct Expr *bracket;
	} type;
};

// RefExpr := RefVarExpr
//          | RefCallExpr
struct RefExpr {
	Ref_e e;
	int type1;
	union {
		struct RefVarExpr *refVarExpr;
		struct RefCallExpr *refCallExpr;
	} type;
};

// RefVarExpr := (RefExpr .)? IdentExpr
struct RefVarExpr {
	int type;
	struct RefExpr *refExpr;
	struct IdentExpr *identExpr;
};

// RefCallExpr := (RefExpr .)? CallExpr
struct RefCallExpr {
	int type;
	struct RefExpr *refExpr;
	struct CallExpr *callExpr;
};

// IdentExpr := id [ Expr ]
//            | id
struct IdentExpr {
	int type;
	char *id;
	struct Expr *expr; // NULL if scalar
};

// CallExpr := id ( (ArgList)? )
struct CallExpr {
	int type;
	char *id;
	struct Arg *arg;
};

// ArgList := Expr (, Expr)*
struct Arg {
	int type;
	struct Expr *expr;
	struct Arg *prev;
};

/** Following definitions are additional structs for OperExpr. **/
struct UnOp {
	Unop_e e;
	struct Expr *expr;
};

struct AddiOp {
	Addi_e e;
	struct Expr *lhs;
	struct Expr *rhs;
};

struct MultOp {
	Mult_e e;
	struct Expr *lhs;
	struct Expr *rhs;
};

struct RelaOp {
	Rela_e e;
	struct Expr *lhs;
	struct Expr *rhs;
};

struct EqltOp {
	Eqlt_e e;
	struct Expr *lhs;
	struct Expr *rhs;
};

struct ast {
	int type;
	struct ast *l;
	struct ast *r;
};

//struct ast *alloc_ast(int type, struct ast *, struct ast *);
struct ast *alloc_program(int type, struct ast *_class, struct ast *classMethodDef, struct ast *mainFunc);
struct ast *alloc_class(int type, char *id, struct ast *priMember, struct ast *pubMember, struct ast *prev);
struct ast *change_class_prev(struct ast *_class, struct ast *prev);
struct ast *alloc_member(int type, struct ast *varDecl, struct ast *methodDecl, struct ast *methodDef);
struct ast *alloc_vardecl(int type1, struct ast *type2, struct ast *ident, bool isInt, union { int intnum; float floatnum; } assigner, struct ast *prev);
struct ast *change_vardecl_prev(struct ast *varDecl, struct ast *prev);
struct ast *alloc_methoddecl(int type1, char *id, struct ast *type2, struct ast *param, struct ast *prev);
struct ast *change_methoddecl_prev(struct ast *methodDecl, struct ast *prev);
struct ast *alloc_methoddef(int type1, char *id, struct ast *type2, struct ast *param, struct ast *compoundStmt, struct ast *prev);
struct ast *change_methoddef_prev(struct ast *methodDef, struct ast *prev);
struct ast *alloc_classmethoddef(int type1, struct ast *type2, char *className, char *methodName, struct ast *param, struct ast *compoundStmt, struct ast *prev);
struct ast *change_classmethoddef_prev(struct ast *classMethodDef, struct ast *prev);
struct ast *alloc_mainfunc(int type, struct ast *compoundStmt);
struct ast *alloc_param(int type1, struct ast *type2, struct ast *ident, struct ast *prev);
struct ast *change_param_prev(struct ast *param, struct ast *prev);
struct ast *alloc_ident(int type, char *id, int len);
struct ast *alloc_type(int type, char *id, Type_e e);
struct ast *alloc_compoundstmt(int type, struct ast *varDecl, struct ast *stmt);
struct ast *alloc_stmt(int type1, Stmt_e e, union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2, struct ast *prev);
struct ast *change_stmt_prev(struct ast *stmt, struct ast *prev);

struct ast *alloc_exprstmt(int type, struct ast* expr);
struct ast *alloc_assignstmt(int type, struct ast* refVarExpr, struct ast* expr);
struct ast *alloc_retstmt(int type, struct ast* expr);
struct ast *alloc_whilestmt(int type, struct ast* cond, struct ast* body);
struct ast *alloc_dostmt(int type, struct ast* cond, struct ast* body);
struct ast *alloc_forstmt(int type, struct ast* init, struct ast* cond, struct ast* incr,	struct ast* body);
struct ast *alloc_ifstmt(int type, struct ast* cond, struct ast* ifbody, struct ast* elsebody);
struct ast *alloc_expr(int type1, Expr_e e, int intnum, float floatnum, struct ast* expr);
struct ast *alloc_operexpr(int type1, Oper_e e,	struct ast* operexpr, struct ast* expr1, struct ast* expr2);
struct ast *alloc_refexpr(int type1, Ref_e e, struct ast* ref_Expr);
struct ast *alloc_refvarexpr(int type, struct ast* refExpr, struct ast* identExpr);
struct ast *alloc_refcallexpr(int type, struct ast* refExpr, struct ast* callExpr);
struct ast *alloc_identexpr(int type, char* id, struct ast* expr);
struct ast *alloc_callexpr(int type, char* id, struct ast* arg);
struct ast *alloc_arg(int type, struct ast* expr, struct ast* prev);
struct ast *change_arg_prev(struct ast *arg, struct ast *prev);
//void free_ast(struct ast *);

#endif
