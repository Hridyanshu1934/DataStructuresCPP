#include<iostream>
using namespace std;
void printN(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printN(n-1);
    cout<<"Hriday";
}
int sumOfArray(int arr[],int i ,int sum,int size){
   if(i==size){
        return sum;
    }
    sum = sum+arr[i];
    return sumOfArray(arr,i+1,sum,size);
}
int getSizeOfArr(int arr[]){
}


int main(){
    int arr[] = {1,2,3};
    int i = 0;
    int sum = 0;
    int size = sizeof(arr)/sizeof(int);
    cout<<sumOfArray(arr,i,sum,size);
}