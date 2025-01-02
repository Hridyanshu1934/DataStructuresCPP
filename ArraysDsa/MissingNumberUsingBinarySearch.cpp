#include <iostream>
using namespace std;

int main(){
    int n = 9;
    int b = 1;
    int arr[] = {1,2,4,5,6,7,8,9};
    int e = n;
    while (b<= n)
    {
        int mid = arr[(b+e)/2];
        if(mid-1 == arr[((b+e)/2)-1]){
            e = mid -1;
        }
        else if(mid+1 == arr[((b+e)/2)+1]){
            b = mid + 1;
        }
        else{
            cout<<arr[mid];
        }
    }
    
    
}