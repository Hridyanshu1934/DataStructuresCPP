#include <iostream> 

using namespace std; 

  

int main() { 

    int* arr = new int[5];  

    arr[0] = 1; 

    arr[1] = 2; 

    arr[2] = 3; 

    arr[3] = 4; 

    arr[4] = 5; 

  

    int size = 5; 

    int key = 4; 

  

    int low = 0; 

    int high = size - 1; 

    int answer = 0; 

    while (low <= high) { 

        int mid = (low+high)/ 2; 

        if (arr[mid] == key) { 

            answer = mid; 

        }  

        else if (key>arr[mid]) { 

            low = mid + 1; 

        }  

        else { 

            high = mid - 1; 

        } 

    } 

  

    if (answer != -1) 

        cout << "Element found at index " << answer << endl; 

    else 

        cout << "Element not found." << endl; 

    return 0; 

} 

  