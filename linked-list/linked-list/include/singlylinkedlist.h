//
// Created by rangw on 4/5/2021.
//

#ifndef LINKED_LIST_SINGLYLINKEDLIST_H
#define LINKED_LIST_SINGLYLINKEDLIST_H

#include "linkedlist.h"
#include "node.h"
#include <iostream>

template <typename T>
class SinglyLinkedList: public LinkedList<T> {

public:
    SinglyLinkedList(); // do not allow user to create linked list without initial data
    SinglyLinkedList(T data);
    SinglyLinkedList(SinglyLinkedList<T> &list);
    SinglyLinkedList operator=(SinglyLinkedList<T> &list) = delete;
    ~SinglyLinkedList();

    void append(T data) override;

    void append(Node<T> &node) override;

    void deleteAt(int index) override;

    void insertAfter(T data, int index) override;

    void insertBefore(T data, int index) override;

    Node<T> *getHead() override;

    Node<T> *getTail() override;

    void show() override;

private:
    Node<T>* head;
    Node<T>* tail;

    int nodeCount;
};

#endif //LINKED_LIST_SINGLYLINKEDLIST_H
