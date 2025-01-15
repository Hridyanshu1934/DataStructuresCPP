#include <iostream>
using namespace std;
// Here we use a slow and fast pointer and when they are same the link list has a cycle
class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
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
    void cycleCreater(LinkedList, int cycleToData){
         Node* ptr = nullptr;
        Node* current = head;

    while (current != nullptr) {
        if (cycleToData == 3) {
            ptr = current;
        }
        current = current->next;
    }
    head->next->next->next->next = ptr;
    }
    
    bool checkLinkListCycle(LinkedList){
        Node*slow = head;
        Node*fast = head;
        while(fast != nullptr&&fast->next!= nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                break;
                return 1;
            }
            else{
                return 0;
            }
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
};
