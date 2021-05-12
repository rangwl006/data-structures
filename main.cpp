//
// Created by rangw on 30/4/2021.
//
#include <iostream>
#include "node.h"

#define DEBUG
#undef DEBUG

#include "singlylinkedlist.h"
#include "node.h"

#include "tree.h"
#include "leaf.h"

int main()
{
//    auto singleLink = new SinglyLinkedList<char>('a');
//    singleLink->append('b');
//    singleLink->append('c');
//    singleLink->show();
//
//    singleLink->deleteAt(1);
//    singleLink->show();
//
//    auto d = new Node<char>();
//    d->data = 'd';
//    singleLink->append(*d);
//    singleLink->show();
//
//    singleLink->insertBefore('e', 5);
//    singleLink->show();
//    delete singleLink;

    auto L = new Leaf<int>();
    L->setData(1);
    std::cout << "is L root?: " << L->isRoot() << std::endl;

    auto L2 = new Leaf<int>();
    L2->setData(2);
    L2->setParent(L);
    L->setChildren(L2);

    auto L3 = new Leaf<int>();
    L3->setData(3);
    L3->setParent(L2);
    L2->setChildren(L3);

    delete L2;
    return 0;
}
