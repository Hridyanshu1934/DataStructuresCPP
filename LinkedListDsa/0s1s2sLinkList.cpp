#include <iostream>
using namespace std;
/**If mid = 0 swap with low and low->next and mid->next
If mid = 1 mid->next
If mid = 2 swap with high and high->next**/

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

    void sortList() {
        if (head == nullptr) return;

        Node* low = head;
        Node* mid = head;
        Node* high = nullptr;
        while (high != nullptr) {
            high = high->next;
        }

        while (mid != nullptr) {
            if (mid->data == 0) {
                swap(low->data, mid->data);
                low = low->next;
                mid = mid->next;
            } else if (mid->data == 1) {
                mid = mid->next;
            } else {
                swap(mid->data, high->data);
                high = high->next;
            }
        }
    }
};

