#include <iostream>
#include <stack>
using namespace std;

int hasCompleteBrackets(const string& expr) {
    stack<char> s;

    for (char c : expr) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) {
                return 0;
            }
            char top = s.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
                s.pop();
            } else {
                return 1;
            }
        }
    }

    return s.empty();
}