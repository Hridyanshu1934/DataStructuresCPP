#include <iostream>
using namespace std;

struct Node {
    int dataInTheNode;
    struct Node* nextNodePointer;
};

int main() {
    struct Node* head;
    head = new Node;
    struct Node* second;
    second = new Node;
    struct Node* third;
    third = new Node;
    struct Node* fourth;
    fourth = new Node;

    head->dataInTheNode = 12;
    head->nextNodePointer = second;
    second->dataInTheNode = 20;
    second->nextNodePointer = third;
    third->dataInTheNode = 74;
    third->nextNodePointer = fourth;
    fourth->dataInTheNode = 42;
    fourth->nextNodePointer = nullptr;

    struct Node* traversalPointer = head;
    
    int sum = 0;      
    int count = 0;   

    while (traversalPointer != nullptr) {
        cout << traversalPointer->dataInTheNode << endl; 
        sum += traversalPointer->dataInTheNode;         
        count++;                                        
        traversalPointer = traversalPointer->nextNodePointer;
    }

    cout << "Sum of all numbers: " << sum << endl;     
    cout << "Count of numbers: " << count << endl;     

    return 0;
}
