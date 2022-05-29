add_executable( 
    ParserTest 
    Tests.cpp  
    ../AstElement.h
    ../WrenListener.h  
    ../WrenListener.cpp  
    ${ANTLR_WrenLexer_CXX_OUTPUTS}
    ${ANTLR_WrenParser_CXX_OUTPUTS}
    )

add_test(NAME ParserTest COMMAND ParserTest)
target_link_libraries(ParserTest antlr4_static)
    