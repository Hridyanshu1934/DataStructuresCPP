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
bool sort(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        if(temp->data > temp->next->data) {
            return false;
        }
        temp = temp->next;
    }
    return true;
    cout << endl;
}
void printing(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertion(head, 10);
    insertion(head, 40);
    insertion(head, 30);
    cout<<sort(head);
    printing(head);
}
