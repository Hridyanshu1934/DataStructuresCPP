#include<iostream>
using namespace std;

int main(){
    string Parenthesis = "titae ki taant";

    unsigned int count = 0;

    for(int i = 0 ; i<Parenthesis.length(); i++){

        if(Parenthesis[i] == '{' || Parenthesis[i] == '(' || Parenthesis[i] == '['){
            count++;
        }

        if(Parenthesis[i] == '}'|| Parenthesis[i] == ')' || Parenthesis[i] == ']'){
            count--;
        }
        
    }
    if(count == 0){
        cout<<"This is a valid parenthesis string";
    }
    else{
        cout<<"This is an invalid parenthesis string";
    }
}