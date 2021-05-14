//
// Created by rangw on 12/5/2021.
//

#include "bst.h"


template<typename T>
Bst<T>::Bst():Tree<T>(), root(nullptr) {
}

template<typename T>
Bst<T>::~Bst() {

}

template<typename T>
void Bst<T>::insert(T data) {

    auto temp = new BinaryLeaf<T>();
    auto current = new BinaryLeaf<T>();
    auto parent = new BinaryLeaf<T>();

    temp->data = data;
    temp->_left = nullptr;
    temp->_right = nullptr;

    // if root is null, create new root node
    if(root == nullptr)
    {
        root = parent;
        root->data = data;
        return;
    }

    // else, insert new data
    else
    {
        current = root; // start
        parent  = nullptr;

        while(true)
        {
            parent = current;
            // go to the left branch if data is more than parent's data
            if(data > parent->data)
            {
                current = current->_left;

                if(current == nullptr) {
                    parent->_left = temp;
                    return;
                }
            }
            else
            {
                current = current->_right;
                if(current == nullptr) {
                    parent->_right = temp;
                    return;
                }

            }
                break;
        }
    }
    /*
     If root is NULL
        then create root node
     return

     If root exists then
        compare the data with node.data

     while until insertion position is located
        If data is greater than node.data
            goto right subtree
        else
            goto left subtree

   endwhile

   insert data

end If

     */
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
