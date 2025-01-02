#include <iostream>
using namespace std;
int main(){
    string str1;
    cin>>str1;
    string str2 = "naakk";
    int freqArr1[26]={0}; 
    int freqArr2[26] = {0};
    int count = 0 ;

    for(int i = 0;i<str1.length();i++){
            freqArr1[str1[i]-'a']++;
    }
    for(int k = 0;k<str2.length();k++){
            freqArr2[str1[k]-'a']++;
    }
    for (int j = 0; j < 26; j++) {
        if (freqArr1[j] == freqArr2[j]) {
           count++; 
        }
    }
    if(count==26){
        cout<<"These strings are palindromes";
    }

}