#include <iostream>
using namespace std;

class Stack {
    struct Node {
        int data;
        Node* next;
    };
    Node* topNode;

public:
    Stack() {
        topNode = nullptr;
    }

    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = topNode;
        topNode = newNode;
    }
    void pop() {
        if (topNode == nullptr) {
            cout << "Stack is empty!" << endl;
        } else {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    int top() {
        if (topNode == nullptr) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return topNode->data;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }
};


