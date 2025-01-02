#include <iostream>
using namespace std;

void strToArr(const string& str, int hk[], int i) {
    if (i < str.size()) {
        hk[i] = int(str[i]);
        strToArr(str, hk, i + 1);
    }
}

bool plindromeChecker(int hk[], int start, int end) {
    if (start >= end) return true;
    return (hk[start] == hk[end]) && plindromeChecker(hk, start + 1, end - 1);
}

int main() {
    string str = "kanak";
    int i = 0;
    int hk[1000];
    while (str[i] != '\0') {
        i++;
    }
    strToArr(str, hk, 0);
    bool palindromeResult = plindromeChecker(hk, 0, str.length() - 1);
    
    if (palindromeResult) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }
    
    return 0;
}
