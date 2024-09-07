#include <iostream>
using namespace std;
int main(){
    string palindromeOrNot = "nitin";
    for (int i = 0; i < palindromeOrNot.length() / 2; i++) {
 
        if (palindromeOrNot[i] != palindromeOrNot[palindromeOrNot.length() - i - 1]) {

            cout<<"Not a palindrome";
        }
    
       else{ 
          cout<<"Is an palindrome";
        }

    }
}
  
 