#include "WrenListener.h"
#include "AstElement.h"


void WrenListener::enterScript(WrenParser::ScriptContext * /*ctx*/) {
    push(new DummyAstElement);
}

void WrenListener::exitScript(WrenParser::ScriptContext * /*ctx*/) {}

void WrenListener::enterFileAtom(WrenParser::FileAtomContext * /*ctx*/) {}

void WrenListener::exitFileAtom(WrenParser::FileAtomContext * /*ctx*/) {}

void WrenListener::enterAssignment(WrenParser::AssignmentContext * /*ctx*/) {}

void WrenListener::exitAssignment(WrenParser::AssignmentContext * /*ctx*/) {}

void WrenListener::enterAssignmentNull(
    WrenParser::AssignmentNullContext * /*ctx*/) {}

void WrenListener::exitAssignmentNull(
    WrenParser::AssignmentNullContext * /*ctx*/) {}

void WrenListener::enterAssignOp(WrenParser::AssignOpContext * /*ctx*/) {}

void WrenListener::exitAssignOp(WrenParser::AssignOpContext * /*ctx*/) {}

void WrenListener::enterIfSt(WrenParser::IfStContext * /*ctx*/) {}

void WrenListener::exitIfSt(WrenParser::IfStContext * /*ctx*/) {}

void WrenListener::enterIfCond(WrenParser::IfCondContext * /*ctx*/) {}

void WrenListener::exitIfCond(WrenParser::IfCondContext * /*ctx*/) {}

void WrenListener::enterElseIf(WrenParser::ElseIfContext * /*ctx*/) {}

void WrenListener::exitElseIf(WrenParser::ElseIfContext * /*ctx*/) {}

void WrenListener::enterElseSt(WrenParser::ElseStContext * /*ctx*/) {}

void WrenListener::exitElseSt(WrenParser::ElseStContext * /*ctx*/) {}

void WrenListener::enterWhileSt(WrenParser::WhileStContext * /*ctx*/) {}

void WrenListener::exitWhileSt(WrenParser::WhileStContext * /*ctx*/) {}

void WrenListener::enterForSt(WrenParser::ForStContext * /*ctx*/) {}

void WrenListener::exitForSt(WrenParser::ForStContext * /*ctx*/) {}

void WrenListener::enterStatement(WrenParser::StatementContext * /*ctx*/) {}

void WrenListener::exitStatement(WrenParser::StatementContext * /*ctx*/) {}

void WrenListener::enterLambdaParameters(
    WrenParser::LambdaParametersContext * /*ctx*/) {}

void WrenListener::exitLambdaParameters(
    WrenParser::LambdaParametersContext * /*ctx*/) {}

void WrenListener::enterBlock(WrenParser::BlockContext * /*ctx*/) {}

void WrenListener::exitBlock(WrenParser::BlockContext * /*ctx*/) {}

void WrenListener::enterReturnSt(WrenParser::ReturnStContext * /*ctx*/) {}

void WrenListener::exitReturnSt(WrenParser::ReturnStContext * /*ctx*/) {}

void WrenListener::enterClassDefinition(
    WrenParser::ClassDefinitionContext * /*ctx*/) {}

void WrenListener::exitClassDefinition(
    WrenParser::ClassDefinitionContext * /*ctx*/) {}

void WrenListener::enterInheritance(WrenParser::InheritanceContext * /*ctx*/) {}

void WrenListener::exitInheritance(WrenParser::InheritanceContext * /*ctx*/) {}

void WrenListener::enterAttribute(WrenParser::AttributeContext * /*ctx*/) {}

void WrenListener::exitAttribute(WrenParser::AttributeContext * /*ctx*/) {}

void WrenListener::enterAttributes(WrenParser::AttributesContext * /*ctx*/) {}

void WrenListener::exitAttributes(WrenParser::AttributesContext * /*ctx*/) {}

void WrenListener::enterAttributeValue(
    WrenParser::AttributeValueContext * /*ctx*/) {}

void WrenListener::exitAttributeValue(
    WrenParser::AttributeValueContext * /*ctx*/) {}

void WrenListener::enterSimpleAttribute(
    WrenParser::SimpleAttributeContext * /*ctx*/) {}

void WrenListener::exitSimpleAttribute(
    WrenParser::SimpleAttributeContext * /*ctx*/) {}

void WrenListener::enterGroupAttribute(
    WrenParser::GroupAttributeContext * /*ctx*/) {}

void WrenListener::exitGroupAttribute(
    WrenParser::GroupAttributeContext * /*ctx*/) {}

void WrenListener::enterClassBody(WrenParser::ClassBodyContext * /*ctx*/) {}

void WrenListener::exitClassBody(WrenParser::ClassBodyContext * /*ctx*/) {}

void WrenListener::enterClassBodyTpe(
    WrenParser::ClassBodyTpeContext * /*ctx*/) {}

