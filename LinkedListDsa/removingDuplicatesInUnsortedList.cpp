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
        if (!head) {
            head = newNode;
            return;
        }

        Node* lastNode = head;
        while (lastNode->next) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }

    void printList() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void removeDuplicates() {
        if (head == nullptr) {
            return;
        }

        Node* current = head;
        while (current != nullptr) {
            Node* runner = current;
            while (runner->next != nullptr) {
                if (runner->next->data == current->data) {
                    Node* temp = runner->next;
                    runner->next = runner->next->next;
                    delete temp;
                } else {
                    runner = runner->next;
                }
            }
            current = current->next;
        }
    }
};