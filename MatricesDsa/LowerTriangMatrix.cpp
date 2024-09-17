#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n][n] ={0};
    int arrToStoreNonZero [] = {0};

    for (int i = 0 ; i<5 ;i++){

        for(int j = 0 ; j<5 ;j++){

            if(i>=j&&arr[i][j] != 0){

                cout<<i<<" and "<<j<<endl;
                
            }
        }
    }
}