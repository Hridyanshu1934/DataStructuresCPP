#include <iostream> 

using namespace std; 

  

int main() { 

    int arr[] = {1, 2, 3, 3, 5,6,7}; 

    int checker = 0; 

    int size = 7; 

    for (int i = 0; i < size; i++) { 

        for(int j = 0; j<size ; j++){ 

            if (arr[i] == arr[j] && i!=j){ 

                checker++; 

            } 

        } 

    } 

  

    cout <<"checker is "<<checker<<endl; 

    if(checker > 0){ 

        cout<<"The array contains "<<checker<<" duplicates"; 

    } 

    else{ 

        cout<<"There are not duplicates"; 

    } 

  

    return 0; 

} 

 