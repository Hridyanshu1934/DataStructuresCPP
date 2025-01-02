#include<iostream>
using namespace std;
class Node{
    public:
    int dataInNode;
    Node * pointerToNextNode;

    Node(int data){
        this->dataInNode = data;
        this->pointerToNextNode = NULL;
    }

};
void insertingSortNewNode(Node*head,int valueInNewNode){
    int count = 0;
    Node*newNode = new Node(valueInNewNode);
    Node *ptr;
    Node*curentNode = head;
    while (curentNode->pointerToNextNode != NULL && curentNode->pointerToNextNode->dataInNode < valueInNewNode) {
        curentNode = curentNode->pointerToNextNode;
    }

    newNode->pointerToNextNode = curentNode->pointerToNextNode;
    curentNode->pointerToNextNode = newNode;
}

void PrintLL(Node*head){
    Node*curentNode = head;
    cout<<"The given link list is :  | ";
    while (curentNode!=NULL)
    {
        cout<<curentNode->dataInNode<<" | ";
        curentNode = curentNode->pointerToNextNode;
    }
    
}

int main(){
    Node* head = new Node(1);
    head->pointerToNextNode = new Node(3);
    head->pointerToNextNode->pointerToNextNode = new Node (5);
    head->pointerToNextNode->pointerToNextNode->pointerToNextNode = new Node(10);
    insertingSortNewNode(head,4);
    PrintLL(head);
}