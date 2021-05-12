add_library(Trees
            src/tree.cpp src/leaf.cpp include/leaf.h)

target_include_directories(Trees PUBLIC
        include)