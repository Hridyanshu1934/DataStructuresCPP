#include <iostream> 

using namespace std; 

  

int main() { 

    int arr[] = {30, 40, 50, 10, 20}; 

    int n = 5; 

    int key = 10; 

  

    int index = -1; 

  

    for (int low = 0, high = n - 1; low <= high; ) { 

        int mid = (low + high) / 2; 

  

        if (arr[mid] == key) { 

            index = mid; 

            break; 

        } 

  

        if (arr[low] <= arr[mid]) { 

            if (key >= arr[low] && key < arr[mid]) 

                high = mid - 1; 

            else 

                low = mid + 1; 

        } else { 

            if (key > arr[mid] && key <= arr[high]) 

                low = mid + 1; 

            else 

                high = mid - 1; 

        } 

    } 

  

    if (index == -1) 

        cout << "Key doesn't exist" << endl; 

    else 

        cout << "Key is present at index " << index << endl; 

  

    return 0; 

} 