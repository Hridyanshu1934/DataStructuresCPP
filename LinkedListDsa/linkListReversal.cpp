#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *nextNode;

    Node(int data) {
        this->data = data;
        this->nextNode = NULL;
    }
};

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->nextNode;
    }
    cout << endl;
}

Node* reverseList(Node* head) {
    Node* previous = NULL;
    Node* current = head;
    Node* forward = NULL;

    while (current != NULL) {
        forward = current->nextNode;
        current->nextNode = previous;
        previous = current;
        current = forward;
    }
    return previous;
}

int main() {
    Node* head = new Node(1);
    // head->nextNode = new Node(2);
    // head->nextNode->nextNode = new Node(3);
    // head->nextNode->nextNode->nextNode = new Node(4);

    cout << "Original list: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed list: ";
    printList(head);

    
}
