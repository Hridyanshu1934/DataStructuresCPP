#include "multiiplyLinkList.cpp"
#include <iostream>
using namespace std;

int main() {
    LinkedList ll1;
    ll1.addNewNode(2);
    ll1.addNewNode(0);
    LinkedList ll2;
    ll2.addNewNode(2);
    ll2.addNewNode(0);
    cout << ll1.multiplyLinkLists(ll1, ll2) << endl;
    return 0;
}