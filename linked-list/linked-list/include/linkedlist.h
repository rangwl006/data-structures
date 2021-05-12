//
// Created by rangw on 30/4/2021.
//

#ifndef LINKED_LIST_LINKEDLIST_H
#define LINKED_LIST_LINKEDLIST_H

#include "node.h"

template <typename T>
class LinkedList {
public:
    LinkedList() = default;

    // add node to head
    virtual void append(T data) = 0;
    virtual void append(Node<T> &node) = 0;

    // delete node
    virtual void deleteAt(int index) = 0;

    // insert nodes
    virtual void insertAfter(T data, int index) = 0;
    virtual void insertBefore(T data, int index) = 0;

    virtual Node<T>* getHead() = 0;
    virtual Node<T>* getTail() = 0;

    bool isHead();
    bool isTail();

    virtual void show() = 0;

private:
    int nodeCount;

    // keep track of head and tail node
    Node<T>* head;
    Node<T>* tail;
};


#endif //LINKED_LIST_LINKEDLIST_H
