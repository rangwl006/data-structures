//
// Created by rangw on 12/5/2021.
//

#ifndef DATA_STRUCTURES_BST_H
#define DATA_STRUCTURES_BST_H

#include "binaryleaf.h"
#include "tree.h"

template <typename T>
class Bst: public Tree<T>  {

public:
    Bst();
    ~Bst();

    void insert(T data) override;
    void show() override;
    bool isEmpty() override;

private:
    BinaryLeaf<T>* root; // root node
};


#endif //DATA_STRUCTURES_BST_H
