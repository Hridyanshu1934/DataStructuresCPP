#include <iostream>
using namespace std;

int main() {
    int n = 97;
    if (n < 4) {
        return 0;
    }    
    int count = 0;
    while (n > 0) {
        if (n % 4 == 0) {
            count += n / 4;
            break;
        } 
        else if (n % 4 == 1) {
            if (n >= 9) {
                count = count + (n - 9) / 4 + 1;
                break;
            } 
        } 
        else if (n % 4 == 2) {
            if (n >= 6) {
                count = count + (n - 6) / 4 + 1;
                break;
            } 
        } 
        else if (n % 4 == 3) {
            if (n >= 15) {
                count = count + (n - 15) / 4 + 2;
                break;
            }
        }
    }
    cout<< count;
}