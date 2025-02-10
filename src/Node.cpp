#include "Node.h"

// Default constructor
Node::Node() {
    data = 0;
    next = nullptr;
}

// Parameterized constructor
Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

