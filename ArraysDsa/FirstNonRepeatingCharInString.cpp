#include <iostream>
using namespace std;
int main(){
    string str1 = "hridyanshu";
    int freqArr1[26]={0}; 

    for(int i = 0;i<str1.length();i++){
            freqArr1[str1[i]-'a']++;
    }
    
    for (int j = 0; j < 26; j++) {
        if (freqArr1[str1[j]-'a'] == 1) {
           cout<<str1[j];
           break;
        }
    }

}