#include <iostream>
using namespace std;
int main(){
    string str1 = "hridyanshu";
    int freqArr1[26]={0};
    string newStr = "";

    for(int i = 0;i<str1.length();i++){
            freqArr1[str1[i]-'a']++;
    }
    for (int j = 0; j < 26; j++) {
        for (int k = 0; k < freqArr1[j]; k++) {
            newStr = newStr + char(j + 'a');
        }
    }
    cout<<newStr;
}