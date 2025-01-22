#include <iostream>
#include <stack> // Using stack lib
using namespace std;

string reverseString(const string& str) {
    stack<char> s;

    for (char c : str) {
        s.push(c);
    }

    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    return reversed;
}