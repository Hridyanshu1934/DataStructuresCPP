#include<iostream>
using namespace std;
int main(){
    string bleh = "aabaa";
    string vreh = "";
    for(int i = bleh.length()-1 ; i>0 ; i-- ){
        if(bleh[i] == bleh[i-1]){
            bleh[i] = '\0'; 
        }
        
    }
    for(int j = 0 ; j<bleh.length() ; j++){
        if(bleh[j] != '\0')
        cout<<bleh[j];
    }
}