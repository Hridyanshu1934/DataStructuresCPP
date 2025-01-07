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
    Node* ptr = head;
    int sum =0;
    while(ptr != nullptr){
        sum = sum + ptr->data;
    }
    return 0;
}
