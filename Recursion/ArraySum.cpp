#include <iostream>
using namespace std;
int i = 0;
int sum = 0;
int arrSum(int arr[],i){
    sum = arr[i]+arrSum(arr,i+1);
    return sum;
}