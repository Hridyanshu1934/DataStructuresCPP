#include <iostream>
using namespace std;
bool sortedArrayChekc(int arr[],int size,int i){
    if(i==size-1){
        return true;
    }
    else if(arr[i]>= arr[i+1]){
        return false;
    }
    sortedArrayChekc(arr,size,i+1);
}
int main(){
    int arr[] = {1,2,3,6,5};
    int i =0;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<sortedArrayChekc(arr,size,i);

}
// Here the recursion will run till the index is equal to 4 and then we will check if each element is greater or less than its next one 