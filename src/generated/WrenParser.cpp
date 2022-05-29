
// Generated from C:/projects/goll/grammar/WrenParser.g4 by ANTLR 4.10.1


#include "WrenParserListener.h"

#include "WrenParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct WrenParserStaticData final {
  WrenParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  WrenParserStaticData(const WrenParserStaticData&) = delete;
  WrenParserStaticData(WrenParserStaticData&&) = delete;
  WrenParserStaticData& operator=(const WrenParserStaticData&) = delete;
  WrenParserStaticData& operator=(WrenParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag wrenparserParserOnceFlag;
WrenParserStaticData *wrenparserParserStaticData = nullptr;

void wrenparserParserInitialize() {
  assert(wrenparserParserStaticData == nullptr);
  auto staticData = std::make_unique<WrenParserStaticData>(
    std::vector<std::string>{
      "script", "fileAtom", "assignment", "assignmentNull", "assignOp", 
      "ifSt", "ifCond", "elseIf", "elseSt", "whileSt", "forSt", "statement", 
      "lambdaParameters", "block", "returnSt", "classDefinition", "inheritance", 
      "attribute", "attributes", "attributeValue", "simpleAttribute", "groupAttribute", 
      "classBody", "classBodyTpe", "classStatement", "classConstructor", 
      "operatorGetter", "operatorSetter", "classOpGetter", "classOpSetter", 
      "oneArgument", "subscript", "classSubscriptGet", "classSubscriptSet", 
      "classSetter", "assignmentSetter", "arguments", "function", "importModule", 
      "importVariable", "importVariables", "call", "callInvoke", "expression", 
      "compoundExpression", "atomExpression", "enumeration", "pairEnumeration", 
      "range", "listInit", "mapInit", "elem", "collectionElem", "rangeExpression", 
      "arithMul", "arithAdd", "arithRange", "arithShift", "arithBit", "logicOp", 
      "atomLogic", "andLogic", "logic", "elvis", "id", "boolE", "charE", 
      "stringE", "numE", "nullE"
    },
    std::vector<std::string>{
      "", "'as'", "'break'", "'class'", "'construct'", "'continue'", "'else'", 
      "'false'", "'for'", "'foreign'", "'if'", "'import'", "'in'", "'is'", 
      "'null'", "'return'", "'static'", "'true'", "'var'", "'while'", "'('", 
      "')'", "'{'", "'}'", "'['", "']'", "';'", "','", "'.'", "'#'", "'>'", 
      "'<'", "'!'", "'~'", "'\\u003F'", "':'", "'=='", "'<='", "'>='", "'!='", 
      "'&&'", "'||'", "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", "'&'", 
      "'|'", "'^'", "'%'", "'='", "'+='", "'-='", "'*='", "'/='", "'&='", 
      "'|='", "'^='", "'%='", "'<<='", "'<<'", "'>>'", "'>>='", "'>>>='", 
      "'...'", "'..'"
    },
    std::vector<std::string>{
      "", "AS", "BREAK_T", "CLASS_T", "CONSTRUCT", "CONTINUE_T", "ELSE_T", 
      "FALSE_T", "FOR_T", "FOREIGN_T", "IF_T", "IMPORT_T", "IN", "IS", "NULL_T", 
      "RETURN_T", "STATIC_T", "TRUE_T", "VAR_T", "WHILE_T", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", "DOT", "HASH", 
      "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", "LE", "GE", 
      "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", "DIV", 
      "BITAND", "BITOR", "CARET", "MOD", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", 
      "MUL_ASSIGN", "DIV_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
      "MOD_ASSIGN", "LSHIFT_ASSIGN", "LSHIFT", "RSHIFT", "RSHIFT_ASSIGN", 
      "URSHIFT_ASSIGN", "ELLIPSIS_OUT", "ELLIPSIS_IN", "IDENTIFIER", "DECIMAL_LITERAL", 
      "HEX_LITERAL", "OCT_LITERAL", "BINARY_LITERAL", "FLOAT_LITERAL", "HEX_FLOAT_LITERAL", 
      "CHAR_LITERAL", "STRING_LITERAL", "TEXT_BLOCK", "WS", "COMMENT", "LINE_COMMENT", 
      "ERRCHAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,81,591,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,1,0,4,
  	0,142,8,0,11,0,12,0,143,1,0,1,0,1,1,1,1,1,1,1,1,1,1,3,1,153,8,1,1,2,3,
  	2,156,8,2,1,2,1,2,1,2,1,2,4,2,162,8,2,11,2,12,2,163,3,2,166,8,2,1,3,1,
  	3,1,3,1,4,1,4,1,5,1,5,1,5,5,5,176,8,5,10,5,12,5,179,9,5,1,5,3,5,182,8,
  	5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,3,9,
  	200,8,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,3,11,221,8,11,1,12,1,12,1,12,1,12,5,12,
  	227,8,12,10,12,12,12,230,9,12,1,12,1,12,1,13,1,13,3,13,236,8,13,1,13,
  	5,13,239,8,13,10,13,12,13,242,9,13,1,13,1,13,1,14,1,14,1,14,1,15,3,15,
  	250,8,15,1,15,3,15,253,8,15,1,15,1,15,1,15,3,15,258,8,15,1,15,1,15,1,
  	15,1,15,1,16,1,16,1,16,1,17,1,17,3,17,269,8,17,1,18,4,18,272,8,18,11,
  	18,12,18,273,1,19,1,19,1,19,3,19,279,8,19,1,20,1,20,3,20,283,8,20,1,20,
  	1,20,1,21,1,21,3,21,289,8,21,1,21,1,21,1,21,1,21,1,21,5,21,296,8,21,10,
  	21,12,21,299,9,21,1,21,1,21,1,22,3,22,304,8,22,1,22,3,22,307,8,22,1,22,
  	5,22,310,8,22,10,22,12,22,313,9,22,1,23,1,23,1,23,1,23,1,23,1,23,3,23,
  	321,8,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,330,8,24,1,25,1,25,1,
  	25,1,25,1,25,1,26,1,26,1,26,1,26,3,26,341,8,26,1,27,1,27,1,28,1,28,3,
  	28,347,8,28,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,
  	31,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,35,1,
  	35,1,35,1,36,1,36,1,36,1,36,5,36,380,8,36,10,36,12,36,383,9,36,3,36,385,
  	8,36,1,36,1,36,1,37,1,37,1,37,3,37,392,8,37,1,38,1,38,1,38,3,38,397,8,
  	38,1,39,1,39,1,39,3,39,402,8,39,1,40,1,40,1,40,1,40,1,40,1,41,1,41,1,
  	41,3,41,412,8,41,1,41,1,41,5,41,416,8,41,10,41,12,41,419,9,41,1,42,1,
  	42,3,42,423,8,42,1,42,1,42,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,3,
  	43,435,8,43,1,43,1,43,5,43,439,8,43,10,43,12,43,442,9,43,1,44,1,44,1,
  	44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,3,44,455,8,44,1,45,1,45,1,
  	45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,3,45,472,
  	8,45,1,46,1,46,1,46,5,46,477,8,46,10,46,12,46,480,9,46,1,47,1,47,1,47,
  	1,47,1,47,1,47,1,47,1,47,5,47,490,8,47,10,47,12,47,493,9,47,1,48,1,48,
  	1,48,1,48,1,49,1,49,3,49,501,8,49,1,49,1,49,1,50,1,50,3,50,507,8,50,1,
  	50,1,50,1,51,1,51,3,51,513,8,51,1,52,1,52,1,52,1,53,1,53,3,53,520,8,53,
  	1,54,1,54,1,54,1,55,1,55,1,55,3,55,528,8,55,1,56,1,56,1,56,3,56,533,8,
  	56,1,57,1,57,1,57,3,57,538,8,57,1,58,1,58,1,58,3,58,543,8,58,1,59,1,59,
  	1,60,1,60,1,60,1,60,1,60,3,60,552,8,60,1,61,1,61,1,61,1,61,1,61,5,61,
  	559,8,61,10,61,12,61,562,9,61,1,62,1,62,1,62,1,62,1,62,5,62,569,8,62,
  	10,62,12,62,572,9,62,1,63,1,63,1,63,1,63,1,63,1,64,1,64,1,65,1,65,1,66,
  	1,66,1,67,1,67,1,68,1,68,1,69,1,69,1,69,0,1,86,70,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,
  	62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,
  	106,108,110,112,114,116,118,120,122,124,126,128,130,132,134,136,138,0,
  	12,2,0,52,61,64,65,6,0,13,13,30,31,36,39,44,51,62,63,66,67,1,0,66,67,
  	2,0,46,47,51,51,1,0,44,45,1,0,62,63,1,0,48,50,2,0,30,31,36,39,1,0,40,
  	41,2,0,7,7,17,17,1,0,76,77,2,0,69,70,73,74,612,0,141,1,0,0,0,2,152,1,
  	0,0,0,4,155,1,0,0,0,6,167,1,0,0,0,8,170,1,0,0,0,10,172,1,0,0,0,12,183,
  	1,0,0,0,14,188,1,0,0,0,16,192,1,0,0,0,18,195,1,0,0,0,20,204,1,0,0,0,22,
  	220,1,0,0,0,24,222,1,0,0,0,26,233,1,0,0,0,28,245,1,0,0,0,30,249,1,0,0,
  	0,32,263,1,0,0,0,34,268,1,0,0,0,36,271,1,0,0,0,38,275,1,0,0,0,40,280,
  	1,0,0,0,42,286,1,0,0,0,44,311,1,0,0,0,46,320,1,0,0,0,48,329,1,0,0,0,50,
  	331,1,0,0,0,52,340,1,0,0,0,54,342,1,0,0,0,56,344,1,0,0,0,58,348,1,0,0,
  	0,60,352,1,0,0,0,62,356,1,0,0,0,64,360,1,0,0,0,66,363,1,0,0,0,68,368,
  	1,0,0,0,70,372,1,0,0,0,72,375,1,0,0,0,74,388,1,0,0,0,76,393,1,0,0,0,78,
  	398,1,0,0,0,80,403,1,0,0,0,82,408,1,0,0,0,84,420,1,0,0,0,86,434,1,0,0,
  	0,88,454,1,0,0,0,90,471,1,0,0,0,92,473,1,0,0,0,94,481,1,0,0,0,96,494,
  	1,0,0,0,98,498,1,0,0,0,100,504,1,0,0,0,102,512,1,0,0,0,104,514,1,0,0,
  	0,106,519,1,0,0,0,108,521,1,0,0,0,110,524,1,0,0,0,112,529,1,0,0,0,114,
  	534,1,0,0,0,116,539,1,0,0,0,118,544,1,0,0,0,120,551,1,0,0,0,122,553,1,
  	0,0,0,124,563,1,0,0,0,126,573,1,0,0,0,128,578,1,0,0,0,130,580,1,0,0,0,
  	132,582,1,0,0,0,134,584,1,0,0,0,136,586,1,0,0,0,138,588,1,0,0,0,140,142,
  	3,2,1,0,141,140,1,0,0,0,142,143,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,
  	0,144,145,1,0,0,0,145,146,5,0,0,1,146,1,1,0,0,0,147,153,3,30,15,0,148,
  	153,3,74,37,0,149,153,3,76,38,0,150,153,3,22,11,0,151,153,3,26,13,0,152,
  	147,1,0,0,0,152,148,1,0,0,0,152,149,1,0,0,0,152,150,1,0,0,0,152,151,1,
  	0,0,0,153,3,1,0,0,0,154,156,5,18,0,0,155,154,1,0,0,0,155,156,1,0,0,0,
  	156,157,1,0,0,0,157,158,3,86,43,0,158,165,3,8,4,0,159,166,3,86,43,0,160,
  	162,3,4,2,0,161,160,1,0,0,0,162,163,1,0,0,0,163,161,1,0,0,0,163,164,1,
  	0,0,0,164,166,1,0,0,0,165,159,1,0,0,0,165,161,1,0,0,0,166,5,1,0,0,0,167,
  	168,5,18,0,0,168,169,3,128,64,0,169,7,1,0,0,0,170,171,7,0,0,0,171,9,1,
  	0,0,0,172,173,3,12,6,0,173,177,3,22,11,0,174,176,3,14,7,0,175,174,1,0,
  	0,0,176,179,1,0,0,0,177,175,1,0,0,0,177,178,1,0,0,0,178,181,1,0,0,0,179,
  	177,1,0,0,0,180,182,3,16,8,0,181,180,1,0,0,0,181,182,1,0,0,0,182,11,1,
  	0,0,0,183,184,5,10,0,0,184,185,5,20,0,0,185,186,3,86,43,0,186,187,5,21,
  	0,0,187,13,1,0,0,0,188,189,5,6,0,0,189,190,3,12,6,0,190,191,3,22,11,0,
  	191,15,1,0,0,0,192,193,5,6,0,0,193,194,3,22,11,0,194,17,1,0,0,0,195,196,
  	5,19,0,0,196,199,5,20,0,0,197,200,3,86,43,0,198,200,3,4,2,0,199,197,1,
  	0,0,0,199,198,1,0,0,0,200,201,1,0,0,0,201,202,5,21,0,0,202,203,3,22,11,
  	0,203,19,1,0,0,0,204,205,5,8,0,0,205,206,5,20,0,0,206,207,3,128,64,0,
  	207,208,5,12,0,0,208,209,3,86,43,0,209,210,5,21,0,0,210,211,3,22,11,0,
  	211,21,1,0,0,0,212,221,3,86,43,0,213,221,3,4,2,0,214,221,3,6,3,0,215,
  	221,3,10,5,0,216,221,3,18,9,0,217,221,3,20,10,0,218,221,3,26,13,0,219,
  	221,3,28,14,0,220,212,1,0,0,0,220,213,1,0,0,0,220,214,1,0,0,0,220,215,
  	1,0,0,0,220,216,1,0,0,0,220,217,1,0,0,0,220,218,1,0,0,0,220,219,1,0,0,
  	0,221,23,1,0,0,0,222,223,5,49,0,0,223,228,3,128,64,0,224,225,5,27,0,0,
  	225,227,3,128,64,0,226,224,1,0,0,0,227,230,1,0,0,0,228,226,1,0,0,0,228,
  	229,1,0,0,0,229,231,1,0,0,0,230,228,1,0,0,0,231,232,5,49,0,0,232,25,1,
  	0,0,0,233,235,5,22,0,0,234,236,3,24,12,0,235,234,1,0,0,0,235,236,1,0,
  	0,0,236,240,1,0,0,0,237,239,3,22,11,0,238,237,1,0,0,0,239,242,1,0,0,0,
  	240,238,1,0,0,0,240,241,1,0,0,0,241,243,1,0,0,0,242,240,1,0,0,0,243,244,
  	5,23,0,0,244,27,1,0,0,0,245,246,5,15,0,0,246,247,3,86,43,0,247,29,1,0,
  	0,0,248,250,3,36,18,0,249,248,1,0,0,0,249,250,1,0,0,0,250,252,1,0,0,0,
  	251,253,5,9,0,0,252,251,1,0,0,0,252,253,1,0,0,0,253,254,1,0,0,0,254,255,
  	5,3,0,0,255,257,3,128,64,0,256,258,3,32,16,0,257,256,1,0,0,0,257,258,
  	1,0,0,0,258,259,1,0,0,0,259,260,5,22,0,0,260,261,3,44,22,0,261,262,5,
  	23,0,0,262,31,1,0,0,0,263,264,5,13,0,0,264,265,3,128,64,0,265,33,1,0,
  	0,0,266,269,3,40,20,0,267,269,3,42,21,0,268,266,1,0,0,0,268,267,1,0,0,
  	0,269,35,1,0,0,0,270,272,3,34,17,0,271,270,1,0,0,0,272,273,1,0,0,0,273,
  	271,1,0,0,0,273,274,1,0,0,0,274,37,1,0,0,0,275,278,3,128,64,0,276,277,
  	5,52,0,0,277,279,3,90,45,0,278,276,1,0,0,0,278,279,1,0,0,0,279,39,1,0,
  	0,0,280,282,5,29,0,0,281,283,5,32,0,0,282,281,1,0,0,0,282,283,1,0,0,0,
  	283,284,1,0,0,0,284,285,3,38,19,0,285,41,1,0,0,0,286,288,5,29,0,0,287,
  	289,5,32,0,0,288,287,1,0,0,0,288,289,1,0,0,0,289,290,1,0,0,0,290,291,
  	3,128,64,0,291,292,5,20,0,0,292,297,3,38,19,0,293,294,5,27,0,0,294,296,
  	3,38,19,0,295,293,1,0,0,0,296,299,1,0,0,0,297,295,1,0,0,0,297,298,1,0,
  	0,0,298,300,1,0,0,0,299,297,1,0,0,0,300,301,5,21,0,0,301,43,1,0,0,0,302,
  	304,3,36,18,0,303,302,1,0,0,0,303,304,1,0,0,0,304,306,1,0,0,0,305,307,
  	3,46,23,0,306,305,1,0,0,0,306,307,1,0,0,0,307,308,1,0,0,0,308,310,3,48,
  	24,0,309,303,1,0,0,0,310,313,1,0,0,0,311,309,1,0,0,0,311,312,1,0,0,0,
  	312,45,1,0,0,0,313,311,1,0,0,0,314,321,5,9,0,0,315,321,5,16,0,0,316,317,
  	5,16,0,0,317,321,5,9,0,0,318,319,5,9,0,0,319,321,5,16,0,0,320,314,1,0,
  	0,0,320,315,1,0,0,0,320,316,1,0,0,0,320,318,1,0,0,0,321,47,1,0,0,0,322,
  	330,3,74,37,0,323,330,3,56,28,0,324,330,3,68,34,0,325,330,3,64,32,0,326,
  	330,3,66,33,0,327,330,3,58,29,0,328,330,3,50,25,0,329,322,1,0,0,0,329,
  	323,1,0,0,0,329,324,1,0,0,0,329,325,1,0,0,0,329,326,1,0,0,0,329,327,1,
  	0,0,0,329,328,1,0,0,0,330,49,1,0,0,0,331,332,5,4,0,0,332,333,3,128,64,
  	0,333,334,3,72,36,0,334,335,3,26,13,0,335,51,1,0,0,0,336,341,5,45,0,0,
  	337,341,5,33,0,0,338,341,5,32,0,0,339,341,3,128,64,0,340,336,1,0,0,0,
  	340,337,1,0,0,0,340,338,1,0,0,0,340,339,1,0,0,0,341,53,1,0,0,0,342,343,
  	7,1,0,0,343,55,1,0,0,0,344,346,3,52,26,0,345,347,3,26,13,0,346,345,1,
  	0,0,0,346,347,1,0,0,0,347,57,1,0,0,0,348,349,3,54,27,0,349,350,3,60,30,
  	0,350,351,3,26,13,0,351,59,1,0,0,0,352,353,5,20,0,0,353,354,3,128,64,
  	0,354,355,5,21,0,0,355,61,1,0,0,0,356,357,5,24,0,0,357,358,3,92,46,0,
  	358,359,5,25,0,0,359,63,1,0,0,0,360,361,3,62,31,0,361,362,3,26,13,0,362,
  	65,1,0,0,0,363,364,3,62,31,0,364,365,5,52,0,0,365,366,3,60,30,0,366,367,
  	3,26,13,0,367,67,1,0,0,0,368,369,3,128,64,0,369,370,3,70,35,0,370,371,
  	3,26,13,0,371,69,1,0,0,0,372,373,5,52,0,0,373,374,3,60,30,0,374,71,1,
  	0,0,0,375,384,5,20,0,0,376,381,3,128,64,0,377,378,5,27,0,0,378,380,3,
  	128,64,0,379,377,1,0,0,0,380,383,1,0,0,0,381,379,1,0,0,0,381,382,1,0,
  	0,0,382,385,1,0,0,0,383,381,1,0,0,0,384,376,1,0,0,0,384,385,1,0,0,0,385,
  	386,1,0,0,0,386,387,5,21,0,0,387,73,1,0,0,0,388,389,3,128,64,0,389,391,
  	3,72,36,0,390,392,3,26,13,0,391,390,1,0,0,0,391,392,1,0,0,0,392,75,1,
  	0,0,0,393,394,5,11,0,0,394,396,5,76,0,0,395,397,3,80,40,0,396,395,1,0,
  	0,0,396,397,1,0,0,0,397,77,1,0,0,0,398,401,3,128,64,0,399,400,5,1,0,0,
  	400,402,3,128,64,0,401,399,1,0,0,0,401,402,1,0,0,0,402,79,1,0,0,0,403,
  	404,5,8,0,0,404,405,3,78,39,0,405,406,5,27,0,0,406,407,3,78,39,0,407,
  	81,1,0,0,0,408,411,3,128,64,0,409,412,3,84,42,0,410,412,3,26,13,0,411,
  	409,1,0,0,0,411,410,1,0,0,0,411,412,1,0,0,0,412,417,1,0,0,0,413,414,5,
  	28,0,0,414,416,3,82,41,0,415,413,1,0,0,0,416,419,1,0,0,0,417,415,1,0,
  	0,0,417,418,1,0,0,0,418,83,1,0,0,0,419,417,1,0,0,0,420,422,5,20,0,0,421,
  	423,3,92,46,0,422,421,1,0,0,0,422,423,1,0,0,0,423,424,1,0,0,0,424,425,
  	5,21,0,0,425,85,1,0,0,0,426,427,6,43,-1,0,427,428,5,32,0,0,428,435,3,
  	86,43,3,429,430,5,20,0,0,430,431,3,86,43,0,431,432,5,21,0,0,432,435,1,
  	0,0,0,433,435,3,90,45,0,434,426,1,0,0,0,434,429,1,0,0,0,434,433,1,0,0,
  	0,435,440,1,0,0,0,436,437,10,4,0,0,437,439,3,88,44,0,438,436,1,0,0,0,
  	439,442,1,0,0,0,440,438,1,0,0,0,440,441,1,0,0,0,441,87,1,0,0,0,442,440,
  	1,0,0,0,443,455,3,124,62,0,444,455,3,116,58,0,445,455,3,114,57,0,446,
  	455,3,112,56,0,447,455,3,110,55,0,448,455,3,108,54,0,449,450,5,28,0,0,
  	450,455,3,82,41,0,451,452,5,13,0,0,452,455,3,86,43,0,453,455,3,126,63,
  	0,454,443,1,0,0,0,454,444,1,0,0,0,454,445,1,0,0,0,454,446,1,0,0,0,454,
  	447,1,0,0,0,454,448,1,0,0,0,454,449,1,0,0,0,454,451,1,0,0,0,454,453,1,
  	0,0,0,455,89,1,0,0,0,456,472,3,130,65,0,457,472,3,132,66,0,458,472,3,
  	134,67,0,459,472,3,136,68,0,460,472,3,138,69,0,461,472,3,98,49,0,462,
  	472,3,100,50,0,463,472,3,82,41,0,464,472,3,96,48,0,465,472,3,104,52,0,
  	466,472,5,2,0,0,467,472,5,5,0,0,468,472,3,76,38,0,469,470,5,45,0,0,470,
  	472,3,90,45,0,471,456,1,0,0,0,471,457,1,0,0,0,471,458,1,0,0,0,471,459,
  	1,0,0,0,471,460,1,0,0,0,471,461,1,0,0,0,471,462,1,0,0,0,471,463,1,0,0,
  	0,471,464,1,0,0,0,471,465,1,0,0,0,471,466,1,0,0,0,471,467,1,0,0,0,471,
  	468,1,0,0,0,471,469,1,0,0,0,472,91,1,0,0,0,473,478,3,86,43,0,474,475,
  	5,27,0,0,475,477,3,86,43,0,476,474,1,0,0,0,477,480,1,0,0,0,478,476,1,
  	0,0,0,478,479,1,0,0,0,479,93,1,0,0,0,480,478,1,0,0,0,481,482,3,86,43,
  	0,482,483,5,35,0,0,483,491,3,86,43,0,484,485,5,27,0,0,485,486,3,86,43,
  	0,486,487,5,35,0,0,487,488,3,86,43,0,488,490,1,0,0,0,489,484,1,0,0,0,
  	490,493,1,0,0,0,491,489,1,0,0,0,491,492,1,0,0,0,492,95,1,0,0,0,493,491,
  	1,0,0,0,494,495,3,106,53,0,495,496,7,2,0,0,496,497,3,106,53,0,497,97,
  	1,0,0,0,498,500,5,24,0,0,499,501,3,92,46,0,500,499,1,0,0,0,500,501,1,
  	0,0,0,501,502,1,0,0,0,502,503,5,25,0,0,503,99,1,0,0,0,504,506,5,22,0,
  	0,505,507,3,94,47,0,506,505,1,0,0,0,506,507,1,0,0,0,507,508,1,0,0,0,508,
  	509,5,23,0,0,509,101,1,0,0,0,510,513,3,82,41,0,511,513,3,134,67,0,512,
  	510,1,0,0,0,512,511,1,0,0,0,513,103,1,0,0,0,514,515,3,102,51,0,515,516,
  	3,98,49,0,516,105,1,0,0,0,517,520,3,82,41,0,518,520,3,136,68,0,519,517,
  	1,0,0,0,519,518,1,0,0,0,520,107,1,0,0,0,521,522,7,3,0,0,522,523,3,86,
  	43,0,523,109,1,0,0,0,524,527,7,4,0,0,525,528,3,108,54,0,526,528,3,86,
  	43,0,527,525,1,0,0,0,527,526,1,0,0,0,528,111,1,0,0,0,529,532,7,2,0,0,
  	530,533,3,110,55,0,531,533,3,86,43,0,532,530,1,0,0,0,532,531,1,0,0,0,
  	533,113,1,0,0,0,534,537,7,5,0,0,535,538,3,112,56,0,536,538,3,86,43,0,
  	537,535,1,0,0,0,537,536,1,0,0,0,538,115,1,0,0,0,539,542,7,6,0,0,540,543,
  	3,114,57,0,541,543,3,86,43,0,542,540,1,0,0,0,542,541,1,0,0,0,543,117,
  	1,0,0,0,544,545,7,7,0,0,545,119,1,0,0,0,546,547,3,118,59,0,547,548,3,
  	86,43,0,548,552,1,0,0,0,549,550,7,8,0,0,550,552,3,86,43,0,551,546,1,0,
  	0,0,551,549,1,0,0,0,552,121,1,0,0,0,553,560,3,120,60,0,554,555,5,40,0,
  	0,555,556,3,86,43,0,556,557,3,120,60,0,557,559,1,0,0,0,558,554,1,0,0,
  	0,559,562,1,0,0,0,560,558,1,0,0,0,560,561,1,0,0,0,561,123,1,0,0,0,562,
  	560,1,0,0,0,563,570,3,122,61,0,564,565,5,41,0,0,565,566,3,86,43,0,566,
  	567,3,122,61,0,567,569,1,0,0,0,568,564,1,0,0,0,569,572,1,0,0,0,570,568,
  	1,0,0,0,570,571,1,0,0,0,571,125,1,0,0,0,572,570,1,0,0,0,573,574,5,34,
  	0,0,574,575,3,86,43,0,575,576,5,35,0,0,576,577,3,86,43,0,577,127,1,0,
  	0,0,578,579,5,68,0,0,579,129,1,0,0,0,580,581,7,9,0,0,581,131,1,0,0,0,
  	582,583,5,75,0,0,583,133,1,0,0,0,584,585,7,10,0,0,585,135,1,0,0,0,586,
  	587,7,11,0,0,587,137,1,0,0,0,588,589,5,14,0,0,589,139,1,0,0,0,53,143,
  	152,155,163,165,177,181,199,220,228,235,240,249,252,257,268,273,278,282,
  	288,297,303,306,311,320,329,340,346,381,384,391,396,401,411,417,422,434,
  	440,454,471,478,491,500,506,512,519,527,532,537,542,551,560,570
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  wrenparserParserStaticData = staticData.release();
}

}

WrenParser::WrenParser(TokenStream *input) : WrenParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

WrenParser::WrenParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  WrenParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *wrenparserParserStaticData->atn, wrenparserParserStaticData->decisionToDFA, wrenparserParserStaticData->sharedContextCache, options);
}

