#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 7, 8};
    int arr3[10] = {0}; 
    int a = 0;

    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
        for (int j = 0; j < sizeof(arr2)/sizeof(arr2[0]); j++) {
            if (arr1[i] == arr2[j]) {
                bool alreadyExists = false;
                for (int k = 0; k < a; k++) {
                    if (arr3[k] == arr1[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                if (alreadyExists==false) {
                    arr3[a] = arr1[i];
                    a++;
                }
            }
        }
    }
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < a; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
}
