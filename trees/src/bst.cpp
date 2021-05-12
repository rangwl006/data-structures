//
// Created by rangw on 12/5/2021.
//

#include "bst.h"


template<typename T>
Bst<T>::Bst():Tree<T>(), root(new BinaryLeaf<T>()) {
    root = nullptr;
}

template<typename T>
Bst<T>::~Bst() {

}

template<typename T>
void Bst<T>::insert(T data) {

}

template<typename T>
void Bst<T>::show() {

}

template<typename T>
bool Bst<T>::isEmpty() {
    if(root == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
