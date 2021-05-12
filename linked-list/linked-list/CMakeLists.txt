add_library(LinkedList
        src/node.cpp
        src/linkedlist.cpp
        src/singlylinkedlist.cpp)

target_include_directories(LinkedList PUBLIC
        include)