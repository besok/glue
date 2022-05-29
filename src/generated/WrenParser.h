
// Generated from C:/projects/goll/grammar/WrenParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  WrenParser : public antlr4::Parser {
public:
  enum {
    AS = 1, BREAK_T = 2, CLASS_T = 3, CONSTRUCT = 4, CONTINUE_T = 5, ELSE_T = 6, 
    FALSE_T = 7, FOR_T = 8, FOREIGN_T = 9, IF_T = 10, IMPORT_T = 11, IN = 12, 
    IS = 13, NULL_T = 14, RETURN_T = 15, STATIC_T = 16, TRUE_T = 17, VAR_T = 18, 
    WHILE_T = 19, LPAREN = 20, RPAREN = 21, LBRACE = 22, RBRACE = 23, LBRACK = 24, 
    RBRACK = 25, SEMI = 26, COMMA = 27, DOT = 28, HASH = 29, GT = 30, LT = 31, 
    BANG = 32, TILDE = 33, QUESTION = 34, COLON = 35, EQUAL = 36, LE = 37, 
    GE = 38, NOTEQUAL = 39, AND = 40, OR = 41, INC = 42, DEC = 43, ADD = 44, 
    SUB = 45, MUL = 46, DIV = 47, BITAND = 48, BITOR = 49, CARET = 50, MOD = 51, 
    ASSIGN = 52, ADD_ASSIGN = 53, SUB_ASSIGN = 54, MUL_ASSIGN = 55, DIV_ASSIGN = 56, 
    AND_ASSIGN = 57, OR_ASSIGN = 58, XOR_ASSIGN = 59, MOD_ASSIGN = 60, LSHIFT_ASSIGN = 61, 
    LSHIFT = 62, RSHIFT = 63, RSHIFT_ASSIGN = 64, URSHIFT_ASSIGN = 65, ELLIPSIS_OUT = 66, 
    ELLIPSIS_IN = 67, IDENTIFIER = 68, DECIMAL_LITERAL = 69, HEX_LITERAL = 70, 
    OCT_LITERAL = 71, BINARY_LITERAL = 72, FLOAT_LITERAL = 73, HEX_FLOAT_LITERAL = 74, 
    CHAR_LITERAL = 75, STRING_LITERAL = 76, TEXT_BLOCK = 77, WS = 78, COMMENT = 79, 
    LINE_COMMENT = 80, ERRCHAR = 81
  };

  enum {
    RuleScript = 0, RuleFileAtom = 1, RuleAssignment = 2, RuleAssignmentNull = 3, 
    RuleAssignOp = 4, RuleIfSt = 5, RuleIfCond = 6, RuleElseIf = 7, RuleElseSt = 8, 
    RuleWhileSt = 9, RuleForSt = 10, RuleStatement = 11, RuleLambdaParameters = 12, 
    RuleBlock = 13, RuleReturnSt = 14, RuleClassDefinition = 15, RuleInheritance = 16, 
    RuleAttribute = 17, RuleAttributes = 18, RuleAttributeValue = 19, RuleSimpleAttribute = 20, 
    RuleGroupAttribute = 21, RuleClassBody = 22, RuleClassBodyTpe = 23, 
    RuleClassStatement = 24, RuleClassConstructor = 25, RuleOperatorGetter = 26, 
    RuleOperatorSetter = 27, RuleClassOpGetter = 28, RuleClassOpSetter = 29, 
    RuleOneArgument = 30, RuleSubscript = 31, RuleClassSubscriptGet = 32, 
    RuleClassSubscriptSet = 33, RuleClassSetter = 34, RuleAssignmentSetter = 35, 
    RuleArguments = 36, RuleFunction = 37, RuleImportModule = 38, RuleImportVariable = 39, 
    RuleImportVariables = 40, RuleCall = 41, RuleCallInvoke = 42, RuleExpression = 43, 
    RuleCompoundExpression = 44, RuleAtomExpression = 45, RuleEnumeration = 46, 
    RulePairEnumeration = 47, RuleRange = 48, RuleListInit = 49, RuleMapInit = 50, 
    RuleElem = 51, RuleCollectionElem = 52, RuleRangeExpression = 53, RuleArithMul = 54, 
    RuleArithAdd = 55, RuleArithRange = 56, RuleArithShift = 57, RuleArithBit = 58, 
    RuleLogicOp = 59, RuleAtomLogic = 60, RuleAndLogic = 61, RuleLogic = 62, 
    RuleElvis = 63, RuleId = 64, RuleBoolE = 65, RuleCharE = 66, RuleStringE = 67, 
    RuleNumE = 68, RuleNullE = 69
  };

  explicit WrenParser(antlr4::TokenStream *input);

  WrenParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~WrenParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ScriptContext;
  class FileAtomContext;
  class AssignmentContext;
  class AssignmentNullContext;
  class AssignOpContext;
  class IfStContext;
  class IfCondContext;
  class ElseIfContext;
  class ElseStContext;
  class WhileStContext;
  class ForStContext;
  class StatementContext;
  class LambdaParametersContext;
  class BlockContext;
  class ReturnStContext;
  class ClassDefinitionContext;
  class InheritanceContext;
  class AttributeContext;
  class AttributesContext;
  class AttributeValueContext;
  class SimpleAttributeContext;
  class GroupAttributeContext;
  class ClassBodyContext;
  class ClassBodyTpeContext;
  class ClassStatementContext;
  class ClassConstructorContext;
  class OperatorGetterContext;
  class OperatorSetterContext;
  class ClassOpGetterContext;
  class ClassOpSetterContext;
  class OneArgumentContext;
  class SubscriptContext;
  class ClassSubscriptGetContext;
  class ClassSubscriptSetContext;
  class ClassSetterContext;
  class AssignmentSetterContext;
  class ArgumentsContext;
  class FunctionContext;
  class ImportModuleContext;
  class ImportVariableContext;
  class ImportVariablesContext;
  class CallContext;
  class CallInvokeContext;
  class ExpressionContext;
  class CompoundExpressionContext;
  class AtomExpressionContext;
  class EnumerationContext;
  class PairEnumerationContext;
  class RangeContext;
  class ListInitContext;
  class MapInitContext;
  class ElemContext;
  class CollectionElemContext;
  class RangeExpressionContext;
  class ArithMulContext;
  class ArithAddContext;
  class ArithRangeContext;
  class ArithShiftContext;
  class ArithBitContext;
  class LogicOpContext;
  class AtomLogicContext;
  class AndLogicContext;
  class LogicContext;
  class ElvisContext;
  class IdContext;
  class BoolEContext;
  class CharEContext;
  class StringEContext;
  class NumEContext;
  class NullEContext; 

  class  ScriptContext : public antlr4::ParserRuleContext {
  public:
    ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<FileAtomContext *> fileAtom();
    FileAtomContext* fileAtom(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScriptContext* script();

  class  FileAtomContext : public antlr4::ParserRuleContext {
  public:
    FileAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDefinitionContext *classDefinition();
    FunctionContext *function();
    ImportModuleContext *importModule();
    StatementContext *statement();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileAtomContext* fileAtom();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    AssignOpContext *assignOp();
    antlr4::tree::TerminalNode *VAR_T();
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  AssignmentNullContext : public antlr4::ParserRuleContext {
  public:
    AssignmentNullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR_T();
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentNullContext* assignmentNull();

  class  AssignOpContext : public antlr4::ParserRuleContext {
  public:
    AssignOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *ADD_ASSIGN();
    antlr4::tree::TerminalNode *SUB_ASSIGN();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *AND_ASSIGN();
    antlr4::tree::TerminalNode *OR_ASSIGN();
    antlr4::tree::TerminalNode *XOR_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *LSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *RSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *URSHIFT_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignOpContext* assignOp();

  class  IfStContext : public antlr4::ParserRuleContext {
  public:
    IfStContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfCondContext *ifCond();
    StatementContext *statement();
    std::vector<ElseIfContext *> elseIf();
    ElseIfContext* elseIf(size_t i);
    ElseStContext *elseSt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStContext* ifSt();

  class  IfCondContext : public antlr4::ParserRuleContext {
  public:
    IfCondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_T();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfCondContext* ifCond();

  class  ElseIfContext : public antlr4::ParserRuleContext {
  public:
    ElseIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_T();
    IfCondContext *ifCond();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseIfContext* elseIf();

  class  ElseStContext : public antlr4::ParserRuleContext {
  public:
    ElseStContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_T();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseStContext* elseSt();

  class  WhileStContext : public antlr4::ParserRuleContext {
  public:
    WhileStContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE_T();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();
    ExpressionContext *expression();
    AssignmentContext *assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStContext* whileSt();

  class  ForStContext : public antlr4::ParserRuleContext {
  public:
    ForStContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_T();
    antlr4::tree::TerminalNode *LPAREN();
    IdContext *id();
    antlr4::tree::TerminalNode *IN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStContext* forSt();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    AssignmentContext *assignment();
    AssignmentNullContext *assignmentNull();
    IfStContext *ifSt();
    WhileStContext *whileSt();
    ForStContext *forSt();
    BlockContext *block();
    ReturnStContext *returnSt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  LambdaParametersContext : public antlr4::ParserRuleContext {
  public:
    LambdaParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> BITOR();
    antlr4::tree::TerminalNode* BITOR(size_t i);
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaParametersContext* lambdaParameters();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    LambdaParametersContext *lambdaParameters();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  ReturnStContext : public antlr4::ParserRuleContext {
  public:
    ReturnStContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN_T();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStContext* returnSt();

  class  ClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS_T();
    IdContext *id();
    antlr4::tree::TerminalNode *LBRACE();
    ClassBodyContext *classBody();
    antlr4::tree::TerminalNode *RBRACE();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *FOREIGN_T();
    InheritanceContext *inheritance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDefinitionContext* classDefinition();

  class  InheritanceContext : public antlr4::ParserRuleContext {
  public:
    InheritanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS();
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InheritanceContext* inheritance();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleAttributeContext *simpleAttribute();
    GroupAttributeContext *groupAttribute();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  AttributesContext : public antlr4::ParserRuleContext {
  public:
    AttributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributesContext* attributes();

  class  AttributeValueContext : public antlr4::ParserRuleContext {
  public:
    AttributeValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    antlr4::tree::TerminalNode *ASSIGN();
    AtomExpressionContext *atomExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeValueContext* attributeValue();

  class  SimpleAttributeContext : public antlr4::ParserRuleContext {
  public:
    SimpleAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    AttributeValueContext *attributeValue();
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleAttributeContext* simpleAttribute();

  class  GroupAttributeContext : public antlr4::ParserRuleContext {
  public:
    GroupAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    IdContext *id();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<AttributeValueContext *> attributeValue();
    AttributeValueContext* attributeValue(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *BANG();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GroupAttributeContext* groupAttribute();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassStatementContext *> classStatement();
    ClassStatementContext* classStatement(size_t i);
    std::vector<AttributesContext *> attributes();
    AttributesContext* attributes(size_t i);
    std::vector<ClassBodyTpeContext *> classBodyTpe();
    ClassBodyTpeContext* classBodyTpe(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassBodyContext* classBody();

  class  ClassBodyTpeContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyTpeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOREIGN_T();
    antlr4::tree::TerminalNode *STATIC_T();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassBodyTpeContext* classBodyTpe();

  class  ClassStatementContext : public antlr4::ParserRuleContext {
  public:
    ClassStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    ClassOpGetterContext *classOpGetter();
    ClassSetterContext *classSetter();
    ClassSubscriptGetContext *classSubscriptGet();
    ClassSubscriptSetContext *classSubscriptSet();
    ClassOpSetterContext *classOpSetter();
    ClassConstructorContext *classConstructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassStatementContext* classStatement();

  class  ClassConstructorContext : public antlr4::ParserRuleContext {
  public:
    ClassConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRUCT();
    IdContext *id();
    ArgumentsContext *arguments();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassConstructorContext* classConstructor();

  class  OperatorGetterContext : public antlr4::ParserRuleContext {
  public:
    OperatorGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *BANG();
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperatorGetterContext* operatorGetter();

  class  OperatorSetterContext : public antlr4::ParserRuleContext {
  public:
    OperatorSetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ELLIPSIS_OUT();
    antlr4::tree::TerminalNode *ELLIPSIS_IN();
    antlr4::tree::TerminalNode *LSHIFT();
    antlr4::tree::TerminalNode *RSHIFT();
    antlr4::tree::TerminalNode *BITAND();
    antlr4::tree::TerminalNode *CARET();
    antlr4::tree::TerminalNode *BITOR();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *IS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperatorSetterContext* operatorSetter();

  class  ClassOpGetterContext : public antlr4::ParserRuleContext {
  public:
    ClassOpGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatorGetterContext *operatorGetter();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassOpGetterContext* classOpGetter();

  class  ClassOpSetterContext : public antlr4::ParserRuleContext {
  public:
    ClassOpSetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatorSetterContext *operatorSetter();
    OneArgumentContext *oneArgument();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassOpSetterContext* classOpSetter();

  class  OneArgumentContext : public antlr4::ParserRuleContext {
  public:
    OneArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    IdContext *id();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OneArgumentContext* oneArgument();

  class  SubscriptContext : public antlr4::ParserRuleContext {
  public:
    SubscriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    EnumerationContext *enumeration();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubscriptContext* subscript();

  class  ClassSubscriptGetContext : public antlr4::ParserRuleContext {
  public:
    ClassSubscriptGetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubscriptContext *subscript();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassSubscriptGetContext* classSubscriptGet();

  class  ClassSubscriptSetContext : public antlr4::ParserRuleContext {
  public:
    ClassSubscriptSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubscriptContext *subscript();
    antlr4::tree::TerminalNode *ASSIGN();
    OneArgumentContext *oneArgument();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassSubscriptSetContext* classSubscriptSet();

  class  ClassSetterContext : public antlr4::ParserRuleContext {
  public:
    ClassSetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    AssignmentSetterContext *assignmentSetter();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassSetterContext* classSetter();

  class  AssignmentSetterContext : public antlr4::ParserRuleContext {
  public:
    AssignmentSetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    OneArgumentContext *oneArgument();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentSetterContext* assignmentSetter();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    ArgumentsContext *arguments();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  ImportModuleContext : public antlr4::ParserRuleContext {
  public:
    ImportModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT_T();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    ImportVariablesContext *importVariables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportModuleContext* importModule();

  class  ImportVariableContext : public antlr4::ParserRuleContext {
  public:
    ImportVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportVariableContext* importVariable();

  class  ImportVariablesContext : public antlr4::ParserRuleContext {
  public:
    ImportVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_T();
    std::vector<ImportVariableContext *> importVariable();
    ImportVariableContext* importVariable(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportVariablesContext* importVariables();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    CallInvokeContext *callInvoke();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallContext* call();

  class  CallInvokeContext : public antlr4::ParserRuleContext {
  public:
    CallInvokeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    EnumerationContext *enumeration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallInvokeContext* callInvoke();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BANG();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    AtomExpressionContext *atomExpression();
    CompoundExpressionContext *compoundExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  CompoundExpressionContext : public antlr4::ParserRuleContext {
  public:
    CompoundExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicContext *logic();
    ArithBitContext *arithBit();
    ArithShiftContext *arithShift();
    ArithRangeContext *arithRange();
    ArithAddContext *arithAdd();
    ArithMulContext *arithMul();
    antlr4::tree::TerminalNode *DOT();
    CallContext *call();
    antlr4::tree::TerminalNode *IS();
    ExpressionContext *expression();
    ElvisContext *elvis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundExpressionContext* compoundExpression();

  class  AtomExpressionContext : public antlr4::ParserRuleContext {
  public:
    AtomExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolEContext *boolE();
    CharEContext *charE();
    StringEContext *stringE();
    NumEContext *numE();
    NullEContext *nullE();
    ListInitContext *listInit();
    MapInitContext *mapInit();
    CallContext *call();
    RangeContext *range();
    CollectionElemContext *collectionElem();
    antlr4::tree::TerminalNode *BREAK_T();
    antlr4::tree::TerminalNode *CONTINUE_T();
    ImportModuleContext *importModule();
    antlr4::tree::TerminalNode *SUB();
    AtomExpressionContext *atomExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtomExpressionContext* atomExpression();

  class  EnumerationContext : public antlr4::ParserRuleContext {
  public:
    EnumerationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumerationContext* enumeration();

  class  PairEnumerationContext : public antlr4::ParserRuleContext {
  public:
    PairEnumerationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PairEnumerationContext* pairEnumeration();

  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RangeExpressionContext *> rangeExpression();
    RangeExpressionContext* rangeExpression(size_t i);
    antlr4::tree::TerminalNode *ELLIPSIS_IN();
    antlr4::tree::TerminalNode *ELLIPSIS_OUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeContext* range();

  class  ListInitContext : public antlr4::ParserRuleContext {
  public:
    ListInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    EnumerationContext *enumeration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListInitContext* listInit();

  class  MapInitContext : public antlr4::ParserRuleContext {
  public:
    MapInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    PairEnumerationContext *pairEnumeration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MapInitContext* mapInit();

  class  ElemContext : public antlr4::ParserRuleContext {
  public:
    ElemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    StringEContext *stringE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElemContext* elem();

  class  CollectionElemContext : public antlr4::ParserRuleContext {
  public:
    CollectionElemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElemContext *elem();
    ListInitContext *listInit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CollectionElemContext* collectionElem();

  class  RangeExpressionContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    NumEContext *numE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeExpressionContext* rangeExpression();

  class  ArithMulContext : public antlr4::ParserRuleContext {
  public:
    ArithMulContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithMulContext* arithMul();

  class  ArithAddContext : public antlr4::ParserRuleContext {
  public:
    ArithAddContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *ADD();
    ArithMulContext *arithMul();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithAddContext* arithAdd();

  class  ArithRangeContext : public antlr4::ParserRuleContext {
  public:
    ArithRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELLIPSIS_IN();
    antlr4::tree::TerminalNode *ELLIPSIS_OUT();
    ArithAddContext *arithAdd();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithRangeContext* arithRange();

  class  ArithShiftContext : public antlr4::ParserRuleContext {
  public:
    ArithShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSHIFT();
    antlr4::tree::TerminalNode *RSHIFT();
    ArithRangeContext *arithRange();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithShiftContext* arithShift();

  class  ArithBitContext : public antlr4::ParserRuleContext {
  public:
    ArithBitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITAND();
    antlr4::tree::TerminalNode *BITOR();
    antlr4::tree::TerminalNode *CARET();
    ArithShiftContext *arithShift();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithBitContext* arithBit();

  class  LogicOpContext : public antlr4::ParserRuleContext {
  public:
    LogicOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *NOTEQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicOpContext* logicOp();

  class  AtomLogicContext : public antlr4::ParserRuleContext {
  public:
    AtomLogicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicOpContext *logicOp();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtomLogicContext* atomLogic();

  class  AndLogicContext : public antlr4::ParserRuleContext {
  public:
    AndLogicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AtomLogicContext *> atomLogic();
    AtomLogicContext* atomLogic(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndLogicContext* andLogic();

  class  LogicContext : public antlr4::ParserRuleContext {
  public:
    LogicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndLogicContext *> andLogic();
    AndLogicContext* andLogic(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicContext* logic();

  class  ElvisContext : public antlr4::ParserRuleContext {
  public:
    ElvisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElvisContext* elvis();

  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdContext* id();

  class  BoolEContext : public antlr4::ParserRuleContext {
  public:
    BoolEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_T();
    antlr4::tree::TerminalNode *FALSE_T();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BoolEContext* boolE();

  class  CharEContext : public antlr4::ParserRuleContext {
  public:
    CharEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharEContext* charE();

  class  StringEContext : public antlr4::ParserRuleContext {
  public:
    StringEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *TEXT_BLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringEContext* stringE();

  class  NumEContext : public antlr4::ParserRuleContext {
  public:
    NumEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *HEX_LITERAL();
    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    antlr4::tree::TerminalNode *HEX_FLOAT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumEContext* numE();

  class  NullEContext : public antlr4::ParserRuleContext {
  public:
    NullEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_T();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullEContext* nullE();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

