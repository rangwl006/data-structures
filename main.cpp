//
// Created by rangw on 30/4/2021.
//
#include <iostream>
#include "node.h"

#define DEBUG
#undef DEBUG

#include "singlylinkedlist.h"
#include "node.h"

int main()
{
    auto singleLink = new SinglyLinkedList<char>('a');
    singleLink->append('b');
    singleLink->append('c');
    singleLink->show();

    singleLink->deleteAt(1);
    singleLink->show();

    auto d = new Node<char>();
    d->data = 'd';
    singleLink->append(*d);
    singleLink->show();

    singleLink->insertBefore('e', 5);
    singleLink->show();
    delete singleLink;

    return 0;
}
