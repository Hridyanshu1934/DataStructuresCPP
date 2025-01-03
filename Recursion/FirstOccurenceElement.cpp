#include<iostream>
using namespace std;
int FirsOccurence(int arr[],int size,int i,int element){
    if(i<size){
        if(arr[i] == element){
            return i;
        }
        return FirsOccurence(arr,size,i+1,element);
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int element = 4;
    cout<<FirsOccurence(arr,size,i,element);
}
