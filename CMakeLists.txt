cmake_minimum_required(VERSION 3.5)
project(WrenLLCompiler VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

#### ANTLR
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake )
add_definitions(-DANTLR4CPP_STATIC)
# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})
# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${CMAKE_SOURCE_DIR}/thirdparty/antlr/antlr-4.10.1-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)
# Call macro to add lexer and grammar to your build dependencies.
antlr_target(WrenLexer ${CMAKE_SOURCE_DIR}/grammar/WrenLexer.g4 LEXER
        OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/src/generated)
antlr_target(
    WrenParser ${CMAKE_SOURCE_DIR}/grammar/WrenParser.g4 PARSER LISTENER
        DEPENDS_ANTLR WrenLexer
        COMPILE_FLAGS -lib ${ANTLR_WrenLexer_OUTPUT_DIR}
        OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/src/generated
)

# include generated files in project environment
include_directories(${ANTLR_WrenLexer_OUTPUT_DIR})
include_directories(${ANTLR_WrenParser_OUTPUT_DIR})

# include generated files in project environment
include_directories(${PROJECT_BINARY_DIR} ${ANTLR4_INCLUDE_DIR} ${ANTLR4_INCLUDE_DIR_wrenparser_lexer} ${ANTLR4_INCLUDE_DIR_wrenparser_parser})

#### LLVM
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
include_directories(${LLVM_INCLUDE_DIRS})
message(STATUS "Using LLVM_INCLUDE_DIRS: ${LLVM_INCLUDE_DIRS}")
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})
llvm_map_components_to_libnames(llvm_libs support core irreader)

enable_testing()
add_subdirectory(src/parser/tests)

add_executable( 
    wrenll 
    src/main.cpp
    src/parser/AstElement.h
    src/parser/WrenListener.h  
    src/parser/WrenListener.cpp  
    ${ANTLR_WrenLexer_CXX_OUTPUTS}
    ${ANTLR_WrenParser_CXX_OUTPUTS}
    )
    
target_link_libraries(wrenll antlr4_static ${llvm_libs})
    
