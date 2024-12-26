#include <iostream>
using namespace std;
int main(){
int arr[] = {0,1,2,3,4,5,5};
int arrSize = 6;
int target = 5;
int mid;
int left = 0;
int a;
int right = arrSize;

while(left<= right){
    mid = (left+right)/2;
    if(arr[mid] == target){
        a = mid;
        left = mid +1;
    }
    else if(arr[mid]<target){
        left = mid+1;
    }
    else{
        right = mid -1 ;
    }
}
cout<<a;
}