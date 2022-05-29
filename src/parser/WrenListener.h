#ifndef DCE04514_1F44_43D4_BD52_6A286828551A
#define DCE04514_1F44_43D4_BD52_6A286828551A

#include "AstElement.h"
#include "WrenParser.h"
#include "WrenParserBaseListener.h"


class WrenListener : public WrenParserBaseListener {
  std::vector<AstElement *> elements;

public:
  ~WrenListener() {}
  
  void push(AstElement *element) { elements.push_back(element); }

  template <class U> U *pop() {
    auto el = dynamic_cast<U *>(elements.back());
    elements.pop_back();
    return el;
  }
  AstElement *pop() {
    auto el = dynamic_cast<AstElement *>(elements.back());
    elements.pop_back();
    return el;
  }

  template <class U> std::vector<U *> pop(int el) {
    std::vector<U *> elems;
    while (--el >= 0)
      elems.push_back(pop<U>());
    std::reverse(elems.begin(), elems.end());
    return elems;
  }

  void enterScript(WrenParser::ScriptContext * /*ctx*/);
  void exitScript(WrenParser::ScriptContext * /*ctx*/);

  void enterFileAtom(WrenParser::FileAtomContext * /*ctx*/);
  void exitFileAtom(WrenParser::FileAtomContext * /*ctx*/);

  void enterAssignment(WrenParser::AssignmentContext * /*ctx*/);
  void exitAssignment(WrenParser::AssignmentContext * /*ctx*/);

  void enterAssignmentNull(WrenParser::AssignmentNullContext * /*ctx*/);
  void exitAssignmentNull(WrenParser::AssignmentNullContext * /*ctx*/);

  void enterAssignOp(WrenParser::AssignOpContext * /*ctx*/);
  void exitAssignOp(WrenParser::AssignOpContext * /*ctx*/);

  void enterIfSt(WrenParser::IfStContext * /*ctx*/);
  void exitIfSt(WrenParser::IfStContext * /*ctx*/);

  void enterIfCond(WrenParser::IfCondContext * /*ctx*/);
  void exitIfCond(WrenParser::IfCondContext * /*ctx*/);

  void enterElseIf(WrenParser::ElseIfContext * /*ctx*/);
  void exitElseIf(WrenParser::ElseIfContext * /*ctx*/);

  void enterElseSt(WrenParser::ElseStContext * /*ctx*/);
  void exitElseSt(WrenParser::ElseStContext * /*ctx*/);

  void enterWhileSt(WrenParser::WhileStContext * /*ctx*/);
  void exitWhileSt(WrenParser::WhileStContext * /*ctx*/);

  void enterForSt(WrenParser::ForStContext * /*ctx*/);
  void exitForSt(WrenParser::ForStContext * /*ctx*/);

  void enterStatement(WrenParser::StatementContext * /*ctx*/);
  void exitStatement(WrenParser::StatementContext * /*ctx*/);

  void enterLambdaParameters(WrenParser::LambdaParametersContext * /*ctx*/);
  void exitLambdaParameters(WrenParser::LambdaParametersContext * /*ctx*/);

  void enterBlock(WrenParser::BlockContext * /*ctx*/);
  void exitBlock(WrenParser::BlockContext * /*ctx*/);

  void enterReturnSt(WrenParser::ReturnStContext * /*ctx*/);
  void exitReturnSt(WrenParser::ReturnStContext * /*ctx*/);

  void enterClassDefinition(WrenParser::ClassDefinitionContext * /*ctx*/);
  void exitClassDefinition(WrenParser::ClassDefinitionContext * /*ctx*/);

  void enterInheritance(WrenParser::InheritanceContext * /*ctx*/);
  void exitInheritance(WrenParser::InheritanceContext * /*ctx*/);

  void enterAttribute(WrenParser::AttributeContext * /*ctx*/);
  void exitAttribute(WrenParser::AttributeContext * /*ctx*/);

  void enterAttributes(WrenParser::AttributesContext * /*ctx*/);
  void exitAttributes(WrenParser::AttributesContext * /*ctx*/);

  void enterAttributeValue(WrenParser::AttributeValueContext * /*ctx*/);
  void exitAttributeValue(WrenParser::AttributeValueContext * /*ctx*/);

