//
//
//

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

#include <iostream>
#include <memory>
#include <string>

template <class T>
struct Node {
    Node();
    ~Node();

    Node* next;
    Node* prev;
    T data;
    int nodeNumber;
    std::string name;

};


#endif //LINKED_LIST_NODE_H
