//
// Created by rangw on 12/5/2021.
//

#include "leaf.h"

template<typename T>
Leaf<T>::Leaf() {
    std::cout << "leaf generated" << std::endl;
    setParent();
}

template<typename T>
Leaf<T>::~Leaf() {

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
void Leaf<T>::setParent(Leaf& parent) {
    _parent = parent;
}

template<typename T>
void Leaf<T>::setChildren() {

}
