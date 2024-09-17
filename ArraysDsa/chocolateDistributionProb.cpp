#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    int n = 7;

    int t;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
        cout<<arr[m-1] - arr[0];
    
    

    return 0;
}
