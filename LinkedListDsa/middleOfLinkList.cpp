#include <iostream>
using namespace std;
// This is using 2 pointers rather than the bruteforcce approach
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
    int findMiddle() {
    Node* slow = head;  
    Node* fast = head; 

    while (fast!=nullptr && fast->next != nullptr) {
        slow = slow->next;          
        fast = fast->next->next;
    }

    return slow->data;
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
};
