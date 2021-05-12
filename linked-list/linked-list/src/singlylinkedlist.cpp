#include "singlylinkedlist.h"

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(T data):LinkedList<T>(), head(new Node<T>()), nodeCount(0) {
    std::cout << "Initialised singly linked list with data" << std::endl;
    head->data = data;
    head->nodeNumber = nodeCount;
    head->next = nullptr;
    tail = head;

    std::cout << "head: " << head
              << " tail: " << tail
              << " node count: " << nodeCount
              << std::endl;

}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList() {
    auto current = head;
    auto next = current->next;
    do {
        next = current->next;
        delete current;
        current = next;
    }while(next != nullptr);
}


template<typename T>
void SinglyLinkedList<T>::append(T data) {

    nodeCount += 1;
    auto _newNode = new Node<T>();
    _newNode->data = data;
    _newNode->nodeNumber = nodeCount;
    _newNode->next = nullptr;

    // 1. find the last node
    auto current = head;
    while(current->next != nullptr)
    {
        current = current->next;
    }

    // 2. attach the new node to the list
    current->next = _newNode;
    tail = _newNode;
}

template<typename T>
void SinglyLinkedList<T>::append(Node<T> &node) {
    nodeCount += 1;
    node.nodeNumber = nodeCount;

    // 1. find the last node
    auto current = head;
    while(current->next != nullptr)
    {
        current = current->next;
    }

    // 2. attach the new node to the list
    current->next = &node;
    tail = &node;
}

template<typename T>
void SinglyLinkedList<T>::deleteAt(int index) {
    std::cout << "########### deleteAt start ###########" << std::endl;

    // 1. look for the node to delete
    auto current = head;
    if(index != 0)
    {
        while(current->nodeNumber != (index -1))
        {
            current = current->next;
        }
    }

    std::cout << "node to delete: " << current->next->nodeNumber
              << " node addr: " << current->next
              << " node data: " << current->next->data
              << std::endl;

    auto _prev = current;
    auto _next = current->next->next;

    // 2. delete the target node
    auto _target = current->next;
    delete _target;

    // 3. connect the node at (index -1) to node at (index +1)
    std::cout << "left node: " << _prev << " data: " << _prev->data << std::endl;
    _prev->next = _next;
    std::cout << "right node: " << _next << " data: " << _next->data << std::endl;

    // 4. renumber the nodes
    current = _prev->next;

    while(current != nullptr)
    {
        std::cout << "current node: " << current << " data: " << current->data;
        current->nodeNumber -= 1;
        std::cout << " node number: " << current->nodeNumber << std::endl;
        current = current->next;

    }

    // 5. decrement node count
    nodeCount -= 1;

    std::cout << "########### deleteAt end ###########" << std::endl;

}

template<typename T>
void SinglyLinkedList<T>::insertAfter(T data, int index) {

    // 0. prepare the new node with data and node count
    auto newNode = new Node<T>;
    newNode->nodeNumber = index;
    newNode->data = data;

    // 1. find the node to insert after
    auto current = head;
    while(current->nodeNumber != index)
    {
        current = current->next;
    }

    // 2. link the new node to the right half of the list
    newNode->next = current->next;

    // 3. link the left half of the list to the new node
    current->next = newNode;

    // 4. adjust the nodes' indexes
    do {
        current->next->nodeNumber += 1;
        current = current->next;
    }while(current != tail);

    // 5. increment the node count
    nodeCount += 1;

}

template<typename T>
void SinglyLinkedList<T>::insertBefore(T data, int index) {
    // 0. prepare the new node with data and node count
    auto newNode = new Node<T>;
    newNode->nodeNumber = index;
    newNode->data = data;

    // 1. find the node to insert before
    auto current = head;
    if(index != 0 && index < nodeCount)
    {
        while(current->nodeNumber != (index -1) )
        {
            current = current->next;
        }

        // 2. link the new node to the right half of the list
        newNode->next = current->next;

        // 3. link the left half of the list to the new node
        current->next = newNode;

        // 4. adjust the nodes' indexes
        do {
            current->next->nodeNumber += 1;
            current = current->next;
        }while(current != tail);
    }
    else if(index == 0) // if node is inserted at the start
    {
        newNode->next = head;
        head = newNode;
    }
    else if(index >= nodeCount | index < 0)
    {
        std::cout << "Invalid index" << std::endl;
    }

    // 5. increment the node count
    nodeCount += 1;


}

template<typename T>
Node<T> *SinglyLinkedList<T>::getHead() {
    return head;
}

template<typename T>
Node<T> *SinglyLinkedList<T>::getTail() {
    return tail;
}

template<typename T>
void SinglyLinkedList<T>::show() {
    auto current = head;
    while(current != nullptr)
    {
        std::cout << "node: " << current->nodeNumber
                  << " adr: " << current
                  << " data: " << current->data
                  << std::endl;

        current = current->next;
    }
}

template class SinglyLinkedList<char>;