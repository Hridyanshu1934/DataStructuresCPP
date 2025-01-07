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
    int target = 20;
    Node* ptr = head;
    int a = 0;
    while (ptr != nullptr) {
        if (ptr->data == target) {
            a++;
            cout<<"yes";
            break;
        }
        ptr = ptr->next;
    }
    if (a==0){
            cout<<"no";
        }
    return 0;
}