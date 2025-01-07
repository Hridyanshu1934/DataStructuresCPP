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

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    head->next = second;
    second->next = third;
    int newNodeData = 60;
    int newNodePositionAfter = 20;
    Node* ptr = head;
    int a = 0;
    while (ptr != nullptr) {
        if(ptr->data==newNodePositionAfter){
            Node* newNode = new Node(newNodeData);
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
        cout<<ptr->data;
        ptr = ptr->next;
    }

}