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
int linearSearchInLinkList(Node*head,int elementToBeFound){
    int a = elementToBeFound;
    int count = 0;
    Node*followingPointer;
    Node*currentPointer = head;

    while (currentPointer != NULL)
    {
        count++;
        if(currentPointer->dataInNode == a){ 
            return count;
            followingPointer->pointerToNextNode = currentPointer->pointerToNextNode;
            currentPointer->pointerToNextNode = head;
            head = currentPointer;
        }
        followingPointer = currentPointer;
        currentPointer = currentPointer->pointerToNextNode; 
              
    }
    
}
int binarySearchInLinkList(Node*head, int elementToBeFound){
    int a = elementToBeFound;
    int count = 0;
    Node*currentPoiner = head;
    
}
int main(){
    int elementToBeFound = 2;
    Node* head = new Node(1);
    head->pointerToNextNode = new Node(2);
    head->pointerToNextNode->pointerToNextNode = new Node (3);
    head->pointerToNextNode->pointerToNextNode->pointerToNextNode = new Node(4);
    cout<<"The element to be found is at "<<linearSearchInLinkList(head,elementToBeFound)<<" position";

}