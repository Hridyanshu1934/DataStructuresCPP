#include <iostream>
#include <string>
using namespace std;

class StringStack {
private:
    string* arr;
    int top;
    int capacity;

public:
    StringStack(int size) {
        arr = new string[size];
        capacity = size;
        top = -1;
    }

    ~StringStack() {
        delete[] arr;
    }

    void push(string x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    string pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return "";
        }
        return arr[top--];
    }

    string peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return "";
        }
        return arr[top];
    }

    void printStack() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

