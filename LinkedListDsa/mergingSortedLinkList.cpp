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

    void printLinkList() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
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
   void merge(LinkedList& linkList2) {
    Node* l1 = this->head;
    Node* l2 = linkList2.head;
    Node* ptr = new Node(0);
    Node* ptr2 = ptr;
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->data < l2->data) {
            ptr2->next = l1;
            l1 = l1->next;
        } else {
            ptr2->next = l2;
            l2 = l2->next;
        }
        ptr2 = ptr2->next;
    }
    if (l1 != nullptr) {
        ptr2->next = l1;
    } else {
        ptr2->next = l2;
    }
    this->head = ptr->next;
}
};