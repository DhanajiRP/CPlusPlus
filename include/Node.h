#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;
    Node *next;

    // Default constructor
    Node();

    // Parameterized constructor
    Node(int data);
};

#endif // NODE_H

