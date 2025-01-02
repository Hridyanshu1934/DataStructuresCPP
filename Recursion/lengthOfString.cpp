#include<iostream>
using namespace std;
int stringLength(string str,int i){

    if(str[i] == '\0'){
        return i;
    }
    return stringLength(str,i+1);
}
int main(){
    string str = "Hello Moto";
    int i = 0;
    cout<<stringLength(str,i);
}