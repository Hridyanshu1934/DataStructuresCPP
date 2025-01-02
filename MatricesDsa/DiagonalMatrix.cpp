#include <iostream>
using namespace std;

int main() {
    int arr[5][5];
    int arr2[5] = {0}; 


    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "Enter the element for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }


    for (int k = 0; k < 5; ++k) {
        arr2[k] = arr[k][k];
    }


    cout << "Diagonal elements of arr2:" << endl;
    for (int k = 0; k < 5; ++k) {
        cout << arr2[k] << " ";
    }
    cout << endl;

    return 0;
}
