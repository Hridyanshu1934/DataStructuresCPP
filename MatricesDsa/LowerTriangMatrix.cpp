#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n][n];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    bool UpperTriangularMatrix = true;
    bool LowerTriangularMatrix = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && arr[i][j] != 0) {
                LowerTriangularMatrix = false;
            }
            if (i > j && arr[i][j] != 0) {
                UpperTriangularMatrix = false;
            }
        }
    }
    if (UpperTriangularMatrix) {
        cout << "The matrix is an upper triangular matrix." << endl;
    } else if (LowerTriangularMatrix) {
        cout << "The matrix is a lower triangular matrix." << endl;
    } else {
        cout << "The matrix is neither upper nor lower triangular." << endl;
    }

    return 0;
}
