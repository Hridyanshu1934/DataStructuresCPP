#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int start = 0;
    int end = n - 1; 

    while (start <= end)
    {
        int mid = start + (end - start) / 2; 
        if (arr[mid] - arr[mid-1] > 1)
        {
            cout << "The missing number is: " << arr[mid-1] + 1 << endl;
            break;
        }
        else if (arr[mid+1] - arr[mid] > 1)
        {
            cout << "The missing number is: " << arr[mid] + 1 << endl;
            break;
        }
        else if (arr[mid] - arr[0] == mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    
    return 0;
}