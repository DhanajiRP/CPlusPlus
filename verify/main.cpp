#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
    // Creating LinkedList object
    LinkedList list;

    // Inserting nodes
    list.insertAtHead(4);
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtHead(1);

    cout << "Elements of the list: ";
    list.print();

    return 0;
}

