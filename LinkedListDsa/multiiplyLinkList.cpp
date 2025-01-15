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

    LinkedList() {
        head = nullptr;
    }

    void addNewNode(int data) {
        Node* newNode = new Node(data);
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

    int multiplyLinkLists(LinkedList LinkedList1, LinkedList LinkedList2) {
        int ll1Sum = 0;
        int ll2Sum = 0;

        Node* current1 = LinkedList1.head;
        Node* current2 = LinkedList2.head;

        while (current1 != nullptr) {
            ll1Sum = ll1Sum * 10 + current1->data;
            current1 = current1->next;
        }

        while (current2 != nullptr) {
            ll2Sum = ll2Sum * 10 + current2->data;
            current2 = current2->next;
        }

        return ll1Sum * ll2Sum;
    }
};