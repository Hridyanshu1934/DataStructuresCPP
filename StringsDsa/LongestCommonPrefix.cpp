#include<iostream>
using namespace std;

int main(){

    string a = "radhe";
    string b = "radhekrishna";
    string comp = "          ";

    int lengthCompar = 0;

    if(a.length() >= b.length()){

        lengthCompar = a.length();

    }
    if(b.length() >= a.length()){

        lengthCompar = b.length();

    }
    for(int i = 0 ; i<lengthCompar/2 ; i++){

        if(a[i] == b[i]){

            comp[i] = a[i];
        }
    }
    cout<<comp;
}