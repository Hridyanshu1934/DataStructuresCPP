#include <iostream>
using namespace std;

int arrProductElements(int arr[], int n,int i) {
    int product = 1;
    if (i <= n-1){
        product = arr[i] * arrProductElements(arr,n,i+1);
        return product;
    } 
    else {
        return 1;
    }
}
int main() {
    int arr[] = {1,2,3,4};
    int i =0;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<arrProductElements(arr, n,i) << endl;
    return 0;
}