  void enterSimpleAttribute(WrenParser::SimpleAttributeContext * /*ctx*/);
  void exitSimpleAttribute(WrenParser::SimpleAttributeContext * /*ctx*/);

  void enterGroupAttribute(WrenParser::GroupAttributeContext * /*ctx*/);
  void exitGroupAttribute(WrenParser::GroupAttributeContext * /*ctx*/);

  void enterClassBody(WrenParser::ClassBodyContext * /*ctx*/);
  void exitClassBody(WrenParser::ClassBodyContext * /*ctx*/);

  void enterClassBodyTpe(WrenParser::ClassBodyTpeContext * /*ctx*/);
  void exitClassBodyTpe(WrenParser::ClassBodyTpeContext * /*ctx*/);

  void enterClassStatement(WrenParser::ClassStatementContext * /*ctx*/);
  void exitClassStatement(WrenParser::ClassStatementContext * /*ctx*/);

  void enterClassConstructor(WrenParser::ClassConstructorContext * /*ctx*/);
  void exitClassConstructor(WrenParser::ClassConstructorContext * /*ctx*/);

  void enterOperatorGetter(WrenParser::OperatorGetterContext * /*ctx*/);
  void exitOperatorGetter(WrenParser::OperatorGetterContext * /*ctx*/);

  void enterOperatorSetter(WrenParser::OperatorSetterContext * /*ctx*/);
  void exitOperatorSetter(WrenParser::OperatorSetterContext * /*ctx*/);

  void enterClassOpGetter(WrenParser::ClassOpGetterContext * /*ctx*/);
  void exitClassOpGetter(WrenParser::ClassOpGetterContext * /*ctx*/);

  void enterClassOpSetter(WrenParser::ClassOpSetterContext * /*ctx*/);
  void exitClassOpSetter(WrenParser::ClassOpSetterContext * /*ctx*/);

  void enterOneArgument(WrenParser::OneArgumentContext * /*ctx*/);
  void exitOneArgument(WrenParser::OneArgumentContext * /*ctx*/);

  void enterSubscript(WrenParser::SubscriptContext * /*ctx*/);
  void exitSubscript(WrenParser::SubscriptContext * /*ctx*/);

  void enterClassSubscriptGet(WrenParser::ClassSubscriptGetContext * /*ctx*/);
  void exitClassSubscriptGet(WrenParser::ClassSubscriptGetContext * /*ctx*/);

  void enterClassSubscriptSet(WrenParser::ClassSubscriptSetContext * /*ctx*/);
  void exitClassSubscriptSet(WrenParser::ClassSubscriptSetContext * /*ctx*/);

  void enterClassSetter(WrenParser::ClassSetterContext * /*ctx*/);
  void exitClassSetter(WrenParser::ClassSetterContext * /*ctx*/);

  void enterAssignmentSetter(WrenParser::AssignmentSetterContext * /*ctx*/);
  void exitAssignmentSetter(WrenParser::AssignmentSetterContext * /*ctx*/);

  void enterArguments(WrenParser::ArgumentsContext * /*ctx*/);
  void exitArguments(WrenParser::ArgumentsContext * /*ctx*/);

  void enterFunction(WrenParser::FunctionContext * /*ctx*/);
  void exitFunction(WrenParser::FunctionContext * /*ctx*/);

  void enterImportModule(WrenParser::ImportModuleContext * /*ctx*/);
  void exitImportModule(WrenParser::ImportModuleContext * /*ctx*/);

  void enterImportVariable(WrenParser::ImportVariableContext * /*ctx*/);
  void exitImportVariable(WrenParser::ImportVariableContext * /*ctx*/);

  void enterImportVariables(WrenParser::ImportVariablesContext * /*ctx*/);
  void exitImportVariables(WrenParser::ImportVariablesContext * /*ctx*/);

  void enterCall(WrenParser::CallContext * /*ctx*/);
  void exitCall(WrenParser::CallContext * /*ctx*/);

  void enterCallInvoke(WrenParser::CallInvokeContext * /*ctx*/);
  void exitCallInvoke(WrenParser::CallInvokeContext * /*ctx*/);

  void enterExpression(WrenParser::ExpressionContext * /*ctx*/);
  void exitExpression(WrenParser::ExpressionContext * /*ctx*/);

  void enterCompoundExpression(WrenParser::CompoundExpressionContext * /*ctx*/);
  void exitCompoundExpression(WrenParser::CompoundExpressionContext * /*ctx*/);

