//
// Created by rangw on 12/5/2021.
//

#ifndef DATA_STRUCTURES_LEAF_H
#define DATA_STRUCTURES_LEAF_H

#include <iostream>
#include <vector>

template<typename T>
class Leaf {
public:
    Leaf();
    ~Leaf();

    bool isRoot();

    void setParent(Leaf& parent);
    void setChildren();

    Leaf* _parent;
    std::vector<Leaf*> children;

    T data;


};




#endif //DATA_STRUCTURES_LEAF_H
