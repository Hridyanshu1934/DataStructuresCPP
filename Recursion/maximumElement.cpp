#include <iostream>
using namespace std;

int largestElement(int arr[], int size) {
    if (size == 1) return arr[0];
    int maximumElement = largestElement(arr, size - 1);
    if (arr[size - 1] > maximumElement) {
        return arr[size - 1];
    } else {
        return maximumElement;
    }
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << largestElement(arr, size) << endl;
    return 0;
}
