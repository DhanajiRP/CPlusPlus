#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

class LinkedList {
private:
    Node *head;

public:
    // Constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Insert node at the head
    void insertAtHead(int data);

    // Print the linked list
    void print();
};

#endif // LINKEDLIST_H

