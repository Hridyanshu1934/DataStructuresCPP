#include <iostream>
#include <cmath>

using namespace std;

int NonZeroTriDiagonalMatrixElement(int n, int arr[5][5]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the element at index [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
            if (abs(i - j) <= 1) {
                return arr[i][j];
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[5][5];
    int arr2[2 * n - 1];

    for (int c = 0; c < n; c++) {
        arr2[c] = NonZeroTriDiagonalMatrixElement(n, arr);
        cout << arr2[c] << endl;
    }

    return 0;
}
