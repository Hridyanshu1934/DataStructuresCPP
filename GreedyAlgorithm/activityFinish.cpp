#include <iostream>
using namespace std;

int ActivityCHooser(int arr1[], int arr2[]) {
    int n = 6;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr2[j] > arr2[j + 1]) {
                swap(arr2[j], arr2[j + 1]);
                swap(arr1[j], arr1[j + 1]);
            }
        }
    }
    int count = 1;
    int finishTime = arr2[0];
    for (int i = 1; i < n; i++) {
        if (arr1[i] >= finishTime) {
            count++;
            finishTime = arr2[i];
        }
    }    
    return count;
}