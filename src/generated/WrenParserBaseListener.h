
// Generated from C:/projects/goll/grammar/WrenParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "WrenParserListener.h"


/**
 * This class provides an empty implementation of WrenParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  WrenParserBaseListener : public WrenParserListener {
public:

  virtual void enterScript(WrenParser::ScriptContext * /*ctx*/) override { }
  virtual void exitScript(WrenParser::ScriptContext * /*ctx*/) override { }

  virtual void enterFileAtom(WrenParser::FileAtomContext * /*ctx*/) override { }
  virtual void exitFileAtom(WrenParser::FileAtomContext * /*ctx*/) override { }

  virtual void enterAssignment(WrenParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(WrenParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterAssignmentNull(WrenParser::AssignmentNullContext * /*ctx*/) override { }
  virtual void exitAssignmentNull(WrenParser::AssignmentNullContext * /*ctx*/) override { }

  virtual void enterAssignOp(WrenParser::AssignOpContext * /*ctx*/) override { }
  virtual void exitAssignOp(WrenParser::AssignOpContext * /*ctx*/) override { }

  virtual void enterIfSt(WrenParser::IfStContext * /*ctx*/) override { }
  virtual void exitIfSt(WrenParser::IfStContext * /*ctx*/) override { }

  virtual void enterIfCond(WrenParser::IfCondContext * /*ctx*/) override { }
  virtual void exitIfCond(WrenParser::IfCondContext * /*ctx*/) override { }

  virtual void enterElseIf(WrenParser::ElseIfContext * /*ctx*/) override { }
  virtual void exitElseIf(WrenParser::ElseIfContext * /*ctx*/) override { }

  virtual void enterElseSt(WrenParser::ElseStContext * /*ctx*/) override { }
  virtual void exitElseSt(WrenParser::ElseStContext * /*ctx*/) override { }

  virtual void enterWhileSt(WrenParser::WhileStContext * /*ctx*/) override { }
  virtual void exitWhileSt(WrenParser::WhileStContext * /*ctx*/) override { }

  virtual void enterForSt(WrenParser::ForStContext * /*ctx*/) override { }
  virtual void exitForSt(WrenParser::ForStContext * /*ctx*/) override { }

  virtual void enterStatement(WrenParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(WrenParser::StatementContext * /*ctx*/) override { }

  virtual void enterLambdaParameters(WrenParser::LambdaParametersContext * /*ctx*/) override { }
  virtual void exitLambdaParameters(WrenParser::LambdaParametersContext * /*ctx*/) override { }

  virtual void enterBlock(WrenParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(WrenParser::BlockContext * /*ctx*/) override { }

  virtual void enterReturnSt(WrenParser::ReturnStContext * /*ctx*/) override { }
  virtual void exitReturnSt(WrenParser::ReturnStContext * /*ctx*/) override { }

  virtual void enterClassDefinition(WrenParser::ClassDefinitionContext * /*ctx*/) override { }
  virtual void exitClassDefinition(WrenParser::ClassDefinitionContext * /*ctx*/) override { }

  virtual void enterInheritance(WrenParser::InheritanceContext * /*ctx*/) override { }
  virtual void exitInheritance(WrenParser::InheritanceContext * /*ctx*/) override { }

  virtual void enterAttribute(WrenParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(WrenParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttributes(WrenParser::AttributesContext * /*ctx*/) override { }
  virtual void exitAttributes(WrenParser::AttributesContext * /*ctx*/) override { }

  virtual void enterAttributeValue(WrenParser::AttributeValueContext * /*ctx*/) override { }
  virtual void exitAttributeValue(WrenParser::AttributeValueContext * /*ctx*/) override { }

  virtual void enterSimpleAttribute(WrenParser::SimpleAttributeContext * /*ctx*/) override { }
  virtual void exitSimpleAttribute(WrenParser::SimpleAttributeContext * /*ctx*/) override { }

  virtual void enterGroupAttribute(WrenParser::GroupAttributeContext * /*ctx*/) override { }
  virtual void exitGroupAttribute(WrenParser::GroupAttributeContext * /*ctx*/) override { }

  virtual void enterClassBody(WrenParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(WrenParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterClassBodyTpe(WrenParser::ClassBodyTpeContext * /*ctx*/) override { }
  virtual void exitClassBodyTpe(WrenParser::ClassBodyTpeContext * /*ctx*/) override { }

  virtual void enterClassStatement(WrenParser::ClassStatementContext * /*ctx*/) override { }
  virtual void exitClassStatement(WrenParser::ClassStatementContext * /*ctx*/) override { }

  virtual void enterClassConstructor(WrenParser::ClassConstructorContext * /*ctx*/) override { }
  virtual void exitClassConstructor(WrenParser::ClassConstructorContext * /*ctx*/) override { }

  virtual void enterOperatorGetter(WrenParser::OperatorGetterContext * /*ctx*/) override { }
  virtual void exitOperatorGetter(WrenParser::OperatorGetterContext * /*ctx*/) override { }

  virtual void enterOperatorSetter(WrenParser::OperatorSetterContext * /*ctx*/) override { }
  virtual void exitOperatorSetter(WrenParser::OperatorSetterContext * /*ctx*/) override { }

  virtual void enterClassOpGetter(WrenParser::ClassOpGetterContext * /*ctx*/) override { }
  virtual void exitClassOpGetter(WrenParser::ClassOpGetterContext * /*ctx*/) override { }

  virtual void enterClassOpSetter(WrenParser::ClassOpSetterContext * /*ctx*/) override { }
  virtual void exitClassOpSetter(WrenParser::ClassOpSetterContext * /*ctx*/) override { }

  virtual void enterOneArgument(WrenParser::OneArgumentContext * /*ctx*/) override { }
  virtual void exitOneArgument(WrenParser::OneArgumentContext * /*ctx*/) override { }

  virtual void enterSubscript(WrenParser::SubscriptContext * /*ctx*/) override { }
  virtual void exitSubscript(WrenParser::SubscriptContext * /*ctx*/) override { }

  virtual void enterClassSubscriptGet(WrenParser::ClassSubscriptGetContext * /*ctx*/) override { }
  virtual void exitClassSubscriptGet(WrenParser::ClassSubscriptGetContext * /*ctx*/) override { }

  virtual void enterClassSubscriptSet(WrenParser::ClassSubscriptSetContext * /*ctx*/) override { }
  virtual void exitClassSubscriptSet(WrenParser::ClassSubscriptSetContext * /*ctx*/) override { }

  virtual void enterClassSetter(WrenParser::ClassSetterContext * /*ctx*/) override { }
  virtual void exitClassSetter(WrenParser::ClassSetterContext * /*ctx*/) override { }

  virtual void enterAssignmentSetter(WrenParser::AssignmentSetterContext * /*ctx*/) override { }
  virtual void exitAssignmentSetter(WrenParser::AssignmentSetterContext * /*ctx*/) override { }

  virtual void enterArguments(WrenParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(WrenParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterFunction(WrenParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(WrenParser::FunctionContext * /*ctx*/) override { }

  virtual void enterImportModule(WrenParser::ImportModuleContext * /*ctx*/) override { }
  virtual void exitImportModule(WrenParser::ImportModuleContext * /*ctx*/) override { }

  virtual void enterImportVariable(WrenParser::ImportVariableContext * /*ctx*/) override { }
  virtual void exitImportVariable(WrenParser::ImportVariableContext * /*ctx*/) override { }

  virtual void enterImportVariables(WrenParser::ImportVariablesContext * /*ctx*/) override { }
  virtual void exitImportVariables(WrenParser::ImportVariablesContext * /*ctx*/) override { }

  virtual void enterCall(WrenParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(WrenParser::CallContext * /*ctx*/) override { }

  virtual void enterCallInvoke(WrenParser::CallInvokeContext * /*ctx*/) override { }
  virtual void exitCallInvoke(WrenParser::CallInvokeContext * /*ctx*/) override { }

  virtual void enterExpression(WrenParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(WrenParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterCompoundExpression(WrenParser::CompoundExpressionContext * /*ctx*/) override { }
  virtual void exitCompoundExpression(WrenParser::CompoundExpressionContext * /*ctx*/) override { }

  virtual void enterAtomExpression(WrenParser::AtomExpressionContext * /*ctx*/) override { }
  virtual void exitAtomExpression(WrenParser::AtomExpressionContext * /*ctx*/) override { }

  virtual void enterEnumeration(WrenParser::EnumerationContext * /*ctx*/) override { }
  virtual void exitEnumeration(WrenParser::EnumerationContext * /*ctx*/) override { }

  virtual void enterPairEnumeration(WrenParser::PairEnumerationContext * /*ctx*/) override { }
  virtual void exitPairEnumeration(WrenParser::PairEnumerationContext * /*ctx*/) override { }

  virtual void enterRange(WrenParser::RangeContext * /*ctx*/) override { }
  virtual void exitRange(WrenParser::RangeContext * /*ctx*/) override { }

  virtual void enterListInit(WrenParser::ListInitContext * /*ctx*/) override { }
  virtual void exitListInit(WrenParser::ListInitContext * /*ctx*/) override { }

  virtual void enterMapInit(WrenParser::MapInitContext * /*ctx*/) override { }
  virtual void exitMapInit(WrenParser::MapInitContext * /*ctx*/) override { }

  virtual void enterElem(WrenParser::ElemContext * /*ctx*/) override { }
  virtual void exitElem(WrenParser::ElemContext * /*ctx*/) override { }

  virtual void enterCollectionElem(WrenParser::CollectionElemContext * /*ctx*/) override { }
  virtual void exitCollectionElem(WrenParser::CollectionElemContext * /*ctx*/) override { }

  virtual void enterRangeExpression(WrenParser::RangeExpressionContext * /*ctx*/) override { }
  virtual void exitRangeExpression(WrenParser::RangeExpressionContext * /*ctx*/) override { }

  virtual void enterArithMul(WrenParser::ArithMulContext * /*ctx*/) override { }
  virtual void exitArithMul(WrenParser::ArithMulContext * /*ctx*/) override { }

  virtual void enterArithAdd(WrenParser::ArithAddContext * /*ctx*/) override { }
  virtual void exitArithAdd(WrenParser::ArithAddContext * /*ctx*/) override { }

  virtual void enterArithRange(WrenParser::ArithRangeContext * /*ctx*/) override { }
  virtual void exitArithRange(WrenParser::ArithRangeContext * /*ctx*/) override { }

  virtual void enterArithShift(WrenParser::ArithShiftContext * /*ctx*/) override { }
  virtual void exitArithShift(WrenParser::ArithShiftContext * /*ctx*/) override { }

  virtual void enterArithBit(WrenParser::ArithBitContext * /*ctx*/) override { }
  virtual void exitArithBit(WrenParser::ArithBitContext * /*ctx*/) override { }

  virtual void enterLogicOp(WrenParser::LogicOpContext * /*ctx*/) override { }
  virtual void exitLogicOp(WrenParser::LogicOpContext * /*ctx*/) override { }

  virtual void enterAtomLogic(WrenParser::AtomLogicContext * /*ctx*/) override { }
  virtual void exitAtomLogic(WrenParser::AtomLogicContext * /*ctx*/) override { }

  virtual void enterAndLogic(WrenParser::AndLogicContext * /*ctx*/) override { }
  virtual void exitAndLogic(WrenParser::AndLogicContext * /*ctx*/) override { }

  virtual void enterLogic(WrenParser::LogicContext * /*ctx*/) override { }
  virtual void exitLogic(WrenParser::LogicContext * /*ctx*/) override { }

  virtual void enterElvis(WrenParser::ElvisContext * /*ctx*/) override { }
  virtual void exitElvis(WrenParser::ElvisContext * /*ctx*/) override { }

  virtual void enterId(WrenParser::IdContext * /*ctx*/) override { }
  virtual void exitId(WrenParser::IdContext * /*ctx*/) override { }

  virtual void enterBoolE(WrenParser::BoolEContext * /*ctx*/) override { }
  virtual void exitBoolE(WrenParser::BoolEContext * /*ctx*/) override { }

  virtual void enterCharE(WrenParser::CharEContext * /*ctx*/) override { }
  virtual void exitCharE(WrenParser::CharEContext * /*ctx*/) override { }

  virtual void enterStringE(WrenParser::StringEContext * /*ctx*/) override { }
  virtual void exitStringE(WrenParser::StringEContext * /*ctx*/) override { }

  virtual void enterNumE(WrenParser::NumEContext * /*ctx*/) override { }
  virtual void exitNumE(WrenParser::NumEContext * /*ctx*/) override { }

  virtual void enterNullE(WrenParser::NullEContext * /*ctx*/) override { }
  virtual void exitNullE(WrenParser::NullEContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

