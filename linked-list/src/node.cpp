//
// Created by rangw on 30/4/2021.
//

#include "node.h"

template<class T>
Node<T>::Node():
next(nullptr), prev(nullptr)
{
    std::cout << "Initialised new node at: " << this << std::endl;
}

template<class T>
Node<T>::~Node() {
    std::cout << "Node::~Node(): " << this << std::endl;
}

template class Node<char>;