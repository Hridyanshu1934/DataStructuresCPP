#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void insertion(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void removingDuplicate(Node* head) {
    Node* temp = head;
    while (temp != nullptr && temp->next != nullptr) {
        if (temp->data == temp->next->data) {
            temp->next = temp->next->next;
        } else {
            temp = temp->next;
        }
    }
}

void printing(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertion(head, 10);
    insertion(head, 20);
    insertion(head, 20);
    insertion(head, 30);
    insertion(head, 40);
    insertion(head, 40);
    printing(head);

    removingDuplicate(head);
    printing(head);
    
}
