#include <iostream>
#include <stack>
using namespace std;

int countStackElements(stack<int>& s) {
    int count = 0;
    stack<int> temp;

    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
        count++;
    }

    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }

    return count;
}
