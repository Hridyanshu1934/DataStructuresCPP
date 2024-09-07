#include<iostream>
using namespace std;

int main(){
    string Parenthesis = "[] }";

    bool isParenthesis = 0;

    for(int i = 0 ; i<Parenthesis.length(); i++){

        if(Parenthesis[i] == '{' && Parenthesis[i+1] == '}'){
            isParenthesis = 1;
            break;
        }
        continue;

        if(Parenthesis[i] == '(' && Parenthesis[i+1] == ')'){
            isParenthesis = 1;
            break;
        }
        continue;

        if(Parenthesis[i] == '[' && Parenthesis[i+1] == ']'){
            isParenthesis = 1;
            break;
        }
        
        else{
            isParenthesis = 0;
        }
    }
    cout<<isParenthesis;
}