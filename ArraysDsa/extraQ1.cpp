#include <iostream>
using namespace std;
int majorityElement(int arr[], int size) {
    int maxElement = 0;
    int count = 0;
    for (int i = 0; i < size; i++) {
    
         maxElement = arr[i];
            count = 1;
        if (arr[i] == maxElement) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == maxElement) {
            count++;
        }
    }

    return (count > size / 2) ? maxElement : -1; 
}

int main() {
    int arr[] = {2, 3, 1, 1, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = majorityElement(arr, size);
    
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "There is no majority element." << endl;
    }

    return 0;
}
