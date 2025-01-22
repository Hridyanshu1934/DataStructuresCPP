#include <iostream>
using namespace std;

class Stack{
private:
    int* arr;
    int top;
    int capacity;
public:
    Stack(int size){
        capacity=size;
        arr=new int[capacity];
        top=-1;
    }
    void push(int value){
        if(top==capacity-1){
            cout<<"Stack Overflow\n";
            return;
        }
        arr[++top]=value;
        cout<<value<<" pushed to stack\n";
    }
    int pop(){
        if(top==-1){
            cout<<"Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
};