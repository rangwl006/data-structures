//
// Created by rangw on 12/5/2021.
//

#include "leaf.h"

template<typename T>
Leaf<T>::Leaf() {
    std::cout << "leaf generated" << std::endl;
    setParent(nullptr);
}

template<typename T>
Leaf<T>::~Leaf() {
    std::cout << "deleted leaf: " << _data << std::endl;

    // delete all of the current leaf
    for(auto& child: children)
    {
        delete child;
    }
}

template<typename T>
bool Leaf<T>::isRoot() {
    if(_parent == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template<typename T>
void Leaf<T>::setParent(Leaf* parent) {
    _parent = parent;
}

template<typename T>
void Leaf<T>::setChildren(Leaf* child) {
    children.push_back(child);
}

template<typename T>
void Leaf<T>::setData(T data) {
    _data = data;
}

template class Leaf<int>;