#include "mergingSortedLinkList.cpp"
#include <iostream>
using namespace std;
int main(){
    LinkedList ll1;
    ll1.addNewNode(1);
    ll1.addNewNode(3);
    ll1.addNewNode(5);
    ll1.printLinkList();
    LinkedList ll2;
    ll1.addNewNode(2);
    ll1.addNewNode(4);
    ll1.addNewNode(6);    
    ll2.printLinkList();
    ll1.merge(ll2);
    ll1.printLinkList();
}