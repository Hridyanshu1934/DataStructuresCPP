//-> Check if the number at mid index is equal to mid + 1
//-> If true, the missing number is in the right half  Move left pointer to mid + 1
//-> If false, the missing number is in the left half (including mid)  Move right pointer to mid - 1  return left+1
#include <iostream>
using namespace std;

int peakElement(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int mid = (right + left) / 2;
        if (arr[mid] <arr[mid+1]) {
            left = mid + 1;
        } else {
            right = mid-1;
        }
    }
    return left;
}

int main() {
    int arr[] = {1,2,3,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int minIndex = peakElement(arr, size);
    cout <<minIndex;

    return 0;
}
