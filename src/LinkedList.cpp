#include "LinkedList.h"
#include <iostream>

using namespace std;

// Constructor
LinkedList::LinkedList() {
    head = nullptr;
}

// Destructor to free memory
LinkedList::~LinkedList() {
    Node *current = head;
    while (current != nullptr) {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

// Insert node at the head
void LinkedList::insertAtHead(int data) {
    Node *newNode = new Node(data);

    // Assign to head if list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Insert at the head
    newNode->next = head;
    head = newNode;
}

// Print the linked list
void LinkedList::print() {
    Node *temp = head;

    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

