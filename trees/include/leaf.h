/*
 * Leaves are nodes on a tree.
 * The leaf class can form a generic tree structure on it's own, just for the sake of learning tho.
 * The tree structure is similar to what Qt uses when inheriting classes:
 * for example, a QPushButton whose parent is set to a certain QWidget gets destroyed when
 * the QWidget gets destroyed. (i.e. children get destroyed when their parents get rekt)
 */

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

    void setParent(Leaf* parent);
    void setChildren(Leaf* child);
    void setData(T data);

    Leaf* _parent;
    std::vector<Leaf*> children;

    T _data;
};




#endif //DATA_STRUCTURES_LEAF_H