WrenParser::~WrenParser() {
  delete _interpreter;
}

const atn::ATN& WrenParser::getATN() const {
  return *wrenparserParserStaticData->atn;
}

std::string WrenParser::getGrammarFileName() const {
  return "WrenParser.g4";
}

const std::vector<std::string>& WrenParser::getRuleNames() const {
  return wrenparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& WrenParser::getVocabulary() const {
  return wrenparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView WrenParser::getSerializedATN() const {
  return wrenparserParserStaticData->serializedATN;
}


//----------------- ScriptContext ------------------------------------------------------------------

WrenParser::ScriptContext::ScriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ScriptContext::EOF() {
  return getToken(WrenParser::EOF, 0);
}

std::vector<WrenParser::FileAtomContext *> WrenParser::ScriptContext::fileAtom() {
  return getRuleContexts<WrenParser::FileAtomContext>();
}

WrenParser::FileAtomContext* WrenParser::ScriptContext::fileAtom(size_t i) {
  return getRuleContext<WrenParser::FileAtomContext>(i);
}


size_t WrenParser::ScriptContext::getRuleIndex() const {
  return WrenParser::RuleScript;
}

void WrenParser::ScriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScript(this);
}

void WrenParser::ScriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScript(this);
}

WrenParser::ScriptContext* WrenParser::script() {
  ScriptContext *_localctx = _tracker.createInstance<ScriptContext>(_ctx, getState());
  enterRule(_localctx, 0, WrenParser::RuleScript);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(140);
      fileAtom();
      setState(143); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::BREAK_T)
      | (1ULL << WrenParser::CLASS_T)
      | (1ULL << WrenParser::CONTINUE_T)
      | (1ULL << WrenParser::FALSE_T)
      | (1ULL << WrenParser::FOR_T)
      | (1ULL << WrenParser::FOREIGN_T)
      | (1ULL << WrenParser::IF_T)
      | (1ULL << WrenParser::IMPORT_T)
      | (1ULL << WrenParser::NULL_T)
      | (1ULL << WrenParser::RETURN_T)
      | (1ULL << WrenParser::TRUE_T)
      | (1ULL << WrenParser::VAR_T)
      | (1ULL << WrenParser::WHILE_T)
      | (1ULL << WrenParser::LPAREN)
      | (1ULL << WrenParser::LBRACE)
      | (1ULL << WrenParser::LBRACK)
      | (1ULL << WrenParser::HASH)
      | (1ULL << WrenParser::BANG)
      | (1ULL << WrenParser::SUB))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (WrenParser::IDENTIFIER - 68))
      | (1ULL << (WrenParser::DECIMAL_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_LITERAL - 68))
      | (1ULL << (WrenParser::FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::CHAR_LITERAL - 68))
      | (1ULL << (WrenParser::STRING_LITERAL - 68))
      | (1ULL << (WrenParser::TEXT_BLOCK - 68)))) != 0));
    setState(145);
    match(WrenParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileAtomContext ------------------------------------------------------------------

WrenParser::FileAtomContext::FileAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::ClassDefinitionContext* WrenParser::FileAtomContext::classDefinition() {
  return getRuleContext<WrenParser::ClassDefinitionContext>(0);
}

WrenParser::FunctionContext* WrenParser::FileAtomContext::function() {
  return getRuleContext<WrenParser::FunctionContext>(0);
}

WrenParser::ImportModuleContext* WrenParser::FileAtomContext::importModule() {
  return getRuleContext<WrenParser::ImportModuleContext>(0);
}

WrenParser::StatementContext* WrenParser::FileAtomContext::statement() {
  return getRuleContext<WrenParser::StatementContext>(0);
}

WrenParser::BlockContext* WrenParser::FileAtomContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}


size_t WrenParser::FileAtomContext::getRuleIndex() const {
  return WrenParser::RuleFileAtom;
}

void WrenParser::FileAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileAtom(this);
}

void WrenParser::FileAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileAtom(this);
}