void WrenListener::exitClassBodyTpe(WrenParser::ClassBodyTpeContext * /*ctx*/) {

}

void WrenListener::enterClassStatement(
    WrenParser::ClassStatementContext * /*ctx*/) {}

void WrenListener::exitClassStatement(
    WrenParser::ClassStatementContext * /*ctx*/) {}

void WrenListener::enterClassConstructor(
    WrenParser::ClassConstructorContext * /*ctx*/) {}

void WrenListener::exitClassConstructor(
    WrenParser::ClassConstructorContext * /*ctx*/) {}

void WrenListener::enterOperatorGetter(
    WrenParser::OperatorGetterContext * /*ctx*/) {}

void WrenListener::exitOperatorGetter(
    WrenParser::OperatorGetterContext * /*ctx*/) {}

void WrenListener::enterOperatorSetter(
    WrenParser::OperatorSetterContext * /*ctx*/) {}

void WrenListener::exitOperatorSetter(
    WrenParser::OperatorSetterContext * /*ctx*/) {}

void WrenListener::enterClassOpGetter(
    WrenParser::ClassOpGetterContext * /*ctx*/) {}

void WrenListener::exitClassOpGetter(
    WrenParser::ClassOpGetterContext * /*ctx*/) {}

void WrenListener::enterClassOpSetter(
    WrenParser::ClassOpSetterContext * /*ctx*/) {}

void WrenListener::exitClassOpSetter(
    WrenParser::ClassOpSetterContext * /*ctx*/) {}

void WrenListener::enterOneArgument(WrenParser::OneArgumentContext * /*ctx*/) {}

void WrenListener::exitOneArgument(WrenParser::OneArgumentContext * /*ctx*/) {}

void WrenListener::enterSubscript(WrenParser::SubscriptContext * /*ctx*/) {}

void WrenListener::exitSubscript(WrenParser::SubscriptContext * /*ctx*/) {}

void WrenListener::enterClassSubscriptGet(
    WrenParser::ClassSubscriptGetContext * /*ctx*/) {}

void WrenListener::exitClassSubscriptGet(
    WrenParser::ClassSubscriptGetContext * /*ctx*/) {}

void WrenListener::enterClassSubscriptSet(
    WrenParser::ClassSubscriptSetContext * /*ctx*/) {}

void WrenListener::exitClassSubscriptSet(
    WrenParser::ClassSubscriptSetContext * /*ctx*/) {}

void WrenListener::enterClassSetter(WrenParser::ClassSetterContext * /*ctx*/) {}

void WrenListener::exitClassSetter(WrenParser::ClassSetterContext * /*ctx*/) {}

void WrenListener::enterAssignmentSetter(
    WrenParser::AssignmentSetterContext * /*ctx*/) {}

void WrenListener::exitAssignmentSetter(
    WrenParser::AssignmentSetterContext * /*ctx*/) {}

void WrenListener::enterArguments(WrenParser::ArgumentsContext * /*ctx*/) {}

void WrenListener::exitArguments(WrenParser::ArgumentsContext * /*ctx*/) {}

void WrenListener::enterFunction(WrenParser::FunctionContext * /*ctx*/) {}

void WrenListener::exitFunction(WrenParser::FunctionContext * /*ctx*/) {}

void WrenListener::enterImportModule(
    WrenParser::ImportModuleContext * /*ctx*/) {}

void WrenListener::exitImportModule(WrenParser::ImportModuleContext * /*ctx*/) {

}

void WrenListener::enterImportVariable(
    WrenParser::ImportVariableContext * /*ctx*/) {}

void WrenListener::exitImportVariable(
    WrenParser::ImportVariableContext * /*ctx*/) {}

void WrenListener::enterImportVariables(
    WrenParser::ImportVariablesContext * /*ctx*/) {}

void WrenListener::exitImportVariables(
    WrenParser::ImportVariablesContext * /*ctx*/) {}

void WrenListener::enterCall(WrenParser::CallContext * /*ctx*/) {}

void WrenListener::exitCall(WrenParser::CallContext * /*ctx*/) {}

void WrenListener::enterCallInvoke(WrenParser::CallInvokeContext * /*ctx*/) {}

void WrenListener::exitCallInvoke(WrenParser::CallInvokeContext * /*ctx*/) {}

void WrenListener::enterExpression(WrenParser::ExpressionContext * /*ctx*/) {}

void WrenListener::exitExpression(WrenParser::ExpressionContext * /*ctx*/) {}

void WrenListener::enterCompoundExpression(
    WrenParser::CompoundExpressionContext * /*ctx*/) {}

void WrenListener::exitCompoundExpression(
    WrenParser::CompoundExpressionContext * /*ctx*/) {}

void WrenListener::enterAtomExpression(
    WrenParser::AtomExpressionContext * /*ctx*/) {}

void WrenListener::exitAtomExpression(
    WrenParser::AtomExpressionContext * /*ctx*/) {}

