#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};


class LinkedList {
public:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    ~LinkedList() {
        Node* current = head;
        Node* nextNode;

        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void addNewNode(int data) {
         Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } 
        else {
            Node* lastNode = head;
            while (lastNode->next != head) {
                lastNode = lastNode->next;
            }

            lastNode->next = newNode;
            newNode->next = head; 
        }
    }

    void printLinkList() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head;
        do {
            cout << current->data << " -> ";
            current = current->next;
        } 
        while (current != head);
        cout << head->data<< endl;
    }

    void deleteNode(int key) {
        Node* current = head;
        Node* prev = nullptr;

        if (current != nullptr && current->data == key) {
            head = current->next;
            delete current;
            return;
        }

        while (current != nullptr && current->data != key) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Node with value " << key << " not found." << endl;
            return;
        }

        prev->next = current->next;
        delete current;
    }
};