WrenParser::FileAtomContext* WrenParser::fileAtom() {
  FileAtomContext *_localctx = _tracker.createInstance<FileAtomContext>(_ctx, getState());
  enterRule(_localctx, 2, WrenParser::RuleFileAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(147);
      classDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(148);
      function();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(149);
      importModule();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(150);
      statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(151);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

WrenParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::ExpressionContext *> WrenParser::AssignmentContext::expression() {
  return getRuleContexts<WrenParser::ExpressionContext>();
}

WrenParser::ExpressionContext* WrenParser::AssignmentContext::expression(size_t i) {
  return getRuleContext<WrenParser::ExpressionContext>(i);
}

WrenParser::AssignOpContext* WrenParser::AssignmentContext::assignOp() {
  return getRuleContext<WrenParser::AssignOpContext>(0);
}

tree::TerminalNode* WrenParser::AssignmentContext::VAR_T() {
  return getToken(WrenParser::VAR_T, 0);
}

std::vector<WrenParser::AssignmentContext *> WrenParser::AssignmentContext::assignment() {
  return getRuleContexts<WrenParser::AssignmentContext>();
}

WrenParser::AssignmentContext* WrenParser::AssignmentContext::assignment(size_t i) {
  return getRuleContext<WrenParser::AssignmentContext>(i);
}


size_t WrenParser::AssignmentContext::getRuleIndex() const {
  return WrenParser::RuleAssignment;
}

void WrenParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void WrenParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

WrenParser::AssignmentContext* WrenParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, WrenParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::VAR_T) {
      setState(154);
      match(WrenParser::VAR_T);
    }
    setState(157);
    expression(0);
    setState(158);
    assignOp();
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(159);
      expression(0);
      break;
    }

    case 2: {
      setState(161); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(160);
                assignment();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(163); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentNullContext ------------------------------------------------------------------

WrenParser::AssignmentNullContext::AssignmentNullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::AssignmentNullContext::VAR_T() {
  return getToken(WrenParser::VAR_T, 0);
}

WrenParser::IdContext* WrenParser::AssignmentNullContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}


size_t WrenParser::AssignmentNullContext::getRuleIndex() const {
  return WrenParser::RuleAssignmentNull;
}

void WrenParser::AssignmentNullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentNull(this);
}

void WrenParser::AssignmentNullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentNull(this);
}

WrenParser::AssignmentNullContext* WrenParser::assignmentNull() {
  AssignmentNullContext *_localctx = _tracker.createInstance<AssignmentNullContext>(_ctx, getState());
  enterRule(_localctx, 6, WrenParser::RuleAssignmentNull);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(WrenParser::VAR_T);
    setState(168);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignOpContext ------------------------------------------------------------------

WrenParser::AssignOpContext::AssignOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::AssignOpContext::ASSIGN() {
  return getToken(WrenParser::ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::ADD_ASSIGN() {
  return getToken(WrenParser::ADD_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::SUB_ASSIGN() {
  return getToken(WrenParser::SUB_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::MUL_ASSIGN() {
  return getToken(WrenParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::DIV_ASSIGN() {
  return getToken(WrenParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::AND_ASSIGN() {
  return getToken(WrenParser::AND_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::OR_ASSIGN() {
  return getToken(WrenParser::OR_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::XOR_ASSIGN() {
  return getToken(WrenParser::XOR_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::MOD_ASSIGN() {
  return getToken(WrenParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::LSHIFT_ASSIGN() {
  return getToken(WrenParser::LSHIFT_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::RSHIFT_ASSIGN() {
  return getToken(WrenParser::RSHIFT_ASSIGN, 0);
}

tree::TerminalNode* WrenParser::AssignOpContext::URSHIFT_ASSIGN() {
  return getToken(WrenParser::URSHIFT_ASSIGN, 0);
}


size_t WrenParser::AssignOpContext::getRuleIndex() const {
  return WrenParser::RuleAssignOp;
}

void WrenParser::AssignOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignOp(this);
}

void WrenParser::AssignOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignOp(this);
}

WrenParser::AssignOpContext* WrenParser::assignOp() {
  AssignOpContext *_localctx = _tracker.createInstance<AssignOpContext>(_ctx, getState());
  enterRule(_localctx, 8, WrenParser::RuleAssignOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    _la = _input->LA(1);
    if (!(((((_la - 52) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 52)) & ((1ULL << (WrenParser::ASSIGN - 52))
      | (1ULL << (WrenParser::ADD_ASSIGN - 52))
      | (1ULL << (WrenParser::SUB_ASSIGN - 52))
      | (1ULL << (WrenParser::MUL_ASSIGN - 52))
      | (1ULL << (WrenParser::DIV_ASSIGN - 52))
      | (1ULL << (WrenParser::AND_ASSIGN - 52))
      | (1ULL << (WrenParser::OR_ASSIGN - 52))
      | (1ULL << (WrenParser::XOR_ASSIGN - 52))
      | (1ULL << (WrenParser::MOD_ASSIGN - 52))
      | (1ULL << (WrenParser::LSHIFT_ASSIGN - 52))
      | (1ULL << (WrenParser::RSHIFT_ASSIGN - 52))
      | (1ULL << (WrenParser::URSHIFT_ASSIGN - 52)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStContext ------------------------------------------------------------------

WrenParser::IfStContext::IfStContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::IfCondContext* WrenParser::IfStContext::ifCond() {
  return getRuleContext<WrenParser::IfCondContext>(0);
}

WrenParser::StatementContext* WrenParser::IfStContext::statement() {
  return getRuleContext<WrenParser::StatementContext>(0);
}

std::vector<WrenParser::ElseIfContext *> WrenParser::IfStContext::elseIf() {
  return getRuleContexts<WrenParser::ElseIfContext>();
}

WrenParser::ElseIfContext* WrenParser::IfStContext::elseIf(size_t i) {
  return getRuleContext<WrenParser::ElseIfContext>(i);
}

WrenParser::ElseStContext* WrenParser::IfStContext::elseSt() {
  return getRuleContext<WrenParser::ElseStContext>(0);
}


size_t WrenParser::IfStContext::getRuleIndex() const {
  return WrenParser::RuleIfSt;
}

void WrenParser::IfStContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfSt(this);
}

void WrenParser::IfStContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfSt(this);
}

WrenParser::IfStContext* WrenParser::ifSt() {
  IfStContext *_localctx = _tracker.createInstance<IfStContext>(_ctx, getState());
  enterRule(_localctx, 10, WrenParser::RuleIfSt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(172);
    ifCond();
    setState(173);
    statement();
    setState(177);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(174);
        elseIf(); 
      }
      setState(179);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
    setState(181);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(180);
      elseSt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfCondContext ------------------------------------------------------------------

WrenParser::IfCondContext::IfCondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::IfCondContext::IF_T() {
  return getToken(WrenParser::IF_T, 0);
}

tree::TerminalNode* WrenParser::IfCondContext::LPAREN() {
  return getToken(WrenParser::LPAREN, 0);
}

WrenParser::ExpressionContext* WrenParser::IfCondContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}

tree::TerminalNode* WrenParser::IfCondContext::RPAREN() {
  return getToken(WrenParser::RPAREN, 0);
}


size_t WrenParser::IfCondContext::getRuleIndex() const {
  return WrenParser::RuleIfCond;
}

void WrenParser::IfCondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfCond(this);
}

void WrenParser::IfCondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfCond(this);
}

WrenParser::IfCondContext* WrenParser::ifCond() {
  IfCondContext *_localctx = _tracker.createInstance<IfCondContext>(_ctx, getState());
  enterRule(_localctx, 12, WrenParser::RuleIfCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(WrenParser::IF_T);
    setState(184);
    match(WrenParser::LPAREN);
    setState(185);
    expression(0);
    setState(186);
    match(WrenParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfContext ------------------------------------------------------------------

WrenParser::ElseIfContext::ElseIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ElseIfContext::ELSE_T() {
  return getToken(WrenParser::ELSE_T, 0);
}

WrenParser::IfCondContext* WrenParser::ElseIfContext::ifCond() {
  return getRuleContext<WrenParser::IfCondContext>(0);
}

WrenParser::StatementContext* WrenParser::ElseIfContext::statement() {
  return getRuleContext<WrenParser::StatementContext>(0);
}


size_t WrenParser::ElseIfContext::getRuleIndex() const {
  return WrenParser::RuleElseIf;
}

void WrenParser::ElseIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIf(this);
}

void WrenParser::ElseIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIf(this);
}

WrenParser::ElseIfContext* WrenParser::elseIf() {
  ElseIfContext *_localctx = _tracker.createInstance<ElseIfContext>(_ctx, getState());
  enterRule(_localctx, 14, WrenParser::RuleElseIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(WrenParser::ELSE_T);
    setState(189);
    ifCond();
    setState(190);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStContext ------------------------------------------------------------------

WrenParser::ElseStContext::ElseStContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ElseStContext::ELSE_T() {
  return getToken(WrenParser::ELSE_T, 0);
}

WrenParser::StatementContext* WrenParser::ElseStContext::statement() {
  return getRuleContext<WrenParser::StatementContext>(0);
}


size_t WrenParser::ElseStContext::getRuleIndex() const {
  return WrenParser::RuleElseSt;
}

void WrenParser::ElseStContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseSt(this);
}

void WrenParser::ElseStContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseSt(this);
}

WrenParser::ElseStContext* WrenParser::elseSt() {
  ElseStContext *_localctx = _tracker.createInstance<ElseStContext>(_ctx, getState());
  enterRule(_localctx, 16, WrenParser::RuleElseSt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(WrenParser::ELSE_T);
    setState(193);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStContext ------------------------------------------------------------------

WrenParser::WhileStContext::WhileStContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::WhileStContext::WHILE_T() {
  return getToken(WrenParser::WHILE_T, 0);
}

tree::TerminalNode* WrenParser::WhileStContext::LPAREN() {
  return getToken(WrenParser::LPAREN, 0);
}

tree::TerminalNode* WrenParser::WhileStContext::RPAREN() {
  return getToken(WrenParser::RPAREN, 0);
}

WrenParser::StatementContext* WrenParser::WhileStContext::statement() {
  return getRuleContext<WrenParser::StatementContext>(0);
}

WrenParser::ExpressionContext* WrenParser::WhileStContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}

WrenParser::AssignmentContext* WrenParser::WhileStContext::assignment() {
  return getRuleContext<WrenParser::AssignmentContext>(0);
}


size_t WrenParser::WhileStContext::getRuleIndex() const {
  return WrenParser::RuleWhileSt;
}

void WrenParser::WhileStContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileSt(this);
}

void WrenParser::WhileStContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileSt(this);
}

WrenParser::WhileStContext* WrenParser::whileSt() {
  WhileStContext *_localctx = _tracker.createInstance<WhileStContext>(_ctx, getState());
  enterRule(_localctx, 18, WrenParser::RuleWhileSt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(WrenParser::WHILE_T);
    setState(196);
    match(WrenParser::LPAREN);
    setState(199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(197);
      expression(0);
      break;
    }

    case 2: {
      setState(198);
      assignment();
      break;
    }

    default:
      break;
    }
    setState(201);
    match(WrenParser::RPAREN);
    setState(202);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStContext ------------------------------------------------------------------

WrenParser::ForStContext::ForStContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ForStContext::FOR_T() {
  return getToken(WrenParser::FOR_T, 0);
}

tree::TerminalNode* WrenParser::ForStContext::LPAREN() {
  return getToken(WrenParser::LPAREN, 0);
}

WrenParser::IdContext* WrenParser::ForStContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

tree::TerminalNode* WrenParser::ForStContext::IN() {
  return getToken(WrenParser::IN, 0);
}

WrenParser::ExpressionContext* WrenParser::ForStContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}

tree::TerminalNode* WrenParser::ForStContext::RPAREN() {
  return getToken(WrenParser::RPAREN, 0);
}

WrenParser::StatementContext* WrenParser::ForStContext::statement() {
  return getRuleContext<WrenParser::StatementContext>(0);
}


size_t WrenParser::ForStContext::getRuleIndex() const {
  return WrenParser::RuleForSt;
}

void WrenParser::ForStContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForSt(this);
}

void WrenParser::ForStContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForSt(this);
}

WrenParser::ForStContext* WrenParser::forSt() {
  ForStContext *_localctx = _tracker.createInstance<ForStContext>(_ctx, getState());
  enterRule(_localctx, 20, WrenParser::RuleForSt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(WrenParser::FOR_T);
    setState(205);
    match(WrenParser::LPAREN);
    setState(206);
    id();
    setState(207);
    match(WrenParser::IN);
    setState(208);
    expression(0);
    setState(209);
    match(WrenParser::RPAREN);
    setState(210);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

WrenParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::ExpressionContext* WrenParser::StatementContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}

WrenParser::AssignmentContext* WrenParser::StatementContext::assignment() {
  return getRuleContext<WrenParser::AssignmentContext>(0);
}

WrenParser::AssignmentNullContext* WrenParser::StatementContext::assignmentNull() {
  return getRuleContext<WrenParser::AssignmentNullContext>(0);
}

WrenParser::IfStContext* WrenParser::StatementContext::ifSt() {
  return getRuleContext<WrenParser::IfStContext>(0);
}

WrenParser::WhileStContext* WrenParser::StatementContext::whileSt() {
  return getRuleContext<WrenParser::WhileStContext>(0);
}

WrenParser::ForStContext* WrenParser::StatementContext::forSt() {
  return getRuleContext<WrenParser::ForStContext>(0);
}

WrenParser::BlockContext* WrenParser::StatementContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}

WrenParser::ReturnStContext* WrenParser::StatementContext::returnSt() {
  return getRuleContext<WrenParser::ReturnStContext>(0);
}


size_t WrenParser::StatementContext::getRuleIndex() const {
  return WrenParser::RuleStatement;
}

void WrenParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void WrenParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

WrenParser::StatementContext* WrenParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, WrenParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(212);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(213);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(214);
      assignmentNull();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(215);
      ifSt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(216);
      whileSt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(217);
      forSt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(218);
      block();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(219);
      returnSt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParametersContext ------------------------------------------------------------------

WrenParser::LambdaParametersContext::LambdaParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> WrenParser::LambdaParametersContext::BITOR() {
  return getTokens(WrenParser::BITOR);
}

tree::TerminalNode* WrenParser::LambdaParametersContext::BITOR(size_t i) {
  return getToken(WrenParser::BITOR, i);
}

std::vector<WrenParser::IdContext *> WrenParser::LambdaParametersContext::id() {
  return getRuleContexts<WrenParser::IdContext>();
}

WrenParser::IdContext* WrenParser::LambdaParametersContext::id(size_t i) {
  return getRuleContext<WrenParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> WrenParser::LambdaParametersContext::COMMA() {
  return getTokens(WrenParser::COMMA);
}

tree::TerminalNode* WrenParser::LambdaParametersContext::COMMA(size_t i) {
  return getToken(WrenParser::COMMA, i);
}


size_t WrenParser::LambdaParametersContext::getRuleIndex() const {
  return WrenParser::RuleLambdaParameters;
}

void WrenParser::LambdaParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaParameters(this);
}

void WrenParser::LambdaParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaParameters(this);
}

WrenParser::LambdaParametersContext* WrenParser::lambdaParameters() {
  LambdaParametersContext *_localctx = _tracker.createInstance<LambdaParametersContext>(_ctx, getState());
  enterRule(_localctx, 24, WrenParser::RuleLambdaParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(WrenParser::BITOR);

    setState(223);
    id();
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == WrenParser::COMMA) {
      setState(224);
      match(WrenParser::COMMA);
      setState(225);
      id();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(231);
    match(WrenParser::BITOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

WrenParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::BlockContext::LBRACE() {
  return getToken(WrenParser::LBRACE, 0);
}

tree::TerminalNode* WrenParser::BlockContext::RBRACE() {
  return getToken(WrenParser::RBRACE, 0);
}

WrenParser::LambdaParametersContext* WrenParser::BlockContext::lambdaParameters() {
  return getRuleContext<WrenParser::LambdaParametersContext>(0);
}

std::vector<WrenParser::StatementContext *> WrenParser::BlockContext::statement() {
  return getRuleContexts<WrenParser::StatementContext>();
}

WrenParser::StatementContext* WrenParser::BlockContext::statement(size_t i) {
  return getRuleContext<WrenParser::StatementContext>(i);
}


size_t WrenParser::BlockContext::getRuleIndex() const {
  return WrenParser::RuleBlock;
}

void WrenParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void WrenParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

WrenParser::BlockContext* WrenParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, WrenParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(WrenParser::LBRACE);
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::BITOR) {
      setState(234);
      lambdaParameters();
    }
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::BREAK_T)
      | (1ULL << WrenParser::CONTINUE_T)
      | (1ULL << WrenParser::FALSE_T)
      | (1ULL << WrenParser::FOR_T)
      | (1ULL << WrenParser::IF_T)
      | (1ULL << WrenParser::IMPORT_T)
      | (1ULL << WrenParser::NULL_T)
      | (1ULL << WrenParser::RETURN_T)
      | (1ULL << WrenParser::TRUE_T)
      | (1ULL << WrenParser::VAR_T)
      | (1ULL << WrenParser::WHILE_T)
      | (1ULL << WrenParser::LPAREN)
      | (1ULL << WrenParser::LBRACE)
      | (1ULL << WrenParser::LBRACK)
      | (1ULL << WrenParser::BANG)
      | (1ULL << WrenParser::SUB))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (WrenParser::IDENTIFIER - 68))
      | (1ULL << (WrenParser::DECIMAL_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_LITERAL - 68))
      | (1ULL << (WrenParser::FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::CHAR_LITERAL - 68))
      | (1ULL << (WrenParser::STRING_LITERAL - 68))
      | (1ULL << (WrenParser::TEXT_BLOCK - 68)))) != 0)) {
      setState(237);
      statement();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(243);
    match(WrenParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStContext ------------------------------------------------------------------

WrenParser::ReturnStContext::ReturnStContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ReturnStContext::RETURN_T() {
  return getToken(WrenParser::RETURN_T, 0);
}

WrenParser::ExpressionContext* WrenParser::ReturnStContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}


size_t WrenParser::ReturnStContext::getRuleIndex() const {
  return WrenParser::RuleReturnSt;
}

void WrenParser::ReturnStContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnSt(this);
}

void WrenParser::ReturnStContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnSt(this);
}

WrenParser::ReturnStContext* WrenParser::returnSt() {
  ReturnStContext *_localctx = _tracker.createInstance<ReturnStContext>(_ctx, getState());
  enterRule(_localctx, 28, WrenParser::RuleReturnSt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(WrenParser::RETURN_T);
    setState(246);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDefinitionContext ------------------------------------------------------------------

WrenParser::ClassDefinitionContext::ClassDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ClassDefinitionContext::CLASS_T() {
  return getToken(WrenParser::CLASS_T, 0);
}

WrenParser::IdContext* WrenParser::ClassDefinitionContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

tree::TerminalNode* WrenParser::ClassDefinitionContext::LBRACE() {
  return getToken(WrenParser::LBRACE, 0);
}

WrenParser::ClassBodyContext* WrenParser::ClassDefinitionContext::classBody() {
  return getRuleContext<WrenParser::ClassBodyContext>(0);
}

tree::TerminalNode* WrenParser::ClassDefinitionContext::RBRACE() {
  return getToken(WrenParser::RBRACE, 0);
}

WrenParser::AttributesContext* WrenParser::ClassDefinitionContext::attributes() {
  return getRuleContext<WrenParser::AttributesContext>(0);
}

tree::TerminalNode* WrenParser::ClassDefinitionContext::FOREIGN_T() {
  return getToken(WrenParser::FOREIGN_T, 0);
}

WrenParser::InheritanceContext* WrenParser::ClassDefinitionContext::inheritance() {
  return getRuleContext<WrenParser::InheritanceContext>(0);
}


size_t WrenParser::ClassDefinitionContext::getRuleIndex() const {
  return WrenParser::RuleClassDefinition;
}

void WrenParser::ClassDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDefinition(this);
}

void WrenParser::ClassDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDefinition(this);
}

WrenParser::ClassDefinitionContext* WrenParser::classDefinition() {
  ClassDefinitionContext *_localctx = _tracker.createInstance<ClassDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 30, WrenParser::RuleClassDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::HASH) {
      setState(248);
      attributes();
    }
    setState(252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::FOREIGN_T) {
      setState(251);
      match(WrenParser::FOREIGN_T);
    }
    setState(254);
    match(WrenParser::CLASS_T);
    setState(255);
    id();
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::IS) {
      setState(256);
      inheritance();
    }
    setState(259);
    match(WrenParser::LBRACE);
    setState(260);
    classBody();
    setState(261);
    match(WrenParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InheritanceContext ------------------------------------------------------------------

WrenParser::InheritanceContext::InheritanceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::InheritanceContext::IS() {
  return getToken(WrenParser::IS, 0);
}

WrenParser::IdContext* WrenParser::InheritanceContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}


size_t WrenParser::InheritanceContext::getRuleIndex() const {
  return WrenParser::RuleInheritance;
}

void WrenParser::InheritanceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInheritance(this);
}

void WrenParser::InheritanceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInheritance(this);
}

WrenParser::InheritanceContext* WrenParser::inheritance() {
  InheritanceContext *_localctx = _tracker.createInstance<InheritanceContext>(_ctx, getState());
  enterRule(_localctx, 32, WrenParser::RuleInheritance);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(WrenParser::IS);
    setState(264);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

WrenParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::SimpleAttributeContext* WrenParser::AttributeContext::simpleAttribute() {
  return getRuleContext<WrenParser::SimpleAttributeContext>(0);
}

WrenParser::GroupAttributeContext* WrenParser::AttributeContext::groupAttribute() {
  return getRuleContext<WrenParser::GroupAttributeContext>(0);
}


size_t WrenParser::AttributeContext::getRuleIndex() const {
  return WrenParser::RuleAttribute;
}

void WrenParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void WrenParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

WrenParser::AttributeContext* WrenParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 34, WrenParser::RuleAttribute);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(266);
      simpleAttribute();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(267);
      groupAttribute();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributesContext ------------------------------------------------------------------

WrenParser::AttributesContext::AttributesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::AttributeContext *> WrenParser::AttributesContext::attribute() {
  return getRuleContexts<WrenParser::AttributeContext>();
}

WrenParser::AttributeContext* WrenParser::AttributesContext::attribute(size_t i) {
  return getRuleContext<WrenParser::AttributeContext>(i);
}


size_t WrenParser::AttributesContext::getRuleIndex() const {
  return WrenParser::RuleAttributes;
}

void WrenParser::AttributesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributes(this);
}

void WrenParser::AttributesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributes(this);
}

WrenParser::AttributesContext* WrenParser::attributes() {
  AttributesContext *_localctx = _tracker.createInstance<AttributesContext>(_ctx, getState());
  enterRule(_localctx, 36, WrenParser::RuleAttributes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(270);
      attribute();
      setState(273); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == WrenParser::HASH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeValueContext ------------------------------------------------------------------

WrenParser::AttributeValueContext::AttributeValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::IdContext* WrenParser::AttributeValueContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

tree::TerminalNode* WrenParser::AttributeValueContext::ASSIGN() {
  return getToken(WrenParser::ASSIGN, 0);
}

WrenParser::AtomExpressionContext* WrenParser::AttributeValueContext::atomExpression() {
  return getRuleContext<WrenParser::AtomExpressionContext>(0);
}


size_t WrenParser::AttributeValueContext::getRuleIndex() const {
  return WrenParser::RuleAttributeValue;
}

void WrenParser::AttributeValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeValue(this);
}

void WrenParser::AttributeValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeValue(this);
}

WrenParser::AttributeValueContext* WrenParser::attributeValue() {
  AttributeValueContext *_localctx = _tracker.createInstance<AttributeValueContext>(_ctx, getState());
  enterRule(_localctx, 38, WrenParser::RuleAttributeValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    id();
    setState(278);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::ASSIGN) {
      setState(276);
      match(WrenParser::ASSIGN);
      setState(277);
      atomExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleAttributeContext ------------------------------------------------------------------

WrenParser::SimpleAttributeContext::SimpleAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::SimpleAttributeContext::HASH() {
  return getToken(WrenParser::HASH, 0);
}

WrenParser::AttributeValueContext* WrenParser::SimpleAttributeContext::attributeValue() {
  return getRuleContext<WrenParser::AttributeValueContext>(0);
}

tree::TerminalNode* WrenParser::SimpleAttributeContext::BANG() {
  return getToken(WrenParser::BANG, 0);
}


size_t WrenParser::SimpleAttributeContext::getRuleIndex() const {
  return WrenParser::RuleSimpleAttribute;
}

void WrenParser::SimpleAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleAttribute(this);
}

void WrenParser::SimpleAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleAttribute(this);
}

WrenParser::SimpleAttributeContext* WrenParser::simpleAttribute() {
  SimpleAttributeContext *_localctx = _tracker.createInstance<SimpleAttributeContext>(_ctx, getState());
  enterRule(_localctx, 40, WrenParser::RuleSimpleAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(WrenParser::HASH);
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::BANG) {
      setState(281);
      match(WrenParser::BANG);
    }
    setState(284);
    attributeValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupAttributeContext ------------------------------------------------------------------

WrenParser::GroupAttributeContext::GroupAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::GroupAttributeContext::HASH() {
  return getToken(WrenParser::HASH, 0);
}

WrenParser::IdContext* WrenParser::GroupAttributeContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

tree::TerminalNode* WrenParser::GroupAttributeContext::LPAREN() {
  return getToken(WrenParser::LPAREN, 0);
}

std::vector<WrenParser::AttributeValueContext *> WrenParser::GroupAttributeContext::attributeValue() {
  return getRuleContexts<WrenParser::AttributeValueContext>();
}

WrenParser::AttributeValueContext* WrenParser::GroupAttributeContext::attributeValue(size_t i) {
  return getRuleContext<WrenParser::AttributeValueContext>(i);
}

tree::TerminalNode* WrenParser::GroupAttributeContext::RPAREN() {
  return getToken(WrenParser::RPAREN, 0);
}

tree::TerminalNode* WrenParser::GroupAttributeContext::BANG() {
  return getToken(WrenParser::BANG, 0);
}

std::vector<tree::TerminalNode *> WrenParser::GroupAttributeContext::COMMA() {
  return getTokens(WrenParser::COMMA);
}

tree::TerminalNode* WrenParser::GroupAttributeContext::COMMA(size_t i) {
  return getToken(WrenParser::COMMA, i);
}


size_t WrenParser::GroupAttributeContext::getRuleIndex() const {
  return WrenParser::RuleGroupAttribute;
}

void WrenParser::GroupAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupAttribute(this);
}

void WrenParser::GroupAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupAttribute(this);
}

WrenParser::GroupAttributeContext* WrenParser::groupAttribute() {
  GroupAttributeContext *_localctx = _tracker.createInstance<GroupAttributeContext>(_ctx, getState());
  enterRule(_localctx, 42, WrenParser::RuleGroupAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(WrenParser::HASH);
    setState(288);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::BANG) {
      setState(287);
      match(WrenParser::BANG);
    }
    setState(290);
    id();
    setState(291);
    match(WrenParser::LPAREN);
    setState(292);
    attributeValue();
    setState(297);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == WrenParser::COMMA) {
      setState(293);
      match(WrenParser::COMMA);
      setState(294);
      attributeValue();
      setState(299);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(300);
    match(WrenParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

WrenParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::ClassStatementContext *> WrenParser::ClassBodyContext::classStatement() {
  return getRuleContexts<WrenParser::ClassStatementContext>();
}

WrenParser::ClassStatementContext* WrenParser::ClassBodyContext::classStatement(size_t i) {
  return getRuleContext<WrenParser::ClassStatementContext>(i);
}

std::vector<WrenParser::AttributesContext *> WrenParser::ClassBodyContext::attributes() {
  return getRuleContexts<WrenParser::AttributesContext>();
}

WrenParser::AttributesContext* WrenParser::ClassBodyContext::attributes(size_t i) {
  return getRuleContext<WrenParser::AttributesContext>(i);
}

std::vector<WrenParser::ClassBodyTpeContext *> WrenParser::ClassBodyContext::classBodyTpe() {
  return getRuleContexts<WrenParser::ClassBodyTpeContext>();
}

WrenParser::ClassBodyTpeContext* WrenParser::ClassBodyContext::classBodyTpe(size_t i) {
  return getRuleContext<WrenParser::ClassBodyTpeContext>(i);
}


size_t WrenParser::ClassBodyContext::getRuleIndex() const {
  return WrenParser::RuleClassBody;
}

void WrenParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void WrenParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}

WrenParser::ClassBodyContext* WrenParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 44, WrenParser::RuleClassBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::CONSTRUCT)
      | (1ULL << WrenParser::FOREIGN_T)
      | (1ULL << WrenParser::IS)
      | (1ULL << WrenParser::STATIC_T)
      | (1ULL << WrenParser::LBRACK)
      | (1ULL << WrenParser::HASH)
      | (1ULL << WrenParser::GT)
      | (1ULL << WrenParser::LT)
      | (1ULL << WrenParser::BANG)
      | (1ULL << WrenParser::TILDE)
      | (1ULL << WrenParser::EQUAL)
      | (1ULL << WrenParser::LE)
      | (1ULL << WrenParser::GE)
      | (1ULL << WrenParser::NOTEQUAL)
      | (1ULL << WrenParser::ADD)
      | (1ULL << WrenParser::SUB)
      | (1ULL << WrenParser::MUL)
      | (1ULL << WrenParser::DIV)
      | (1ULL << WrenParser::BITAND)
      | (1ULL << WrenParser::BITOR)
      | (1ULL << WrenParser::CARET)
      | (1ULL << WrenParser::MOD)
      | (1ULL << WrenParser::LSHIFT)
      | (1ULL << WrenParser::RSHIFT))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (WrenParser::ELLIPSIS_OUT - 66))
      | (1ULL << (WrenParser::ELLIPSIS_IN - 66))
      | (1ULL << (WrenParser::IDENTIFIER - 66)))) != 0)) {
      setState(303);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == WrenParser::HASH) {
        setState(302);
        attributes();
      }
      setState(306);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == WrenParser::FOREIGN_T

      || _la == WrenParser::STATIC_T) {
        setState(305);
        classBodyTpe();
      }
      setState(308);
      classStatement();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyTpeContext ------------------------------------------------------------------

