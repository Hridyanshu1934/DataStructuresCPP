// -> If mid element is less than its right neighbor the peak must be in the right half (including mid + 1)
// -> If mid element is greater than or equal to its right neighbor, the peak must be in the left half (including mid)

#include <iostream>
using namespace std;

int peakElement(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int mid = (right + left) / 2;
        if (arr[mid] < arr[mid+1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int main() {
    int arr[] = {4,5,6,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int minIndex = peakElement(arr, size);
    cout <<arr[minIndex];

    return 0;
}
