add_library(Trees
            src/tree.cpp
            src/leaf.cpp
            src/binaryleaf.cpp
            src/bst.cpp)

target_include_directories(Trees PUBLIC
        include)