WrenParser::ClassBodyTpeContext::ClassBodyTpeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ClassBodyTpeContext::FOREIGN_T() {
  return getToken(WrenParser::FOREIGN_T, 0);
}

tree::TerminalNode* WrenParser::ClassBodyTpeContext::STATIC_T() {
  return getToken(WrenParser::STATIC_T, 0);
}


size_t WrenParser::ClassBodyTpeContext::getRuleIndex() const {
  return WrenParser::RuleClassBodyTpe;
}

void WrenParser::ClassBodyTpeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBodyTpe(this);
}

void WrenParser::ClassBodyTpeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBodyTpe(this);
}

WrenParser::ClassBodyTpeContext* WrenParser::classBodyTpe() {
  ClassBodyTpeContext *_localctx = _tracker.createInstance<ClassBodyTpeContext>(_ctx, getState());
  enterRule(_localctx, 46, WrenParser::RuleClassBodyTpe);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      match(WrenParser::FOREIGN_T);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(315);
      match(WrenParser::STATIC_T);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(316);
      match(WrenParser::STATIC_T);
      setState(317);
      match(WrenParser::FOREIGN_T);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(318);
      match(WrenParser::FOREIGN_T);
      setState(319);
      match(WrenParser::STATIC_T);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassStatementContext ------------------------------------------------------------------

WrenParser::ClassStatementContext::ClassStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::FunctionContext* WrenParser::ClassStatementContext::function() {
  return getRuleContext<WrenParser::FunctionContext>(0);
}

WrenParser::ClassOpGetterContext* WrenParser::ClassStatementContext::classOpGetter() {
  return getRuleContext<WrenParser::ClassOpGetterContext>(0);
}

WrenParser::ClassSetterContext* WrenParser::ClassStatementContext::classSetter() {
  return getRuleContext<WrenParser::ClassSetterContext>(0);
}

WrenParser::ClassSubscriptGetContext* WrenParser::ClassStatementContext::classSubscriptGet() {
  return getRuleContext<WrenParser::ClassSubscriptGetContext>(0);
}

WrenParser::ClassSubscriptSetContext* WrenParser::ClassStatementContext::classSubscriptSet() {
  return getRuleContext<WrenParser::ClassSubscriptSetContext>(0);
}

WrenParser::ClassOpSetterContext* WrenParser::ClassStatementContext::classOpSetter() {
  return getRuleContext<WrenParser::ClassOpSetterContext>(0);
}

WrenParser::ClassConstructorContext* WrenParser::ClassStatementContext::classConstructor() {
  return getRuleContext<WrenParser::ClassConstructorContext>(0);
}


size_t WrenParser::ClassStatementContext::getRuleIndex() const {
  return WrenParser::RuleClassStatement;
}

void WrenParser::ClassStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassStatement(this);
}

void WrenParser::ClassStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassStatement(this);
}

