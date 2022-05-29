
// Generated from C:/projects/goll/grammar/WrenParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "WrenParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by WrenParser.
 */
class  WrenParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterScript(WrenParser::ScriptContext *ctx) = 0;
  virtual void exitScript(WrenParser::ScriptContext *ctx) = 0;

  virtual void enterFileAtom(WrenParser::FileAtomContext *ctx) = 0;
  virtual void exitFileAtom(WrenParser::FileAtomContext *ctx) = 0;

  virtual void enterAssignment(WrenParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(WrenParser::AssignmentContext *ctx) = 0;

  virtual void enterAssignmentNull(WrenParser::AssignmentNullContext *ctx) = 0;
  virtual void exitAssignmentNull(WrenParser::AssignmentNullContext *ctx) = 0;

  virtual void enterAssignOp(WrenParser::AssignOpContext *ctx) = 0;
  virtual void exitAssignOp(WrenParser::AssignOpContext *ctx) = 0;

  virtual void enterIfSt(WrenParser::IfStContext *ctx) = 0;
  virtual void exitIfSt(WrenParser::IfStContext *ctx) = 0;

  virtual void enterIfCond(WrenParser::IfCondContext *ctx) = 0;
  virtual void exitIfCond(WrenParser::IfCondContext *ctx) = 0;

  virtual void enterElseIf(WrenParser::ElseIfContext *ctx) = 0;
  virtual void exitElseIf(WrenParser::ElseIfContext *ctx) = 0;

  virtual void enterElseSt(WrenParser::ElseStContext *ctx) = 0;
  virtual void exitElseSt(WrenParser::ElseStContext *ctx) = 0;

  virtual void enterWhileSt(WrenParser::WhileStContext *ctx) = 0;
  virtual void exitWhileSt(WrenParser::WhileStContext *ctx) = 0;

  virtual void enterForSt(WrenParser::ForStContext *ctx) = 0;
  virtual void exitForSt(WrenParser::ForStContext *ctx) = 0;

  virtual void enterStatement(WrenParser::StatementContext *ctx) = 0;
  virtual void exitStatement(WrenParser::StatementContext *ctx) = 0;

  virtual void enterLambdaParameters(WrenParser::LambdaParametersContext *ctx) = 0;
  virtual void exitLambdaParameters(WrenParser::LambdaParametersContext *ctx) = 0;

  virtual void enterBlock(WrenParser::BlockContext *ctx) = 0;
  virtual void exitBlock(WrenParser::BlockContext *ctx) = 0;

  virtual void enterReturnSt(WrenParser::ReturnStContext *ctx) = 0;
  virtual void exitReturnSt(WrenParser::ReturnStContext *ctx) = 0;

  virtual void enterClassDefinition(WrenParser::ClassDefinitionContext *ctx) = 0;
  virtual void exitClassDefinition(WrenParser::ClassDefinitionContext *ctx) = 0;

  virtual void enterInheritance(WrenParser::InheritanceContext *ctx) = 0;
  virtual void exitInheritance(WrenParser::InheritanceContext *ctx) = 0;

  virtual void enterAttribute(WrenParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(WrenParser::AttributeContext *ctx) = 0;

  virtual void enterAttributes(WrenParser::AttributesContext *ctx) = 0;
  virtual void exitAttributes(WrenParser::AttributesContext *ctx) = 0;

  virtual void enterAttributeValue(WrenParser::AttributeValueContext *ctx) = 0;
  virtual void exitAttributeValue(WrenParser::AttributeValueContext *ctx) = 0;

  virtual void enterSimpleAttribute(WrenParser::SimpleAttributeContext *ctx) = 0;
  virtual void exitSimpleAttribute(WrenParser::SimpleAttributeContext *ctx) = 0;

  virtual void enterGroupAttribute(WrenParser::GroupAttributeContext *ctx) = 0;
  virtual void exitGroupAttribute(WrenParser::GroupAttributeContext *ctx) = 0;

  virtual void enterClassBody(WrenParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(WrenParser::ClassBodyContext *ctx) = 0;

  virtual void enterClassBodyTpe(WrenParser::ClassBodyTpeContext *ctx) = 0;
  virtual void exitClassBodyTpe(WrenParser::ClassBodyTpeContext *ctx) = 0;

  virtual void enterClassStatement(WrenParser::ClassStatementContext *ctx) = 0;
  virtual void exitClassStatement(WrenParser::ClassStatementContext *ctx) = 0;

  virtual void enterClassConstructor(WrenParser::ClassConstructorContext *ctx) = 0;
  virtual void exitClassConstructor(WrenParser::ClassConstructorContext *ctx) = 0;

  virtual void enterOperatorGetter(WrenParser::OperatorGetterContext *ctx) = 0;
  virtual void exitOperatorGetter(WrenParser::OperatorGetterContext *ctx) = 0;

  virtual void enterOperatorSetter(WrenParser::OperatorSetterContext *ctx) = 0;
  virtual void exitOperatorSetter(WrenParser::OperatorSetterContext *ctx) = 0;

  virtual void enterClassOpGetter(WrenParser::ClassOpGetterContext *ctx) = 0;
  virtual void exitClassOpGetter(WrenParser::ClassOpGetterContext *ctx) = 0;

  virtual void enterClassOpSetter(WrenParser::ClassOpSetterContext *ctx) = 0;
  virtual void exitClassOpSetter(WrenParser::ClassOpSetterContext *ctx) = 0;

  virtual void enterOneArgument(WrenParser::OneArgumentContext *ctx) = 0;
  virtual void exitOneArgument(WrenParser::OneArgumentContext *ctx) = 0;

  virtual void enterSubscript(WrenParser::SubscriptContext *ctx) = 0;
  virtual void exitSubscript(WrenParser::SubscriptContext *ctx) = 0;

  virtual void enterClassSubscriptGet(WrenParser::ClassSubscriptGetContext *ctx) = 0;
  virtual void exitClassSubscriptGet(WrenParser::ClassSubscriptGetContext *ctx) = 0;

  virtual void enterClassSubscriptSet(WrenParser::ClassSubscriptSetContext *ctx) = 0;
  virtual void exitClassSubscriptSet(WrenParser::ClassSubscriptSetContext *ctx) = 0;

  virtual void enterClassSetter(WrenParser::ClassSetterContext *ctx) = 0;
  virtual void exitClassSetter(WrenParser::ClassSetterContext *ctx) = 0;

  virtual void enterAssignmentSetter(WrenParser::AssignmentSetterContext *ctx) = 0;
  virtual void exitAssignmentSetter(WrenParser::AssignmentSetterContext *ctx) = 0;

  virtual void enterArguments(WrenParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(WrenParser::ArgumentsContext *ctx) = 0;

  virtual void enterFunction(WrenParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(WrenParser::FunctionContext *ctx) = 0;

  virtual void enterImportModule(WrenParser::ImportModuleContext *ctx) = 0;
  virtual void exitImportModule(WrenParser::ImportModuleContext *ctx) = 0;

  virtual void enterImportVariable(WrenParser::ImportVariableContext *ctx) = 0;
  virtual void exitImportVariable(WrenParser::ImportVariableContext *ctx) = 0;

  virtual void enterImportVariables(WrenParser::ImportVariablesContext *ctx) = 0;
  virtual void exitImportVariables(WrenParser::ImportVariablesContext *ctx) = 0;

  virtual void enterCall(WrenParser::CallContext *ctx) = 0;
  virtual void exitCall(WrenParser::CallContext *ctx) = 0;

  virtual void enterCallInvoke(WrenParser::CallInvokeContext *ctx) = 0;
  virtual void exitCallInvoke(WrenParser::CallInvokeContext *ctx) = 0;

  virtual void enterExpression(WrenParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(WrenParser::ExpressionContext *ctx) = 0;

  virtual void enterCompoundExpression(WrenParser::CompoundExpressionContext *ctx) = 0;
  virtual void exitCompoundExpression(WrenParser::CompoundExpressionContext *ctx) = 0;

  virtual void enterAtomExpression(WrenParser::AtomExpressionContext *ctx) = 0;
  virtual void exitAtomExpression(WrenParser::AtomExpressionContext *ctx) = 0;

  virtual void enterEnumeration(WrenParser::EnumerationContext *ctx) = 0;
  virtual void exitEnumeration(WrenParser::EnumerationContext *ctx) = 0;

  virtual void enterPairEnumeration(WrenParser::PairEnumerationContext *ctx) = 0;
  virtual void exitPairEnumeration(WrenParser::PairEnumerationContext *ctx) = 0;

  virtual void enterRange(WrenParser::RangeContext *ctx) = 0;
  virtual void exitRange(WrenParser::RangeContext *ctx) = 0;

  virtual void enterListInit(WrenParser::ListInitContext *ctx) = 0;
  virtual void exitListInit(WrenParser::ListInitContext *ctx) = 0;

  virtual void enterMapInit(WrenParser::MapInitContext *ctx) = 0;
  virtual void exitMapInit(WrenParser::MapInitContext *ctx) = 0;

  virtual void enterElem(WrenParser::ElemContext *ctx) = 0;
  virtual void exitElem(WrenParser::ElemContext *ctx) = 0;

  virtual void enterCollectionElem(WrenParser::CollectionElemContext *ctx) = 0;
  virtual void exitCollectionElem(WrenParser::CollectionElemContext *ctx) = 0;

  virtual void enterRangeExpression(WrenParser::RangeExpressionContext *ctx) = 0;
  virtual void exitRangeExpression(WrenParser::RangeExpressionContext *ctx) = 0;

  virtual void enterArithMul(WrenParser::ArithMulContext *ctx) = 0;
  virtual void exitArithMul(WrenParser::ArithMulContext *ctx) = 0;

  virtual void enterArithAdd(WrenParser::ArithAddContext *ctx) = 0;
  virtual void exitArithAdd(WrenParser::ArithAddContext *ctx) = 0;

  virtual void enterArithRange(WrenParser::ArithRangeContext *ctx) = 0;
  virtual void exitArithRange(WrenParser::ArithRangeContext *ctx) = 0;

  virtual void enterArithShift(WrenParser::ArithShiftContext *ctx) = 0;
  virtual void exitArithShift(WrenParser::ArithShiftContext *ctx) = 0;

  virtual void enterArithBit(WrenParser::ArithBitContext *ctx) = 0;
  virtual void exitArithBit(WrenParser::ArithBitContext *ctx) = 0;

  virtual void enterLogicOp(WrenParser::LogicOpContext *ctx) = 0;
  virtual void exitLogicOp(WrenParser::LogicOpContext *ctx) = 0;

  virtual void enterAtomLogic(WrenParser::AtomLogicContext *ctx) = 0;
  virtual void exitAtomLogic(WrenParser::AtomLogicContext *ctx) = 0;

  virtual void enterAndLogic(WrenParser::AndLogicContext *ctx) = 0;
  virtual void exitAndLogic(WrenParser::AndLogicContext *ctx) = 0;

  virtual void enterLogic(WrenParser::LogicContext *ctx) = 0;
  virtual void exitLogic(WrenParser::LogicContext *ctx) = 0;

  virtual void enterElvis(WrenParser::ElvisContext *ctx) = 0;
  virtual void exitElvis(WrenParser::ElvisContext *ctx) = 0;

  virtual void enterId(WrenParser::IdContext *ctx) = 0;
  virtual void exitId(WrenParser::IdContext *ctx) = 0;

  virtual void enterBoolE(WrenParser::BoolEContext *ctx) = 0;
  virtual void exitBoolE(WrenParser::BoolEContext *ctx) = 0;

  virtual void enterCharE(WrenParser::CharEContext *ctx) = 0;
  virtual void exitCharE(WrenParser::CharEContext *ctx) = 0;

  virtual void enterStringE(WrenParser::StringEContext *ctx) = 0;
  virtual void exitStringE(WrenParser::StringEContext *ctx) = 0;

  virtual void enterNumE(WrenParser::NumEContext *ctx) = 0;
  virtual void exitNumE(WrenParser::NumEContext *ctx) = 0;

  virtual void enterNullE(WrenParser::NullEContext *ctx) = 0;
  virtual void exitNullE(WrenParser::NullEContext *ctx) = 0;


};

