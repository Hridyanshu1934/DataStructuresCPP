#include <iostream>
using namespace std;
void stringCharFrequency(string str,char ch){
    int freqArr[26] = {0};
    int count=0;
    for(int i = 0 ;i<str.length();i++){
            freqArr[str[i]-'a']=freqArr[str[i]-'a']+1;
    }
    if (freqArr[ch - 'a'] > 0) {
    cout << ch << " is " << freqArr[ch - 'a'] <<" times in the given string"<< endl;
    }
    else{
        cout<< ch <<"is not present in the given string "<<endl;
    }
}
int main(){
    string str = "aabbcdddc";
    char ch = 'a';
    stringCharFrequency(str,ch);
}