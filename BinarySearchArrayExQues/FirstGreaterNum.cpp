//-> If mid element is less than the target, search in the right half
//-> If mid element is greater than or equal to the target, search in the left half (including mid) return left at end

#include <iostream>
using namespace std;

int peakElement(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int mid = (right + left) / 2;
        if (arr[mid] <target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int main() {
    int arr[] = {1,2,3,5,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int minIndex = peakElement(arr, size,5);
    cout <<arr[minIndex]<<minIndex;

    return 0;
}
