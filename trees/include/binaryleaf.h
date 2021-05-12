//
// Created by rangw on 12/5/2021.
//

#ifndef DATA_STRUCTURES_BINARYLEAF_H
#define DATA_STRUCTURES_BINARYLEAF_H

#include "leaf.h"

template<typename T>
class BinaryLeaf: public Leaf<T> {

public:
    BinaryLeaf();
    ~BinaryLeaf();

    BinaryLeaf* _left;
    BinaryLeaf* _right;
    T data;
};


#endif //DATA_STRUCTURES_BINARYLEAF_H
