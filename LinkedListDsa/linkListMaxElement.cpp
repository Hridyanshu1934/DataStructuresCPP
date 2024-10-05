#include<iostream>
using namespace std;
class Node{
    public:
    int dataInTheNode;
    Node* pointerToNextNode;

    Node(int data){
        this->dataInTheNode = data;
        this->pointerToNextNode = NULL;
    }

};
void PrintLL(Node*head){
    Node*curentNode = head;
    cout<<"The given link list is :  | ";
    while (curentNode!=NULL)
    {
        cout<<curentNode->dataInTheNode<<" | ";
        curentNode = curentNode->pointerToNextNode;
    }
    
}
int maxElement(Node*head){
    Node*currentNode = head;
    int max = 0;
    while(currentNode!=NULL){
        if(currentNode->dataInTheNode > max){
            max = currentNode->dataInTheNode;
        }
        currentNode = currentNode->pointerToNextNode;
    }
    return max;
}
int main(){
    Node* head = new Node(10);
    head->pointerToNextNode = new Node(20);
    head->pointerToNextNode->pointerToNextNode= NULL;
    PrintLL(head);
    cout<<endl<<"The maximum element in this link list is : "<<maxElement(head);
}