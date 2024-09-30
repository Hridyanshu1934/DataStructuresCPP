#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 11;
    int start = 0;
    int end = n - 1;
    bool add =  false;


    while  (start < end) {
        int mid =  (start + end) / 2;
        int sum = arr[mid] + arr[n - mid - 1];

        if (sum == target) {
            cout << "Found two elements: " << arr[mid] << " and " << arr[n - mid - 1] << endl;
            add = true;
            break;
        } else if (sum < target) {
         start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    add = false;
    if (add == true) {
        cout << "Two elements found whose sum equals the target." << endl;
    } 
    else if(add == false) {
        cout << "No two elements found whose sum equals the target." << endl;
    }

    return 0;
}