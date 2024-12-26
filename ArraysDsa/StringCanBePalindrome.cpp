#include <iostream>
using namespace std;
int main(){
    string str1 = "knaak";
    int freqArr1[26]={0};
    int count = 0 ;

    for(int i = 0;i<str1.length();i++){
            freqArr1[str1[i]-'a']++;
    }
    for (int j = 0; j < 26; j++) {
        if (freqArr1[j] %2 != 0) {
           count++; 
        }
    }
     if (count<=1) {
        cout << "The string can be a palindrome." << endl;
    } else {
        cout << "The string cannot be a palindrome." << endl;
    }


}