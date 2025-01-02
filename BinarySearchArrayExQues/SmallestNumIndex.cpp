// -> if mid element is greater than rightmost then smallest value is at right of mid
// -> else smallest value is in left of mid
#include <iostream>
using namespace std;

int smallestNum(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int mid = (right + left) / 2;
        if (arr[mid] > arr[right]) {
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
    
    int minIndex = smallestNum(arr, size);
    cout <<arr[minIndex]<< "  "<< minIndex;

    return 0;
}