  void enterAtomExpression(WrenParser::AtomExpressionContext * /*ctx*/);
  void exitAtomExpression(WrenParser::AtomExpressionContext * /*ctx*/);

  void enterEnumeration(WrenParser::EnumerationContext * /*ctx*/);
  void exitEnumeration(WrenParser::EnumerationContext * /*ctx*/);

  void enterPairEnumeration(WrenParser::PairEnumerationContext * /*ctx*/);
  void exitPairEnumeration(WrenParser::PairEnumerationContext * /*ctx*/);

  void enterRange(WrenParser::RangeContext * /*ctx*/);
  void exitRange(WrenParser::RangeContext * /*ctx*/);

  void enterListInit(WrenParser::ListInitContext * /*ctx*/);
  void exitListInit(WrenParser::ListInitContext * /*ctx*/);

  void enterMapInit(WrenParser::MapInitContext * /*ctx*/);
  void exitMapInit(WrenParser::MapInitContext * /*ctx*/);

  void enterElem(WrenParser::ElemContext * /*ctx*/);
  void exitElem(WrenParser::ElemContext * /*ctx*/);

  void enterCollectionElem(WrenParser::CollectionElemContext * /*ctx*/);
  void exitCollectionElem(WrenParser::CollectionElemContext * /*ctx*/);

  void enterRangeExpression(WrenParser::RangeExpressionContext * /*ctx*/);
  void exitRangeExpression(WrenParser::RangeExpressionContext * /*ctx*/);

  void enterArithMul(WrenParser::ArithMulContext * /*ctx*/);
  void exitArithMul(WrenParser::ArithMulContext * /*ctx*/);

  void enterArithAdd(WrenParser::ArithAddContext * /*ctx*/);
  void exitArithAdd(WrenParser::ArithAddContext * /*ctx*/);

  void enterArithRange(WrenParser::ArithRangeContext * /*ctx*/);
  void exitArithRange(WrenParser::ArithRangeContext * /*ctx*/);

  void enterArithShift(WrenParser::ArithShiftContext * /*ctx*/);
  void exitArithShift(WrenParser::ArithShiftContext * /*ctx*/);

  void enterArithBit(WrenParser::ArithBitContext * /*ctx*/);
  void exitArithBit(WrenParser::ArithBitContext * /*ctx*/);

  void enterLogicOp(WrenParser::LogicOpContext * /*ctx*/);
  void exitLogicOp(WrenParser::LogicOpContext * /*ctx*/);

  void enterAtomLogic(WrenParser::AtomLogicContext * /*ctx*/);
  void exitAtomLogic(WrenParser::AtomLogicContext * /*ctx*/);

  void enterAndLogic(WrenParser::AndLogicContext * /*ctx*/);
  void exitAndLogic(WrenParser::AndLogicContext * /*ctx*/);

  void enterLogic(WrenParser::LogicContext * /*ctx*/);
  void exitLogic(WrenParser::LogicContext * /*ctx*/);

  void enterElvis(WrenParser::ElvisContext * /*ctx*/);
  void exitElvis(WrenParser::ElvisContext * /*ctx*/);

  void enterId(WrenParser::IdContext * /*ctx*/);
  void exitId(WrenParser::IdContext * /*ctx*/);

  void enterBoolE(WrenParser::BoolEContext * /*ctx*/);
  void exitBoolE(WrenParser::BoolEContext * /*ctx*/);

  void enterCharE(WrenParser::CharEContext * /*ctx*/);
  void exitCharE(WrenParser::CharEContext * /*ctx*/);

  void enterStringE(WrenParser::StringEContext * /*ctx*/);
  void exitStringE(WrenParser::StringEContext * /*ctx*/);

  void enterNumE(WrenParser::NumEContext * /*ctx*/);
  void exitNumE(WrenParser::NumEContext * /*ctx*/);

  void enterNullE(WrenParser::NullEContext * /*ctx*/);
  void exitNullE(WrenParser::NullEContext * /*ctx*/);

  void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/);
  void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/);
  // void visitTerminal(antlr4::tree::TerminalNode * /*node*/);
  // void visitErrorNode(antlr4::tree::ErrorNode * /*node*/);
};

#endif /* DCE04514_1F44_43D4_BD52_6A286828551A */
