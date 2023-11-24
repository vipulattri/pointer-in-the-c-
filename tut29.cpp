#include <iostream>

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    // Creating nodes for a linked list
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Linking nodes to form a linked list
    head->next = second;
    second->next = third;

    // Traversing the linked list and displaying node data
    Node* current = head;
    std::cout << "Linked List Data: ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // Deallocating memory - cleanup
    delete head;
    delete second;
    delete third;

    return 0;
}
