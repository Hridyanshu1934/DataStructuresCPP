#include<iostream>
using namespace std;

int main(){
    string sentence = "hello world";
    int i = 0;
    for (i ; i<sentence.length() ; i++){
        if(sentence[i] == 'a' || sentence[i] == 'b' || sentence[i] == 'c'){
            sentence[i] = '2';
        }
        else if(sentence[i] == 'd' || sentence[i] == 'e' || sentence[i] == 'f'){
            sentence[i] = '3';
        }
        else if(sentence[i] == 'g' || sentence[i] == 'h' || sentence[i] == 'i'){
            sentence[i] = '4';
        }
        else if(sentence[i] == 'j' || sentence[i] == 'k' || sentence[i] == 'l'){
            sentence[i] = '5';
        }
        else if(sentence[i] == 'm' || sentence[i] == 'n' || sentence[i] == 'o'){
            sentence[i] = '6';
        }
        else if(sentence[i] == 'p' || sentence[i] == 'q' || sentence[i] == 'r' || sentence[i] == 's'){
            sentence[i] = '7';
        }
        else if(sentence[i] == 't' || sentence[i] == 'u' || sentence[i] == 'v'){
            sentence[i] = '8';
        }
        else if(sentence[i] == 'w' || sentence[i] == 'x' || sentence[i] == 'y'|| sentence[i] == 'z'){
            sentence[i] = '9';
        }
    }
    cout<<sentence;
    
}