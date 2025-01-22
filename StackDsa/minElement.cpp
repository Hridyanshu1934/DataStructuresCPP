#include <iostream>
#include <stack>
using namespace std;

int findMin(stack<int> s) {
    int minElement = s.top();
    s.pop();

    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (current < minElement) {
            minElement = current;
        }
    }

    return minElement;
}