void WrenListener::enterEnumeration(WrenParser::EnumerationContext * /*ctx*/) {}

void WrenListener::exitEnumeration(WrenParser::EnumerationContext * /*ctx*/) {}

void WrenListener::enterPairEnumeration(
    WrenParser::PairEnumerationContext * /*ctx*/) {}

void WrenListener::exitPairEnumeration(
    WrenParser::PairEnumerationContext * /*ctx*/) {}

void WrenListener::enterRange(WrenParser::RangeContext * /*ctx*/) {}

void WrenListener::exitRange(WrenParser::RangeContext * /*ctx*/) {}

void WrenListener::enterListInit(WrenParser::ListInitContext * /*ctx*/) {}

void WrenListener::exitListInit(WrenParser::ListInitContext * /*ctx*/) {}

void WrenListener::enterMapInit(WrenParser::MapInitContext * /*ctx*/) {}

void WrenListener::exitMapInit(WrenParser::MapInitContext * /*ctx*/) {}

void WrenListener::enterElem(WrenParser::ElemContext * /*ctx*/) {}

void WrenListener::exitElem(WrenParser::ElemContext * /*ctx*/) {}

void WrenListener::enterCollectionElem(
    WrenParser::CollectionElemContext * /*ctx*/) {}

void WrenListener::exitCollectionElem(
    WrenParser::CollectionElemContext * /*ctx*/) {}

void WrenListener::enterRangeExpression(
    WrenParser::RangeExpressionContext * /*ctx*/) {}

void WrenListener::exitRangeExpression(
    WrenParser::RangeExpressionContext * /*ctx*/) {}

void WrenListener::enterArithMul(WrenParser::ArithMulContext * /*ctx*/) {}

void WrenListener::exitArithMul(WrenParser::ArithMulContext * /*ctx*/) {}

void WrenListener::enterArithAdd(WrenParser::ArithAddContext * /*ctx*/) {}

void WrenListener::exitArithAdd(WrenParser::ArithAddContext * /*ctx*/) {}

void WrenListener::enterArithRange(WrenParser::ArithRangeContext * /*ctx*/) {}

void WrenListener::exitArithRange(WrenParser::ArithRangeContext * /*ctx*/) {}

void WrenListener::enterArithShift(WrenParser::ArithShiftContext * /*ctx*/) {}

void WrenListener::exitArithShift(WrenParser::ArithShiftContext * /*ctx*/) {}

void WrenListener::enterArithBit(WrenParser::ArithBitContext * /*ctx*/) {}

void WrenListener::exitArithBit(WrenParser::ArithBitContext * /*ctx*/) {}

void WrenListener::enterLogicOp(WrenParser::LogicOpContext * /*ctx*/) {}

void WrenListener::exitLogicOp(WrenParser::LogicOpContext * /*ctx*/) {}

void WrenListener::enterAtomLogic(WrenParser::AtomLogicContext * /*ctx*/) {}

void WrenListener::exitAtomLogic(WrenParser::AtomLogicContext * /*ctx*/) {}

void WrenListener::enterAndLogic(WrenParser::AndLogicContext * /*ctx*/) {}

void WrenListener::exitAndLogic(WrenParser::AndLogicContext * /*ctx*/) {}

void WrenListener::enterLogic(WrenParser::LogicContext * /*ctx*/) {}

void WrenListener::exitLogic(WrenParser::LogicContext * /*ctx*/) {}

void WrenListener::enterElvis(WrenParser::ElvisContext * /*ctx*/) {}

void WrenListener::exitElvis(WrenParser::ElvisContext * /*ctx*/) {}

void WrenListener::enterId(WrenParser::IdContext * /*ctx*/) {}

void WrenListener::exitId(WrenParser::IdContext * /*ctx*/) {}

void WrenListener::enterBoolE(WrenParser::BoolEContext * /*ctx*/) {}

void WrenListener::exitBoolE(WrenParser::BoolEContext * /*ctx*/) {}

void WrenListener::enterCharE(WrenParser::CharEContext * /*ctx*/) {}

void WrenListener::exitCharE(WrenParser::CharEContext * /*ctx*/) {}

void WrenListener::enterStringE(WrenParser::StringEContext * /*ctx*/) {}

void WrenListener::exitStringE(WrenParser::StringEContext * /*ctx*/) {}

void WrenListener::enterNumE(WrenParser::NumEContext * /*ctx*/) {}

void WrenListener::exitNumE(WrenParser::NumEContext * /*ctx*/) {}

void WrenListener::enterNullE(WrenParser::NullEContext * /*ctx*/) {}

void WrenListener::exitNullE(WrenParser::NullEContext * /*ctx*/) {}

void WrenListener::enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) {}

void WrenListener::exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) {}

// void visitTerminal(antlr4::tree::TerminalNode * /*node*/){};
// void visitErrorNode(antlr4::tree::ErrorNode * /*node*/){};
