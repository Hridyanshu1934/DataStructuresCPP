#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* pointerToNextNode;

    Node(int data){
        this->data = data;
        this->pointerToNextNode = NULL;
    }
};
    void linkListNodeDel(Node*head,int indexForRemoval){
        Node*currentNode = head;
        Node*prevNode = NULL;
        int count = 0;
        while(currentNode!=NULL){
            count++;
            if(count == indexForRemoval){
                prevNode->pointerToNextNode = currentNode->pointerToNextNode;
            }
            prevNode = currentNode;
            currentNode= currentNode->pointerToNextNode;
        }
    }
    void PrintLL(Node*head){
    Node*curentNode = head;
    cout<<"The given link list is :  | ";
    while (curentNode!=NULL)
    {
        cout<<curentNode->data<<" | ";
        curentNode = curentNode->pointerToNextNode;
    }
    
}


    int main(){
        Node* head = new Node(1);
        head->pointerToNextNode = new Node(2);
        head->pointerToNextNode->pointerToNextNode = new Node(3);
        head->pointerToNextNode->pointerToNextNode->pointerToNextNode = new Node(4);
        head->pointerToNextNode->pointerToNextNode->pointerToNextNode->pointerToNextNode = new Node(5);
        int a =2 ;
        linkListNodeDel(head,a);
        PrintLL(head);
    }