WrenParser::ClassStatementContext* WrenParser::classStatement() {
  ClassStatementContext *_localctx = _tracker.createInstance<ClassStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, WrenParser::RuleClassStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(322);
      function();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(323);
      classOpGetter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(324);
      classSetter();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(325);
      classSubscriptGet();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(326);
      classSubscriptSet();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(327);
      classOpSetter();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(328);
      classConstructor();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassConstructorContext ------------------------------------------------------------------

WrenParser::ClassConstructorContext::ClassConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ClassConstructorContext::CONSTRUCT() {
  return getToken(WrenParser::CONSTRUCT, 0);
}

WrenParser::IdContext* WrenParser::ClassConstructorContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

WrenParser::ArgumentsContext* WrenParser::ClassConstructorContext::arguments() {
  return getRuleContext<WrenParser::ArgumentsContext>(0);
}

WrenParser::BlockContext* WrenParser::ClassConstructorContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}


size_t WrenParser::ClassConstructorContext::getRuleIndex() const {
  return WrenParser::RuleClassConstructor;
}

void WrenParser::ClassConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassConstructor(this);
}

void WrenParser::ClassConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassConstructor(this);
}

WrenParser::ClassConstructorContext* WrenParser::classConstructor() {
  ClassConstructorContext *_localctx = _tracker.createInstance<ClassConstructorContext>(_ctx, getState());
  enterRule(_localctx, 50, WrenParser::RuleClassConstructor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(WrenParser::CONSTRUCT);
    setState(332);
    id();
    setState(333);
    arguments();
    setState(334);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorGetterContext ------------------------------------------------------------------

WrenParser::OperatorGetterContext::OperatorGetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::OperatorGetterContext::SUB() {
  return getToken(WrenParser::SUB, 0);
}

tree::TerminalNode* WrenParser::OperatorGetterContext::TILDE() {
  return getToken(WrenParser::TILDE, 0);
}

tree::TerminalNode* WrenParser::OperatorGetterContext::BANG() {
  return getToken(WrenParser::BANG, 0);
}

WrenParser::IdContext* WrenParser::OperatorGetterContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}


size_t WrenParser::OperatorGetterContext::getRuleIndex() const {
  return WrenParser::RuleOperatorGetter;
}

void WrenParser::OperatorGetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorGetter(this);
}

void WrenParser::OperatorGetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorGetter(this);
}

