add_library(subproblems 01-assert.c 01-simple_rc.c 02-branch.c 03-loops.c 10-nullpointer-dereference-simple.c)

target_include_directories(subproblems INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})