#include<iostream>
using namespace std;
int main(){
    string AreAnagrams1= "bat";
    string AreAnagrams2 = "tac";

    int counter = 0;

    for(int i = 0 ; i<AreAnagrams1.length();i++){

        for(int j = 0;j<AreAnagrams2.length();j++){

            if(AreAnagrams1[i] == AreAnagrams2[j]){
                
                cout<<"The letter - "<<AreAnagrams1[i]<<" is a the position of "<<j<<" in second Anagram"<<endl;
                counter++;
            }
            
        }
        
    }
    if(counter >= AreAnagrams1.length()){

        cout<<"This is an anagram";
    }

    else{
        cout<<"This is not an anagram";
    }
}