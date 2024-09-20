#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n][n];
    int arr2[3*n - 2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the element at index [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
            if(i-j == 1 || i-j == 0 || i-j == 1){
                arr2[j] = arr[i][j];
            }
        }
    }
    for (int c = 0 ; c<n ; c++){
        cout<<arr2[c];
    }
    
}