WrenParser::OperatorGetterContext* WrenParser::operatorGetter() {
  OperatorGetterContext *_localctx = _tracker.createInstance<OperatorGetterContext>(_ctx, getState());
  enterRule(_localctx, 52, WrenParser::RuleOperatorGetter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(340);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::SUB: {
        enterOuterAlt(_localctx, 1);
        setState(336);
        match(WrenParser::SUB);
        break;
      }

      case WrenParser::TILDE: {
        enterOuterAlt(_localctx, 2);
        setState(337);
        match(WrenParser::TILDE);
        break;
      }

      case WrenParser::BANG: {
        enterOuterAlt(_localctx, 3);
        setState(338);
        match(WrenParser::BANG);
        break;
      }

      case WrenParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 4);
        setState(339);
        id();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorSetterContext ------------------------------------------------------------------

WrenParser::OperatorSetterContext::OperatorSetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::OperatorSetterContext::SUB() {
  return getToken(WrenParser::SUB, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::MUL() {
  return getToken(WrenParser::MUL, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::DIV() {
  return getToken(WrenParser::DIV, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::MOD() {
  return getToken(WrenParser::MOD, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::ADD() {
  return getToken(WrenParser::ADD, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::ELLIPSIS_OUT() {
  return getToken(WrenParser::ELLIPSIS_OUT, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::ELLIPSIS_IN() {
  return getToken(WrenParser::ELLIPSIS_IN, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::LSHIFT() {
  return getToken(WrenParser::LSHIFT, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::RSHIFT() {
  return getToken(WrenParser::RSHIFT, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::BITAND() {
  return getToken(WrenParser::BITAND, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::CARET() {
  return getToken(WrenParser::CARET, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::BITOR() {
  return getToken(WrenParser::BITOR, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::GT() {
  return getToken(WrenParser::GT, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::LT() {
  return getToken(WrenParser::LT, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::EQUAL() {
  return getToken(WrenParser::EQUAL, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::LE() {
  return getToken(WrenParser::LE, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::GE() {
  return getToken(WrenParser::GE, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::NOTEQUAL() {
  return getToken(WrenParser::NOTEQUAL, 0);
}

tree::TerminalNode* WrenParser::OperatorSetterContext::IS() {
  return getToken(WrenParser::IS, 0);
}


size_t WrenParser::OperatorSetterContext::getRuleIndex() const {
  return WrenParser::RuleOperatorSetter;
}

void WrenParser::OperatorSetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorSetter(this);
}

void WrenParser::OperatorSetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorSetter(this);
}

WrenParser::OperatorSetterContext* WrenParser::operatorSetter() {
  OperatorSetterContext *_localctx = _tracker.createInstance<OperatorSetterContext>(_ctx, getState());
  enterRule(_localctx, 54, WrenParser::RuleOperatorSetter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    _la = _input->LA(1);
    if (!(((((_la - 13) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 13)) & ((1ULL << (WrenParser::IS - 13))
      | (1ULL << (WrenParser::GT - 13))
      | (1ULL << (WrenParser::LT - 13))
      | (1ULL << (WrenParser::EQUAL - 13))
      | (1ULL << (WrenParser::LE - 13))
      | (1ULL << (WrenParser::GE - 13))
      | (1ULL << (WrenParser::NOTEQUAL - 13))
      | (1ULL << (WrenParser::ADD - 13))
      | (1ULL << (WrenParser::SUB - 13))
      | (1ULL << (WrenParser::MUL - 13))
      | (1ULL << (WrenParser::DIV - 13))
      | (1ULL << (WrenParser::BITAND - 13))
      | (1ULL << (WrenParser::BITOR - 13))
      | (1ULL << (WrenParser::CARET - 13))
      | (1ULL << (WrenParser::MOD - 13))
      | (1ULL << (WrenParser::LSHIFT - 13))
      | (1ULL << (WrenParser::RSHIFT - 13))
      | (1ULL << (WrenParser::ELLIPSIS_OUT - 13))
      | (1ULL << (WrenParser::ELLIPSIS_IN - 13)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOpGetterContext ------------------------------------------------------------------

WrenParser::ClassOpGetterContext::ClassOpGetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::OperatorGetterContext* WrenParser::ClassOpGetterContext::operatorGetter() {
  return getRuleContext<WrenParser::OperatorGetterContext>(0);
}

WrenParser::BlockContext* WrenParser::ClassOpGetterContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}


size_t WrenParser::ClassOpGetterContext::getRuleIndex() const {
  return WrenParser::RuleClassOpGetter;
}

void WrenParser::ClassOpGetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOpGetter(this);
}

void WrenParser::ClassOpGetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOpGetter(this);
}

WrenParser::ClassOpGetterContext* WrenParser::classOpGetter() {
  ClassOpGetterContext *_localctx = _tracker.createInstance<ClassOpGetterContext>(_ctx, getState());
  enterRule(_localctx, 56, WrenParser::RuleClassOpGetter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    operatorGetter();
    setState(346);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::LBRACE) {
      setState(345);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOpSetterContext ------------------------------------------------------------------

WrenParser::ClassOpSetterContext::ClassOpSetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::OperatorSetterContext* WrenParser::ClassOpSetterContext::operatorSetter() {
  return getRuleContext<WrenParser::OperatorSetterContext>(0);
}

WrenParser::OneArgumentContext* WrenParser::ClassOpSetterContext::oneArgument() {
  return getRuleContext<WrenParser::OneArgumentContext>(0);
}

WrenParser::BlockContext* WrenParser::ClassOpSetterContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}


size_t WrenParser::ClassOpSetterContext::getRuleIndex() const {
  return WrenParser::RuleClassOpSetter;
}

void WrenParser::ClassOpSetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOpSetter(this);
}

void WrenParser::ClassOpSetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOpSetter(this);
}

WrenParser::ClassOpSetterContext* WrenParser::classOpSetter() {
  ClassOpSetterContext *_localctx = _tracker.createInstance<ClassOpSetterContext>(_ctx, getState());
  enterRule(_localctx, 58, WrenParser::RuleClassOpSetter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    operatorSetter();
    setState(349);
    oneArgument();
    setState(350);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OneArgumentContext ------------------------------------------------------------------

WrenParser::OneArgumentContext::OneArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::OneArgumentContext::LPAREN() {
  return getToken(WrenParser::LPAREN, 0);
}

WrenParser::IdContext* WrenParser::OneArgumentContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

tree::TerminalNode* WrenParser::OneArgumentContext::RPAREN() {
  return getToken(WrenParser::RPAREN, 0);
}


size_t WrenParser::OneArgumentContext::getRuleIndex() const {
  return WrenParser::RuleOneArgument;
}

void WrenParser::OneArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneArgument(this);
}

void WrenParser::OneArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneArgument(this);
}

WrenParser::OneArgumentContext* WrenParser::oneArgument() {
  OneArgumentContext *_localctx = _tracker.createInstance<OneArgumentContext>(_ctx, getState());
  enterRule(_localctx, 60, WrenParser::RuleOneArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    match(WrenParser::LPAREN);
    setState(353);
    id();
    setState(354);
    match(WrenParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubscriptContext ------------------------------------------------------------------

WrenParser::SubscriptContext::SubscriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::SubscriptContext::LBRACK() {
  return getToken(WrenParser::LBRACK, 0);
}

WrenParser::EnumerationContext* WrenParser::SubscriptContext::enumeration() {
  return getRuleContext<WrenParser::EnumerationContext>(0);
}

tree::TerminalNode* WrenParser::SubscriptContext::RBRACK() {
  return getToken(WrenParser::RBRACK, 0);
}


size_t WrenParser::SubscriptContext::getRuleIndex() const {
  return WrenParser::RuleSubscript;
}

void WrenParser::SubscriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubscript(this);
}

void WrenParser::SubscriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubscript(this);
}

WrenParser::SubscriptContext* WrenParser::subscript() {
  SubscriptContext *_localctx = _tracker.createInstance<SubscriptContext>(_ctx, getState());
  enterRule(_localctx, 62, WrenParser::RuleSubscript);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    match(WrenParser::LBRACK);
    setState(357);
    enumeration();
    setState(358);
    match(WrenParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassSubscriptGetContext ------------------------------------------------------------------

WrenParser::ClassSubscriptGetContext::ClassSubscriptGetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::SubscriptContext* WrenParser::ClassSubscriptGetContext::subscript() {
  return getRuleContext<WrenParser::SubscriptContext>(0);
}

WrenParser::BlockContext* WrenParser::ClassSubscriptGetContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}


size_t WrenParser::ClassSubscriptGetContext::getRuleIndex() const {
  return WrenParser::RuleClassSubscriptGet;
}

void WrenParser::ClassSubscriptGetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassSubscriptGet(this);
}

void WrenParser::ClassSubscriptGetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassSubscriptGet(this);
}

WrenParser::ClassSubscriptGetContext* WrenParser::classSubscriptGet() {
  ClassSubscriptGetContext *_localctx = _tracker.createInstance<ClassSubscriptGetContext>(_ctx, getState());
  enterRule(_localctx, 64, WrenParser::RuleClassSubscriptGet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    subscript();
    setState(361);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassSubscriptSetContext ------------------------------------------------------------------

WrenParser::ClassSubscriptSetContext::ClassSubscriptSetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::SubscriptContext* WrenParser::ClassSubscriptSetContext::subscript() {
  return getRuleContext<WrenParser::SubscriptContext>(0);
}

tree::TerminalNode* WrenParser::ClassSubscriptSetContext::ASSIGN() {
  return getToken(WrenParser::ASSIGN, 0);
}

WrenParser::OneArgumentContext* WrenParser::ClassSubscriptSetContext::oneArgument() {
  return getRuleContext<WrenParser::OneArgumentContext>(0);
}

WrenParser::BlockContext* WrenParser::ClassSubscriptSetContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}


size_t WrenParser::ClassSubscriptSetContext::getRuleIndex() const {
  return WrenParser::RuleClassSubscriptSet;
}

void WrenParser::ClassSubscriptSetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassSubscriptSet(this);
}

void WrenParser::ClassSubscriptSetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassSubscriptSet(this);
}

WrenParser::ClassSubscriptSetContext* WrenParser::classSubscriptSet() {
  ClassSubscriptSetContext *_localctx = _tracker.createInstance<ClassSubscriptSetContext>(_ctx, getState());
  enterRule(_localctx, 66, WrenParser::RuleClassSubscriptSet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    subscript();
    setState(364);
    match(WrenParser::ASSIGN);
    setState(365);
    oneArgument();
    setState(366);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassSetterContext ------------------------------------------------------------------

WrenParser::ClassSetterContext::ClassSetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::IdContext* WrenParser::ClassSetterContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

WrenParser::AssignmentSetterContext* WrenParser::ClassSetterContext::assignmentSetter() {
  return getRuleContext<WrenParser::AssignmentSetterContext>(0);
}

WrenParser::BlockContext* WrenParser::ClassSetterContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}


size_t WrenParser::ClassSetterContext::getRuleIndex() const {
  return WrenParser::RuleClassSetter;
}

void WrenParser::ClassSetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassSetter(this);
}

void WrenParser::ClassSetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassSetter(this);
}

WrenParser::ClassSetterContext* WrenParser::classSetter() {
  ClassSetterContext *_localctx = _tracker.createInstance<ClassSetterContext>(_ctx, getState());
  enterRule(_localctx, 68, WrenParser::RuleClassSetter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    id();
    setState(369);
    assignmentSetter();
    setState(370);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentSetterContext ------------------------------------------------------------------

WrenParser::AssignmentSetterContext::AssignmentSetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::AssignmentSetterContext::ASSIGN() {
  return getToken(WrenParser::ASSIGN, 0);
}

WrenParser::OneArgumentContext* WrenParser::AssignmentSetterContext::oneArgument() {
  return getRuleContext<WrenParser::OneArgumentContext>(0);
}


size_t WrenParser::AssignmentSetterContext::getRuleIndex() const {
  return WrenParser::RuleAssignmentSetter;
}

void WrenParser::AssignmentSetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentSetter(this);
}

void WrenParser::AssignmentSetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentSetter(this);
}

WrenParser::AssignmentSetterContext* WrenParser::assignmentSetter() {
  AssignmentSetterContext *_localctx = _tracker.createInstance<AssignmentSetterContext>(_ctx, getState());
  enterRule(_localctx, 70, WrenParser::RuleAssignmentSetter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    match(WrenParser::ASSIGN);
    setState(373);
    oneArgument();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

WrenParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ArgumentsContext::LPAREN() {
  return getToken(WrenParser::LPAREN, 0);
}

tree::TerminalNode* WrenParser::ArgumentsContext::RPAREN() {
  return getToken(WrenParser::RPAREN, 0);
}

std::vector<WrenParser::IdContext *> WrenParser::ArgumentsContext::id() {
  return getRuleContexts<WrenParser::IdContext>();
}

WrenParser::IdContext* WrenParser::ArgumentsContext::id(size_t i) {
  return getRuleContext<WrenParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> WrenParser::ArgumentsContext::COMMA() {
  return getTokens(WrenParser::COMMA);
}

tree::TerminalNode* WrenParser::ArgumentsContext::COMMA(size_t i) {
  return getToken(WrenParser::COMMA, i);
}


size_t WrenParser::ArgumentsContext::getRuleIndex() const {
  return WrenParser::RuleArguments;
}

void WrenParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void WrenParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}

WrenParser::ArgumentsContext* WrenParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 72, WrenParser::RuleArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    match(WrenParser::LPAREN);
    setState(384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == WrenParser::IDENTIFIER) {
      setState(376);
      id();
      setState(381);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == WrenParser::COMMA) {
        setState(377);
        match(WrenParser::COMMA);
        setState(378);
        id();
        setState(383);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(386);
    match(WrenParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

WrenParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::IdContext* WrenParser::FunctionContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

WrenParser::ArgumentsContext* WrenParser::FunctionContext::arguments() {
  return getRuleContext<WrenParser::ArgumentsContext>(0);
}

WrenParser::BlockContext* WrenParser::FunctionContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}


size_t WrenParser::FunctionContext::getRuleIndex() const {
  return WrenParser::RuleFunction;
}

void WrenParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void WrenParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

WrenParser::FunctionContext* WrenParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 74, WrenParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    id();
    setState(389);
    arguments();
    setState(391);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(390);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportModuleContext ------------------------------------------------------------------

WrenParser::ImportModuleContext::ImportModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ImportModuleContext::IMPORT_T() {
  return getToken(WrenParser::IMPORT_T, 0);
}

tree::TerminalNode* WrenParser::ImportModuleContext::STRING_LITERAL() {
  return getToken(WrenParser::STRING_LITERAL, 0);
}

WrenParser::ImportVariablesContext* WrenParser::ImportModuleContext::importVariables() {
  return getRuleContext<WrenParser::ImportVariablesContext>(0);
}


size_t WrenParser::ImportModuleContext::getRuleIndex() const {
  return WrenParser::RuleImportModule;
}

void WrenParser::ImportModuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportModule(this);
}

void WrenParser::ImportModuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportModule(this);
}

WrenParser::ImportModuleContext* WrenParser::importModule() {
  ImportModuleContext *_localctx = _tracker.createInstance<ImportModuleContext>(_ctx, getState());
  enterRule(_localctx, 76, WrenParser::RuleImportModule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    match(WrenParser::IMPORT_T);
    setState(394);
    match(WrenParser::STRING_LITERAL);
    setState(396);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(395);
      importVariables();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportVariableContext ------------------------------------------------------------------

WrenParser::ImportVariableContext::ImportVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::IdContext *> WrenParser::ImportVariableContext::id() {
  return getRuleContexts<WrenParser::IdContext>();
}

WrenParser::IdContext* WrenParser::ImportVariableContext::id(size_t i) {
  return getRuleContext<WrenParser::IdContext>(i);
}

tree::TerminalNode* WrenParser::ImportVariableContext::AS() {
  return getToken(WrenParser::AS, 0);
}


size_t WrenParser::ImportVariableContext::getRuleIndex() const {
  return WrenParser::RuleImportVariable;
}

void WrenParser::ImportVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportVariable(this);
}

void WrenParser::ImportVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportVariable(this);
}

WrenParser::ImportVariableContext* WrenParser::importVariable() {
  ImportVariableContext *_localctx = _tracker.createInstance<ImportVariableContext>(_ctx, getState());
  enterRule(_localctx, 78, WrenParser::RuleImportVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    id();
    setState(401);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(399);
      match(WrenParser::AS);
      setState(400);
      id();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportVariablesContext ------------------------------------------------------------------

WrenParser::ImportVariablesContext::ImportVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ImportVariablesContext::FOR_T() {
  return getToken(WrenParser::FOR_T, 0);
}

std::vector<WrenParser::ImportVariableContext *> WrenParser::ImportVariablesContext::importVariable() {
  return getRuleContexts<WrenParser::ImportVariableContext>();
}

WrenParser::ImportVariableContext* WrenParser::ImportVariablesContext::importVariable(size_t i) {
  return getRuleContext<WrenParser::ImportVariableContext>(i);
}

tree::TerminalNode* WrenParser::ImportVariablesContext::COMMA() {
  return getToken(WrenParser::COMMA, 0);
}


size_t WrenParser::ImportVariablesContext::getRuleIndex() const {
  return WrenParser::RuleImportVariables;
}

void WrenParser::ImportVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportVariables(this);
}

void WrenParser::ImportVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportVariables(this);
}

WrenParser::ImportVariablesContext* WrenParser::importVariables() {
  ImportVariablesContext *_localctx = _tracker.createInstance<ImportVariablesContext>(_ctx, getState());
  enterRule(_localctx, 80, WrenParser::RuleImportVariables);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(WrenParser::FOR_T);
    setState(404);
    importVariable();

    setState(405);
    match(WrenParser::COMMA);
    setState(406);
    importVariable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

WrenParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::IdContext* WrenParser::CallContext::id() {
  return getRuleContext<WrenParser::IdContext>(0);
}

WrenParser::CallInvokeContext* WrenParser::CallContext::callInvoke() {
  return getRuleContext<WrenParser::CallInvokeContext>(0);
}

WrenParser::BlockContext* WrenParser::CallContext::block() {
  return getRuleContext<WrenParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> WrenParser::CallContext::DOT() {
  return getTokens(WrenParser::DOT);
}

tree::TerminalNode* WrenParser::CallContext::DOT(size_t i) {
  return getToken(WrenParser::DOT, i);
}

std::vector<WrenParser::CallContext *> WrenParser::CallContext::call() {
  return getRuleContexts<WrenParser::CallContext>();
}

WrenParser::CallContext* WrenParser::CallContext::call(size_t i) {
  return getRuleContext<WrenParser::CallContext>(i);
}


size_t WrenParser::CallContext::getRuleIndex() const {
  return WrenParser::RuleCall;
}

void WrenParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}

void WrenParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}

WrenParser::CallContext* WrenParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 82, WrenParser::RuleCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(408);
    id();
    setState(411);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(409);
      callInvoke();
      break;
    }

    case 2: {
      setState(410);
      block();
      break;
    }

    default:
      break;
    }
    setState(417);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(413);
        match(WrenParser::DOT);
        setState(414);
        call(); 
      }
      setState(419);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallInvokeContext ------------------------------------------------------------------

WrenParser::CallInvokeContext::CallInvokeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::CallInvokeContext::LPAREN() {
  return getToken(WrenParser::LPAREN, 0);
}

tree::TerminalNode* WrenParser::CallInvokeContext::RPAREN() {
  return getToken(WrenParser::RPAREN, 0);
}

WrenParser::EnumerationContext* WrenParser::CallInvokeContext::enumeration() {
  return getRuleContext<WrenParser::EnumerationContext>(0);
}


size_t WrenParser::CallInvokeContext::getRuleIndex() const {
  return WrenParser::RuleCallInvoke;
}

void WrenParser::CallInvokeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallInvoke(this);
}

void WrenParser::CallInvokeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallInvoke(this);
}

WrenParser::CallInvokeContext* WrenParser::callInvoke() {
  CallInvokeContext *_localctx = _tracker.createInstance<CallInvokeContext>(_ctx, getState());
  enterRule(_localctx, 84, WrenParser::RuleCallInvoke);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(WrenParser::LPAREN);
    setState(422);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::BREAK_T)
      | (1ULL << WrenParser::CONTINUE_T)
      | (1ULL << WrenParser::FALSE_T)
      | (1ULL << WrenParser::IMPORT_T)
      | (1ULL << WrenParser::NULL_T)
      | (1ULL << WrenParser::TRUE_T)
      | (1ULL << WrenParser::LPAREN)
      | (1ULL << WrenParser::LBRACE)
      | (1ULL << WrenParser::LBRACK)
      | (1ULL << WrenParser::BANG)
      | (1ULL << WrenParser::SUB))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (WrenParser::IDENTIFIER - 68))
      | (1ULL << (WrenParser::DECIMAL_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_LITERAL - 68))
      | (1ULL << (WrenParser::FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::CHAR_LITERAL - 68))
      | (1ULL << (WrenParser::STRING_LITERAL - 68))
      | (1ULL << (WrenParser::TEXT_BLOCK - 68)))) != 0)) {
      setState(421);
      enumeration();
    }
    setState(424);
    match(WrenParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

WrenParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ExpressionContext::BANG() {
  return getToken(WrenParser::BANG, 0);
}

WrenParser::ExpressionContext* WrenParser::ExpressionContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}

tree::TerminalNode* WrenParser::ExpressionContext::LPAREN() {
  return getToken(WrenParser::LPAREN, 0);
}

tree::TerminalNode* WrenParser::ExpressionContext::RPAREN() {
  return getToken(WrenParser::RPAREN, 0);
}

WrenParser::AtomExpressionContext* WrenParser::ExpressionContext::atomExpression() {
  return getRuleContext<WrenParser::AtomExpressionContext>(0);
}

WrenParser::CompoundExpressionContext* WrenParser::ExpressionContext::compoundExpression() {
  return getRuleContext<WrenParser::CompoundExpressionContext>(0);
}


size_t WrenParser::ExpressionContext::getRuleIndex() const {
  return WrenParser::RuleExpression;
}

void WrenParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void WrenParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


WrenParser::ExpressionContext* WrenParser::expression() {
   return expression(0);
}

WrenParser::ExpressionContext* WrenParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  WrenParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  WrenParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, WrenParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(434);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::BANG: {
        setState(427);
        match(WrenParser::BANG);
        setState(428);
        expression(3);
        break;
      }

      case WrenParser::LPAREN: {
        setState(429);
        match(WrenParser::LPAREN);
        setState(430);
        expression(0);
        setState(431);
        match(WrenParser::RPAREN);
        break;
      }

      case WrenParser::BREAK_T:
      case WrenParser::CONTINUE_T:
      case WrenParser::FALSE_T:
      case WrenParser::IMPORT_T:
      case WrenParser::NULL_T:
      case WrenParser::TRUE_T:
      case WrenParser::LBRACE:
      case WrenParser::LBRACK:
      case WrenParser::SUB:
      case WrenParser::IDENTIFIER:
      case WrenParser::DECIMAL_LITERAL:
      case WrenParser::HEX_LITERAL:
      case WrenParser::FLOAT_LITERAL:
      case WrenParser::HEX_FLOAT_LITERAL:
      case WrenParser::CHAR_LITERAL:
      case WrenParser::STRING_LITERAL:
      case WrenParser::TEXT_BLOCK: {
        setState(433);
        atomExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(440);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(436);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(437);
        compoundExpression(); 
      }
      setState(442);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompoundExpressionContext ------------------------------------------------------------------

WrenParser::CompoundExpressionContext::CompoundExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::LogicContext* WrenParser::CompoundExpressionContext::logic() {
  return getRuleContext<WrenParser::LogicContext>(0);
}

WrenParser::ArithBitContext* WrenParser::CompoundExpressionContext::arithBit() {
  return getRuleContext<WrenParser::ArithBitContext>(0);
}

WrenParser::ArithShiftContext* WrenParser::CompoundExpressionContext::arithShift() {
  return getRuleContext<WrenParser::ArithShiftContext>(0);
}

WrenParser::ArithRangeContext* WrenParser::CompoundExpressionContext::arithRange() {
  return getRuleContext<WrenParser::ArithRangeContext>(0);
}

WrenParser::ArithAddContext* WrenParser::CompoundExpressionContext::arithAdd() {
  return getRuleContext<WrenParser::ArithAddContext>(0);
}

WrenParser::ArithMulContext* WrenParser::CompoundExpressionContext::arithMul() {
  return getRuleContext<WrenParser::ArithMulContext>(0);
}

tree::TerminalNode* WrenParser::CompoundExpressionContext::DOT() {
  return getToken(WrenParser::DOT, 0);
}

WrenParser::CallContext* WrenParser::CompoundExpressionContext::call() {
  return getRuleContext<WrenParser::CallContext>(0);
}

tree::TerminalNode* WrenParser::CompoundExpressionContext::IS() {
  return getToken(WrenParser::IS, 0);
}

WrenParser::ExpressionContext* WrenParser::CompoundExpressionContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}

WrenParser::ElvisContext* WrenParser::CompoundExpressionContext::elvis() {
  return getRuleContext<WrenParser::ElvisContext>(0);
}


size_t WrenParser::CompoundExpressionContext::getRuleIndex() const {
  return WrenParser::RuleCompoundExpression;
}

void WrenParser::CompoundExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundExpression(this);
}

void WrenParser::CompoundExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundExpression(this);
}

WrenParser::CompoundExpressionContext* WrenParser::compoundExpression() {
  CompoundExpressionContext *_localctx = _tracker.createInstance<CompoundExpressionContext>(_ctx, getState());
  enterRule(_localctx, 88, WrenParser::RuleCompoundExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(454);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::GT:
      case WrenParser::LT:
      case WrenParser::EQUAL:
      case WrenParser::LE:
      case WrenParser::GE:
      case WrenParser::NOTEQUAL:
      case WrenParser::AND:
      case WrenParser::OR: {
        enterOuterAlt(_localctx, 1);
        setState(443);
        logic();
        break;
      }

      case WrenParser::BITAND:
      case WrenParser::BITOR:
      case WrenParser::CARET: {
        enterOuterAlt(_localctx, 2);
        setState(444);
        arithBit();
        break;
      }

      case WrenParser::LSHIFT:
      case WrenParser::RSHIFT: {
        enterOuterAlt(_localctx, 3);
        setState(445);
        arithShift();
        break;
      }

      case WrenParser::ELLIPSIS_OUT:
      case WrenParser::ELLIPSIS_IN: {
        enterOuterAlt(_localctx, 4);
        setState(446);
        arithRange();
        break;
      }

      case WrenParser::ADD:
      case WrenParser::SUB: {
        enterOuterAlt(_localctx, 5);
        setState(447);
        arithAdd();
        break;
      }

      case WrenParser::MUL:
      case WrenParser::DIV:
      case WrenParser::MOD: {
        enterOuterAlt(_localctx, 6);
        setState(448);
        arithMul();
        break;
      }

      case WrenParser::DOT: {
        enterOuterAlt(_localctx, 7);
        setState(449);
        match(WrenParser::DOT);
        setState(450);
        call();
        break;
      }

      case WrenParser::IS: {
        enterOuterAlt(_localctx, 8);
        setState(451);
        match(WrenParser::IS);
        setState(452);
        expression(0);
        break;
      }

      case WrenParser::QUESTION: {
        enterOuterAlt(_localctx, 9);
        setState(453);
        elvis();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomExpressionContext ------------------------------------------------------------------

WrenParser::AtomExpressionContext::AtomExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::BoolEContext* WrenParser::AtomExpressionContext::boolE() {
  return getRuleContext<WrenParser::BoolEContext>(0);
}

WrenParser::CharEContext* WrenParser::AtomExpressionContext::charE() {
  return getRuleContext<WrenParser::CharEContext>(0);
}

WrenParser::StringEContext* WrenParser::AtomExpressionContext::stringE() {
  return getRuleContext<WrenParser::StringEContext>(0);
}

WrenParser::NumEContext* WrenParser::AtomExpressionContext::numE() {
  return getRuleContext<WrenParser::NumEContext>(0);
}

WrenParser::NullEContext* WrenParser::AtomExpressionContext::nullE() {
  return getRuleContext<WrenParser::NullEContext>(0);
}

WrenParser::ListInitContext* WrenParser::AtomExpressionContext::listInit() {
  return getRuleContext<WrenParser::ListInitContext>(0);
}

WrenParser::MapInitContext* WrenParser::AtomExpressionContext::mapInit() {
  return getRuleContext<WrenParser::MapInitContext>(0);
}

WrenParser::CallContext* WrenParser::AtomExpressionContext::call() {
  return getRuleContext<WrenParser::CallContext>(0);
}

WrenParser::RangeContext* WrenParser::AtomExpressionContext::range() {
  return getRuleContext<WrenParser::RangeContext>(0);
}

WrenParser::CollectionElemContext* WrenParser::AtomExpressionContext::collectionElem() {
  return getRuleContext<WrenParser::CollectionElemContext>(0);
}

tree::TerminalNode* WrenParser::AtomExpressionContext::BREAK_T() {
  return getToken(WrenParser::BREAK_T, 0);
}

tree::TerminalNode* WrenParser::AtomExpressionContext::CONTINUE_T() {
  return getToken(WrenParser::CONTINUE_T, 0);
}

WrenParser::ImportModuleContext* WrenParser::AtomExpressionContext::importModule() {
  return getRuleContext<WrenParser::ImportModuleContext>(0);
}

tree::TerminalNode* WrenParser::AtomExpressionContext::SUB() {
  return getToken(WrenParser::SUB, 0);
}

WrenParser::AtomExpressionContext* WrenParser::AtomExpressionContext::atomExpression() {
  return getRuleContext<WrenParser::AtomExpressionContext>(0);
}


size_t WrenParser::AtomExpressionContext::getRuleIndex() const {
  return WrenParser::RuleAtomExpression;
}

void WrenParser::AtomExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomExpression(this);
}

void WrenParser::AtomExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomExpression(this);
}

WrenParser::AtomExpressionContext* WrenParser::atomExpression() {
  AtomExpressionContext *_localctx = _tracker.createInstance<AtomExpressionContext>(_ctx, getState());
  enterRule(_localctx, 90, WrenParser::RuleAtomExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(471);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(456);
      boolE();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(457);
      charE();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(458);
      stringE();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(459);
      numE();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(460);
      nullE();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(461);
      listInit();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(462);
      mapInit();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(463);
      call();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(464);
      range();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(465);
      collectionElem();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(466);
      match(WrenParser::BREAK_T);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(467);
      match(WrenParser::CONTINUE_T);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(468);
      importModule();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(469);
      match(WrenParser::SUB);
      setState(470);
      atomExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumerationContext ------------------------------------------------------------------

WrenParser::EnumerationContext::EnumerationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::ExpressionContext *> WrenParser::EnumerationContext::expression() {
  return getRuleContexts<WrenParser::ExpressionContext>();
}

WrenParser::ExpressionContext* WrenParser::EnumerationContext::expression(size_t i) {
  return getRuleContext<WrenParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> WrenParser::EnumerationContext::COMMA() {
  return getTokens(WrenParser::COMMA);
}

tree::TerminalNode* WrenParser::EnumerationContext::COMMA(size_t i) {
  return getToken(WrenParser::COMMA, i);
}


size_t WrenParser::EnumerationContext::getRuleIndex() const {
  return WrenParser::RuleEnumeration;
}

void WrenParser::EnumerationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeration(this);
}

void WrenParser::EnumerationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeration(this);
}

WrenParser::EnumerationContext* WrenParser::enumeration() {
  EnumerationContext *_localctx = _tracker.createInstance<EnumerationContext>(_ctx, getState());
  enterRule(_localctx, 92, WrenParser::RuleEnumeration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    expression(0);
    setState(478);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == WrenParser::COMMA) {
      setState(474);
      match(WrenParser::COMMA);
      setState(475);
      expression(0);
      setState(480);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PairEnumerationContext ------------------------------------------------------------------

WrenParser::PairEnumerationContext::PairEnumerationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::ExpressionContext *> WrenParser::PairEnumerationContext::expression() {
  return getRuleContexts<WrenParser::ExpressionContext>();
}

WrenParser::ExpressionContext* WrenParser::PairEnumerationContext::expression(size_t i) {
  return getRuleContext<WrenParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> WrenParser::PairEnumerationContext::COLON() {
  return getTokens(WrenParser::COLON);
}

tree::TerminalNode* WrenParser::PairEnumerationContext::COLON(size_t i) {
  return getToken(WrenParser::COLON, i);
}

std::vector<tree::TerminalNode *> WrenParser::PairEnumerationContext::COMMA() {
  return getTokens(WrenParser::COMMA);
}

tree::TerminalNode* WrenParser::PairEnumerationContext::COMMA(size_t i) {
  return getToken(WrenParser::COMMA, i);
}


size_t WrenParser::PairEnumerationContext::getRuleIndex() const {
  return WrenParser::RulePairEnumeration;
}

void WrenParser::PairEnumerationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPairEnumeration(this);
}

void WrenParser::PairEnumerationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPairEnumeration(this);
}

WrenParser::PairEnumerationContext* WrenParser::pairEnumeration() {
  PairEnumerationContext *_localctx = _tracker.createInstance<PairEnumerationContext>(_ctx, getState());
  enterRule(_localctx, 94, WrenParser::RulePairEnumeration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    expression(0);
    setState(482);
    match(WrenParser::COLON);
    setState(483);
    expression(0);
    setState(491);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == WrenParser::COMMA) {
      setState(484);
      match(WrenParser::COMMA);
      setState(485);
      expression(0);
      setState(486);
      match(WrenParser::COLON);
      setState(487);
      expression(0);
      setState(493);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeContext ------------------------------------------------------------------

WrenParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::RangeExpressionContext *> WrenParser::RangeContext::rangeExpression() {
  return getRuleContexts<WrenParser::RangeExpressionContext>();
}

WrenParser::RangeExpressionContext* WrenParser::RangeContext::rangeExpression(size_t i) {
  return getRuleContext<WrenParser::RangeExpressionContext>(i);
}

tree::TerminalNode* WrenParser::RangeContext::ELLIPSIS_IN() {
  return getToken(WrenParser::ELLIPSIS_IN, 0);
}

tree::TerminalNode* WrenParser::RangeContext::ELLIPSIS_OUT() {
  return getToken(WrenParser::ELLIPSIS_OUT, 0);
}


size_t WrenParser::RangeContext::getRuleIndex() const {
  return WrenParser::RuleRange;
}

void WrenParser::RangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange(this);
}

void WrenParser::RangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange(this);
}

WrenParser::RangeContext* WrenParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 96, WrenParser::RuleRange);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    rangeExpression();
    setState(495);
    _la = _input->LA(1);
    if (!(_la == WrenParser::ELLIPSIS_OUT

    || _la == WrenParser::ELLIPSIS_IN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(496);
    rangeExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListInitContext ------------------------------------------------------------------

WrenParser::ListInitContext::ListInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ListInitContext::LBRACK() {
  return getToken(WrenParser::LBRACK, 0);
}

tree::TerminalNode* WrenParser::ListInitContext::RBRACK() {
  return getToken(WrenParser::RBRACK, 0);
}

WrenParser::EnumerationContext* WrenParser::ListInitContext::enumeration() {
  return getRuleContext<WrenParser::EnumerationContext>(0);
}


size_t WrenParser::ListInitContext::getRuleIndex() const {
  return WrenParser::RuleListInit;
}

void WrenParser::ListInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListInit(this);
}

void WrenParser::ListInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListInit(this);
}

WrenParser::ListInitContext* WrenParser::listInit() {
  ListInitContext *_localctx = _tracker.createInstance<ListInitContext>(_ctx, getState());
  enterRule(_localctx, 98, WrenParser::RuleListInit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    match(WrenParser::LBRACK);
    setState(500);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::BREAK_T)
      | (1ULL << WrenParser::CONTINUE_T)
      | (1ULL << WrenParser::FALSE_T)
      | (1ULL << WrenParser::IMPORT_T)
      | (1ULL << WrenParser::NULL_T)
      | (1ULL << WrenParser::TRUE_T)
      | (1ULL << WrenParser::LPAREN)
      | (1ULL << WrenParser::LBRACE)
      | (1ULL << WrenParser::LBRACK)
      | (1ULL << WrenParser::BANG)
      | (1ULL << WrenParser::SUB))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (WrenParser::IDENTIFIER - 68))
      | (1ULL << (WrenParser::DECIMAL_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_LITERAL - 68))
      | (1ULL << (WrenParser::FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::CHAR_LITERAL - 68))
      | (1ULL << (WrenParser::STRING_LITERAL - 68))
      | (1ULL << (WrenParser::TEXT_BLOCK - 68)))) != 0)) {
      setState(499);
      enumeration();
    }
    setState(502);
    match(WrenParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapInitContext ------------------------------------------------------------------

WrenParser::MapInitContext::MapInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::MapInitContext::LBRACE() {
  return getToken(WrenParser::LBRACE, 0);
}

tree::TerminalNode* WrenParser::MapInitContext::RBRACE() {
  return getToken(WrenParser::RBRACE, 0);
}

WrenParser::PairEnumerationContext* WrenParser::MapInitContext::pairEnumeration() {
  return getRuleContext<WrenParser::PairEnumerationContext>(0);
}


size_t WrenParser::MapInitContext::getRuleIndex() const {
  return WrenParser::RuleMapInit;
}

void WrenParser::MapInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapInit(this);
}

void WrenParser::MapInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapInit(this);
}

WrenParser::MapInitContext* WrenParser::mapInit() {
  MapInitContext *_localctx = _tracker.createInstance<MapInitContext>(_ctx, getState());
  enterRule(_localctx, 100, WrenParser::RuleMapInit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(WrenParser::LBRACE);
    setState(506);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::BREAK_T)
      | (1ULL << WrenParser::CONTINUE_T)
      | (1ULL << WrenParser::FALSE_T)
      | (1ULL << WrenParser::IMPORT_T)
      | (1ULL << WrenParser::NULL_T)
      | (1ULL << WrenParser::TRUE_T)
      | (1ULL << WrenParser::LPAREN)
      | (1ULL << WrenParser::LBRACE)
      | (1ULL << WrenParser::LBRACK)
      | (1ULL << WrenParser::BANG)
      | (1ULL << WrenParser::SUB))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (WrenParser::IDENTIFIER - 68))
      | (1ULL << (WrenParser::DECIMAL_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_LITERAL - 68))
      | (1ULL << (WrenParser::FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::HEX_FLOAT_LITERAL - 68))
      | (1ULL << (WrenParser::CHAR_LITERAL - 68))
      | (1ULL << (WrenParser::STRING_LITERAL - 68))
      | (1ULL << (WrenParser::TEXT_BLOCK - 68)))) != 0)) {
      setState(505);
      pairEnumeration();
    }
    setState(508);
    match(WrenParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElemContext ------------------------------------------------------------------

WrenParser::ElemContext::ElemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::CallContext* WrenParser::ElemContext::call() {
  return getRuleContext<WrenParser::CallContext>(0);
}

WrenParser::StringEContext* WrenParser::ElemContext::stringE() {
  return getRuleContext<WrenParser::StringEContext>(0);
}


size_t WrenParser::ElemContext::getRuleIndex() const {
  return WrenParser::RuleElem;
}

void WrenParser::ElemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElem(this);
}

void WrenParser::ElemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElem(this);
}

WrenParser::ElemContext* WrenParser::elem() {
  ElemContext *_localctx = _tracker.createInstance<ElemContext>(_ctx, getState());
  enterRule(_localctx, 102, WrenParser::RuleElem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(512);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(510);
        call();
        break;
      }

      case WrenParser::STRING_LITERAL:
      case WrenParser::TEXT_BLOCK: {
        enterOuterAlt(_localctx, 2);
        setState(511);
        stringE();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionElemContext ------------------------------------------------------------------

WrenParser::CollectionElemContext::CollectionElemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::ElemContext* WrenParser::CollectionElemContext::elem() {
  return getRuleContext<WrenParser::ElemContext>(0);
}

WrenParser::ListInitContext* WrenParser::CollectionElemContext::listInit() {
  return getRuleContext<WrenParser::ListInitContext>(0);
}


size_t WrenParser::CollectionElemContext::getRuleIndex() const {
  return WrenParser::RuleCollectionElem;
}

void WrenParser::CollectionElemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionElem(this);
}

void WrenParser::CollectionElemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionElem(this);
}

WrenParser::CollectionElemContext* WrenParser::collectionElem() {
  CollectionElemContext *_localctx = _tracker.createInstance<CollectionElemContext>(_ctx, getState());
  enterRule(_localctx, 104, WrenParser::RuleCollectionElem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    elem();
    setState(515);
    listInit();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeExpressionContext ------------------------------------------------------------------

WrenParser::RangeExpressionContext::RangeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::CallContext* WrenParser::RangeExpressionContext::call() {
  return getRuleContext<WrenParser::CallContext>(0);
}

WrenParser::NumEContext* WrenParser::RangeExpressionContext::numE() {
  return getRuleContext<WrenParser::NumEContext>(0);
}


size_t WrenParser::RangeExpressionContext::getRuleIndex() const {
  return WrenParser::RuleRangeExpression;
}

void WrenParser::RangeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeExpression(this);
}

void WrenParser::RangeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeExpression(this);
}

WrenParser::RangeExpressionContext* WrenParser::rangeExpression() {
  RangeExpressionContext *_localctx = _tracker.createInstance<RangeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 106, WrenParser::RuleRangeExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(519);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(517);
        call();
        break;
      }

      case WrenParser::DECIMAL_LITERAL:
      case WrenParser::HEX_LITERAL:
      case WrenParser::FLOAT_LITERAL:
      case WrenParser::HEX_FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(518);
        numE();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithMulContext ------------------------------------------------------------------

WrenParser::ArithMulContext::ArithMulContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::ExpressionContext* WrenParser::ArithMulContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}

tree::TerminalNode* WrenParser::ArithMulContext::MUL() {
  return getToken(WrenParser::MUL, 0);
}

tree::TerminalNode* WrenParser::ArithMulContext::DIV() {
  return getToken(WrenParser::DIV, 0);
}

tree::TerminalNode* WrenParser::ArithMulContext::MOD() {
  return getToken(WrenParser::MOD, 0);
}


size_t WrenParser::ArithMulContext::getRuleIndex() const {
  return WrenParser::RuleArithMul;
}

void WrenParser::ArithMulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithMul(this);
}

void WrenParser::ArithMulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithMul(this);
}

WrenParser::ArithMulContext* WrenParser::arithMul() {
  ArithMulContext *_localctx = _tracker.createInstance<ArithMulContext>(_ctx, getState());
  enterRule(_localctx, 108, WrenParser::RuleArithMul);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::MUL)
      | (1ULL << WrenParser::DIV)
      | (1ULL << WrenParser::MOD))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(522);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithAddContext ------------------------------------------------------------------

WrenParser::ArithAddContext::ArithAddContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ArithAddContext::SUB() {
  return getToken(WrenParser::SUB, 0);
}

tree::TerminalNode* WrenParser::ArithAddContext::ADD() {
  return getToken(WrenParser::ADD, 0);
}

WrenParser::ArithMulContext* WrenParser::ArithAddContext::arithMul() {
  return getRuleContext<WrenParser::ArithMulContext>(0);
}

WrenParser::ExpressionContext* WrenParser::ArithAddContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}


size_t WrenParser::ArithAddContext::getRuleIndex() const {
  return WrenParser::RuleArithAdd;
}

void WrenParser::ArithAddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithAdd(this);
}

void WrenParser::ArithAddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithAdd(this);
}

WrenParser::ArithAddContext* WrenParser::arithAdd() {
  ArithAddContext *_localctx = _tracker.createInstance<ArithAddContext>(_ctx, getState());
  enterRule(_localctx, 110, WrenParser::RuleArithAdd);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(524);
    _la = _input->LA(1);
    if (!(_la == WrenParser::ADD

    || _la == WrenParser::SUB)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(527);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::MUL:
      case WrenParser::DIV:
      case WrenParser::MOD: {
        setState(525);
        arithMul();
        break;
      }

      case WrenParser::BREAK_T:
      case WrenParser::CONTINUE_T:
      case WrenParser::FALSE_T:
      case WrenParser::IMPORT_T:
      case WrenParser::NULL_T:
      case WrenParser::TRUE_T:
      case WrenParser::LPAREN:
      case WrenParser::LBRACE:
      case WrenParser::LBRACK:
      case WrenParser::BANG:
      case WrenParser::SUB:
      case WrenParser::IDENTIFIER:
      case WrenParser::DECIMAL_LITERAL:
      case WrenParser::HEX_LITERAL:
      case WrenParser::FLOAT_LITERAL:
      case WrenParser::HEX_FLOAT_LITERAL:
      case WrenParser::CHAR_LITERAL:
      case WrenParser::STRING_LITERAL:
      case WrenParser::TEXT_BLOCK: {
        setState(526);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithRangeContext ------------------------------------------------------------------

WrenParser::ArithRangeContext::ArithRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ArithRangeContext::ELLIPSIS_IN() {
  return getToken(WrenParser::ELLIPSIS_IN, 0);
}

tree::TerminalNode* WrenParser::ArithRangeContext::ELLIPSIS_OUT() {
  return getToken(WrenParser::ELLIPSIS_OUT, 0);
}

WrenParser::ArithAddContext* WrenParser::ArithRangeContext::arithAdd() {
  return getRuleContext<WrenParser::ArithAddContext>(0);
}

WrenParser::ExpressionContext* WrenParser::ArithRangeContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}


size_t WrenParser::ArithRangeContext::getRuleIndex() const {
  return WrenParser::RuleArithRange;
}

void WrenParser::ArithRangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithRange(this);
}

void WrenParser::ArithRangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithRange(this);
}

WrenParser::ArithRangeContext* WrenParser::arithRange() {
  ArithRangeContext *_localctx = _tracker.createInstance<ArithRangeContext>(_ctx, getState());
  enterRule(_localctx, 112, WrenParser::RuleArithRange);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    _la = _input->LA(1);
    if (!(_la == WrenParser::ELLIPSIS_OUT

    || _la == WrenParser::ELLIPSIS_IN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(532);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(530);
      arithAdd();
      break;
    }

    case 2: {
      setState(531);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithShiftContext ------------------------------------------------------------------

WrenParser::ArithShiftContext::ArithShiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ArithShiftContext::LSHIFT() {
  return getToken(WrenParser::LSHIFT, 0);
}

tree::TerminalNode* WrenParser::ArithShiftContext::RSHIFT() {
  return getToken(WrenParser::RSHIFT, 0);
}

WrenParser::ArithRangeContext* WrenParser::ArithShiftContext::arithRange() {
  return getRuleContext<WrenParser::ArithRangeContext>(0);
}

WrenParser::ExpressionContext* WrenParser::ArithShiftContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}


size_t WrenParser::ArithShiftContext::getRuleIndex() const {
  return WrenParser::RuleArithShift;
}

void WrenParser::ArithShiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithShift(this);
}

void WrenParser::ArithShiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithShift(this);
}

WrenParser::ArithShiftContext* WrenParser::arithShift() {
  ArithShiftContext *_localctx = _tracker.createInstance<ArithShiftContext>(_ctx, getState());
  enterRule(_localctx, 114, WrenParser::RuleArithShift);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    _la = _input->LA(1);
    if (!(_la == WrenParser::LSHIFT

    || _la == WrenParser::RSHIFT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(537);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::ELLIPSIS_OUT:
      case WrenParser::ELLIPSIS_IN: {
        setState(535);
        arithRange();
        break;
      }

      case WrenParser::BREAK_T:
      case WrenParser::CONTINUE_T:
      case WrenParser::FALSE_T:
      case WrenParser::IMPORT_T:
      case WrenParser::NULL_T:
      case WrenParser::TRUE_T:
      case WrenParser::LPAREN:
      case WrenParser::LBRACE:
      case WrenParser::LBRACK:
      case WrenParser::BANG:
      case WrenParser::SUB:
      case WrenParser::IDENTIFIER:
      case WrenParser::DECIMAL_LITERAL:
      case WrenParser::HEX_LITERAL:
      case WrenParser::FLOAT_LITERAL:
      case WrenParser::HEX_FLOAT_LITERAL:
      case WrenParser::CHAR_LITERAL:
      case WrenParser::STRING_LITERAL:
      case WrenParser::TEXT_BLOCK: {
        setState(536);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithBitContext ------------------------------------------------------------------

WrenParser::ArithBitContext::ArithBitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ArithBitContext::BITAND() {
  return getToken(WrenParser::BITAND, 0);
}

tree::TerminalNode* WrenParser::ArithBitContext::BITOR() {
  return getToken(WrenParser::BITOR, 0);
}

tree::TerminalNode* WrenParser::ArithBitContext::CARET() {
  return getToken(WrenParser::CARET, 0);
}

WrenParser::ArithShiftContext* WrenParser::ArithBitContext::arithShift() {
  return getRuleContext<WrenParser::ArithShiftContext>(0);
}

WrenParser::ExpressionContext* WrenParser::ArithBitContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}


size_t WrenParser::ArithBitContext::getRuleIndex() const {
  return WrenParser::RuleArithBit;
}

void WrenParser::ArithBitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithBit(this);
}

void WrenParser::ArithBitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithBit(this);
}

WrenParser::ArithBitContext* WrenParser::arithBit() {
  ArithBitContext *_localctx = _tracker.createInstance<ArithBitContext>(_ctx, getState());
  enterRule(_localctx, 116, WrenParser::RuleArithBit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::BITAND)
      | (1ULL << WrenParser::BITOR)
      | (1ULL << WrenParser::CARET))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(542);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::LSHIFT:
      case WrenParser::RSHIFT: {
        setState(540);
        arithShift();
        break;
      }

      case WrenParser::BREAK_T:
      case WrenParser::CONTINUE_T:
      case WrenParser::FALSE_T:
      case WrenParser::IMPORT_T:
      case WrenParser::NULL_T:
      case WrenParser::TRUE_T:
      case WrenParser::LPAREN:
      case WrenParser::LBRACE:
      case WrenParser::LBRACK:
      case WrenParser::BANG:
      case WrenParser::SUB:
      case WrenParser::IDENTIFIER:
      case WrenParser::DECIMAL_LITERAL:
      case WrenParser::HEX_LITERAL:
      case WrenParser::FLOAT_LITERAL:
      case WrenParser::HEX_FLOAT_LITERAL:
      case WrenParser::CHAR_LITERAL:
      case WrenParser::STRING_LITERAL:
      case WrenParser::TEXT_BLOCK: {
        setState(541);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicOpContext ------------------------------------------------------------------

WrenParser::LogicOpContext::LogicOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::LogicOpContext::GT() {
  return getToken(WrenParser::GT, 0);
}

tree::TerminalNode* WrenParser::LogicOpContext::LT() {
  return getToken(WrenParser::LT, 0);
}

tree::TerminalNode* WrenParser::LogicOpContext::EQUAL() {
  return getToken(WrenParser::EQUAL, 0);
}

tree::TerminalNode* WrenParser::LogicOpContext::LE() {
  return getToken(WrenParser::LE, 0);
}

tree::TerminalNode* WrenParser::LogicOpContext::GE() {
  return getToken(WrenParser::GE, 0);
}

tree::TerminalNode* WrenParser::LogicOpContext::NOTEQUAL() {
  return getToken(WrenParser::NOTEQUAL, 0);
}


size_t WrenParser::LogicOpContext::getRuleIndex() const {
  return WrenParser::RuleLogicOp;
}

void WrenParser::LogicOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicOp(this);
}

void WrenParser::LogicOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicOp(this);
}

WrenParser::LogicOpContext* WrenParser::logicOp() {
  LogicOpContext *_localctx = _tracker.createInstance<LogicOpContext>(_ctx, getState());
  enterRule(_localctx, 118, WrenParser::RuleLogicOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << WrenParser::GT)
      | (1ULL << WrenParser::LT)
      | (1ULL << WrenParser::EQUAL)
      | (1ULL << WrenParser::LE)
      | (1ULL << WrenParser::GE)
      | (1ULL << WrenParser::NOTEQUAL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomLogicContext ------------------------------------------------------------------

WrenParser::AtomLogicContext::AtomLogicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

WrenParser::LogicOpContext* WrenParser::AtomLogicContext::logicOp() {
  return getRuleContext<WrenParser::LogicOpContext>(0);
}

WrenParser::ExpressionContext* WrenParser::AtomLogicContext::expression() {
  return getRuleContext<WrenParser::ExpressionContext>(0);
}

tree::TerminalNode* WrenParser::AtomLogicContext::AND() {
  return getToken(WrenParser::AND, 0);
}

tree::TerminalNode* WrenParser::AtomLogicContext::OR() {
  return getToken(WrenParser::OR, 0);
}


size_t WrenParser::AtomLogicContext::getRuleIndex() const {
  return WrenParser::RuleAtomLogic;
}

void WrenParser::AtomLogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomLogic(this);
}

void WrenParser::AtomLogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomLogic(this);
}

WrenParser::AtomLogicContext* WrenParser::atomLogic() {
  AtomLogicContext *_localctx = _tracker.createInstance<AtomLogicContext>(_ctx, getState());
  enterRule(_localctx, 120, WrenParser::RuleAtomLogic);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(551);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case WrenParser::GT:
      case WrenParser::LT:
      case WrenParser::EQUAL:
      case WrenParser::LE:
      case WrenParser::GE:
      case WrenParser::NOTEQUAL: {
        enterOuterAlt(_localctx, 1);
        setState(546);
        logicOp();
        setState(547);
        expression(0);
        break;
      }

      case WrenParser::AND:
      case WrenParser::OR: {
        enterOuterAlt(_localctx, 2);
        setState(549);
        _la = _input->LA(1);
        if (!(_la == WrenParser::AND

        || _la == WrenParser::OR)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(550);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndLogicContext ------------------------------------------------------------------

WrenParser::AndLogicContext::AndLogicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::AtomLogicContext *> WrenParser::AndLogicContext::atomLogic() {
  return getRuleContexts<WrenParser::AtomLogicContext>();
}

WrenParser::AtomLogicContext* WrenParser::AndLogicContext::atomLogic(size_t i) {
  return getRuleContext<WrenParser::AtomLogicContext>(i);
}

std::vector<tree::TerminalNode *> WrenParser::AndLogicContext::AND() {
  return getTokens(WrenParser::AND);
}

tree::TerminalNode* WrenParser::AndLogicContext::AND(size_t i) {
  return getToken(WrenParser::AND, i);
}

std::vector<WrenParser::ExpressionContext *> WrenParser::AndLogicContext::expression() {
  return getRuleContexts<WrenParser::ExpressionContext>();
}

WrenParser::ExpressionContext* WrenParser::AndLogicContext::expression(size_t i) {
  return getRuleContext<WrenParser::ExpressionContext>(i);
}


size_t WrenParser::AndLogicContext::getRuleIndex() const {
  return WrenParser::RuleAndLogic;
}

void WrenParser::AndLogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndLogic(this);
}

void WrenParser::AndLogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndLogic(this);
}

WrenParser::AndLogicContext* WrenParser::andLogic() {
  AndLogicContext *_localctx = _tracker.createInstance<AndLogicContext>(_ctx, getState());
  enterRule(_localctx, 122, WrenParser::RuleAndLogic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(553);
    atomLogic();
    setState(560);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(554);
        match(WrenParser::AND);
        setState(555);
        expression(0);
        setState(556);
        atomLogic(); 
      }
      setState(562);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicContext ------------------------------------------------------------------

WrenParser::LogicContext::LogicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<WrenParser::AndLogicContext *> WrenParser::LogicContext::andLogic() {
  return getRuleContexts<WrenParser::AndLogicContext>();
}

WrenParser::AndLogicContext* WrenParser::LogicContext::andLogic(size_t i) {
  return getRuleContext<WrenParser::AndLogicContext>(i);
}

std::vector<tree::TerminalNode *> WrenParser::LogicContext::OR() {
  return getTokens(WrenParser::OR);
}

tree::TerminalNode* WrenParser::LogicContext::OR(size_t i) {
  return getToken(WrenParser::OR, i);
}

std::vector<WrenParser::ExpressionContext *> WrenParser::LogicContext::expression() {
  return getRuleContexts<WrenParser::ExpressionContext>();
}

WrenParser::ExpressionContext* WrenParser::LogicContext::expression(size_t i) {
  return getRuleContext<WrenParser::ExpressionContext>(i);
}


size_t WrenParser::LogicContext::getRuleIndex() const {
  return WrenParser::RuleLogic;
}

void WrenParser::LogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic(this);
}

void WrenParser::LogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic(this);
}

WrenParser::LogicContext* WrenParser::logic() {
  LogicContext *_localctx = _tracker.createInstance<LogicContext>(_ctx, getState());
  enterRule(_localctx, 124, WrenParser::RuleLogic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(563);
    andLogic();
    setState(570);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(564);
        match(WrenParser::OR);
        setState(565);
        expression(0);
        setState(566);
        andLogic(); 
      }
      setState(572);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElvisContext ------------------------------------------------------------------

WrenParser::ElvisContext::ElvisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::ElvisContext::QUESTION() {
  return getToken(WrenParser::QUESTION, 0);
}

std::vector<WrenParser::ExpressionContext *> WrenParser::ElvisContext::expression() {
  return getRuleContexts<WrenParser::ExpressionContext>();
}

WrenParser::ExpressionContext* WrenParser::ElvisContext::expression(size_t i) {
  return getRuleContext<WrenParser::ExpressionContext>(i);
}

tree::TerminalNode* WrenParser::ElvisContext::COLON() {
  return getToken(WrenParser::COLON, 0);
}


size_t WrenParser::ElvisContext::getRuleIndex() const {
  return WrenParser::RuleElvis;
}

void WrenParser::ElvisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElvis(this);
}

void WrenParser::ElvisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElvis(this);
}

WrenParser::ElvisContext* WrenParser::elvis() {
  ElvisContext *_localctx = _tracker.createInstance<ElvisContext>(_ctx, getState());
  enterRule(_localctx, 126, WrenParser::RuleElvis);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(573);
    match(WrenParser::QUESTION);
    setState(574);
    expression(0);
    setState(575);
    match(WrenParser::COLON);
    setState(576);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdContext ------------------------------------------------------------------

WrenParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::IdContext::IDENTIFIER() {
  return getToken(WrenParser::IDENTIFIER, 0);
}


size_t WrenParser::IdContext::getRuleIndex() const {
  return WrenParser::RuleId;
}

void WrenParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}

void WrenParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}

WrenParser::IdContext* WrenParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 128, WrenParser::RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(WrenParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolEContext ------------------------------------------------------------------

WrenParser::BoolEContext::BoolEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::BoolEContext::TRUE_T() {
  return getToken(WrenParser::TRUE_T, 0);
}

tree::TerminalNode* WrenParser::BoolEContext::FALSE_T() {
  return getToken(WrenParser::FALSE_T, 0);
}


size_t WrenParser::BoolEContext::getRuleIndex() const {
  return WrenParser::RuleBoolE;
}

void WrenParser::BoolEContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolE(this);
}

void WrenParser::BoolEContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolE(this);
}

WrenParser::BoolEContext* WrenParser::boolE() {
  BoolEContext *_localctx = _tracker.createInstance<BoolEContext>(_ctx, getState());
  enterRule(_localctx, 130, WrenParser::RuleBoolE);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    _la = _input->LA(1);
    if (!(_la == WrenParser::FALSE_T

    || _la == WrenParser::TRUE_T)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharEContext ------------------------------------------------------------------

WrenParser::CharEContext::CharEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::CharEContext::CHAR_LITERAL() {
  return getToken(WrenParser::CHAR_LITERAL, 0);
}


size_t WrenParser::CharEContext::getRuleIndex() const {
  return WrenParser::RuleCharE;
}

void WrenParser::CharEContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharE(this);
}

void WrenParser::CharEContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharE(this);
}

WrenParser::CharEContext* WrenParser::charE() {
  CharEContext *_localctx = _tracker.createInstance<CharEContext>(_ctx, getState());
  enterRule(_localctx, 132, WrenParser::RuleCharE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(582);
    match(WrenParser::CHAR_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringEContext ------------------------------------------------------------------

WrenParser::StringEContext::StringEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::StringEContext::STRING_LITERAL() {
  return getToken(WrenParser::STRING_LITERAL, 0);
}

tree::TerminalNode* WrenParser::StringEContext::TEXT_BLOCK() {
  return getToken(WrenParser::TEXT_BLOCK, 0);
}


size_t WrenParser::StringEContext::getRuleIndex() const {
  return WrenParser::RuleStringE;
}

void WrenParser::StringEContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringE(this);
}

void WrenParser::StringEContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringE(this);
}

WrenParser::StringEContext* WrenParser::stringE() {
  StringEContext *_localctx = _tracker.createInstance<StringEContext>(_ctx, getState());
  enterRule(_localctx, 134, WrenParser::RuleStringE);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    _la = _input->LA(1);
    if (!(_la == WrenParser::STRING_LITERAL

    || _la == WrenParser::TEXT_BLOCK)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumEContext ------------------------------------------------------------------

WrenParser::NumEContext::NumEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::NumEContext::DECIMAL_LITERAL() {
  return getToken(WrenParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode* WrenParser::NumEContext::HEX_LITERAL() {
  return getToken(WrenParser::HEX_LITERAL, 0);
}

tree::TerminalNode* WrenParser::NumEContext::FLOAT_LITERAL() {
  return getToken(WrenParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* WrenParser::NumEContext::HEX_FLOAT_LITERAL() {
  return getToken(WrenParser::HEX_FLOAT_LITERAL, 0);
}


size_t WrenParser::NumEContext::getRuleIndex() const {
  return WrenParser::RuleNumE;
}

void WrenParser::NumEContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumE(this);
}

void WrenParser::NumEContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumE(this);
}

WrenParser::NumEContext* WrenParser::numE() {
  NumEContext *_localctx = _tracker.createInstance<NumEContext>(_ctx, getState());
  enterRule(_localctx, 136, WrenParser::RuleNumE);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    _la = _input->LA(1);
    if (!(((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (WrenParser::DECIMAL_LITERAL - 69))
      | (1ULL << (WrenParser::HEX_LITERAL - 69))
      | (1ULL << (WrenParser::FLOAT_LITERAL - 69))
      | (1ULL << (WrenParser::HEX_FLOAT_LITERAL - 69)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullEContext ------------------------------------------------------------------

WrenParser::NullEContext::NullEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::NullEContext::NULL_T() {
  return getToken(WrenParser::NULL_T, 0);
}


size_t WrenParser::NullEContext::getRuleIndex() const {
  return WrenParser::RuleNullE;
}

void WrenParser::NullEContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullE(this);
}

void WrenParser::NullEContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullE(this);
}

WrenParser::NullEContext* WrenParser::nullE() {
  NullEContext *_localctx = _tracker.createInstance<NullEContext>(_ctx, getState());
  enterRule(_localctx, 138, WrenParser::RuleNullE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    match(WrenParser::NULL_T);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool WrenParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 43: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool WrenParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void WrenParser::initialize() {
  std::call_once(wrenparserParserOnceFlag, wrenparserParserInitialize);
}
