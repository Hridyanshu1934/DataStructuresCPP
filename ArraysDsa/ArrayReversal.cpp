#include <iostream> 

using namespace std; 

  

int main() { 

    int arr[] = {1, 2, 3, 4, 5}; 

    int size = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < size / 2; ++i) { 

        int temp = arr[i]; 

        arr[i] = arr[size - i - 1]; 

        arr[size - i - 1] = temp; 

    } 

  

    cout << "\nReversed Array is : "; 

    for (int i = 0; i < size; ++i) { 

        cout << arr[i] << " "; 

    } 

  

    return 0; 

} 