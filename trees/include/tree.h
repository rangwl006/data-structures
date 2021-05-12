//
// Created by rangw on 12/5/2021.
//

#ifndef LINKED_LIST_TREE_H
#define LINKED_LIST_TREE_H

#include "leaf.h"

template <typename T>
class Tree {

public:
    virtual void insert(T data) = 0;
    virtual void show() = 0;
    virtual bool isEmpty() = 0;

};


#endif //LINKED_LIST_TREE_H
