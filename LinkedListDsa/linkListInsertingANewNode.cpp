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
void insertingNewNode(Node*head,int valueInNewNode,int positionOfNewNode){
    int count = 0;
    for(Node*currentNode = head;currentNode!=NULL;currentNode= currentNode->pointerToNextNode){
        count++;
        Node*ptr;
        Node*newNode = new Node(valueInNewNode);
        if(count == positionOfNewNode-1){
            newNode->pointerToNextNode = currentNode->pointerToNextNode;
            currentNode->pointerToNextNode = newNode;  
        }
    }
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
    int positionToInsertNewNode = 2;
    Node* head = new Node(1);
    head->pointerToNextNode = new Node(2);
    head->pointerToNextNode->pointerToNextNode = new Node (3);
    head->pointerToNextNode->pointerToNextNode->pointerToNextNode = new Node(4);
    insertingNewNode(head,6,3);
    PrintLL(head);
}