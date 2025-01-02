#include <iostream>
using namespace std;

int arraySum(int arr[], int n) {
    if (n <= 0)
        return 0;
    return arr[n - 1] + arraySum(arr, n - 1);
}
int main() {
    int arr[] = {10,9,-3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of the array elements is " << arraySum(arr, n) << endl;
    return 0;
}
