#include <iostream>
using namespace std;
struct Node{
    int dataInTheNode;
    struct Node * nextNodePointer;
};
int main(){
    struct Node * head;
    head = new Node;
    struct Node * second;
    second = new Node;
    struct Node * third;
    third = new Node;
    struct Node * fourth;
    fourth = new Node;
    head -> dataInTheNode = 10;
    head -> nextNodePointer = second;
    second -> dataInTheNode = 20;
    second -> nextNodePointer = third;
    third -> dataInTheNode = 30;
    third -> nextNodePointer = fourth;
    fourth -> dataInTheNode = 40;
    fourth -> nextNodePointer = nullptr;
    struct Node * traversalPointer;
    traversalPointer = head;

    while(traversalPointer != nullptr){
        cout<<traversalPointer -> dataInTheNode<<endl;
        traversalPointer = traversalPointer -> nextNodePointer;
    }

    return 0;
}