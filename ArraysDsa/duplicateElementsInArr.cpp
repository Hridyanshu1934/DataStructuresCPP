#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 4, 5};
    int freqArr[10] = {0};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        freqArr[arr[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (freqArr[i] > 1) {
            cout<<i <<" : " <<freqArr[i]<<endl;
        }
    }
}
