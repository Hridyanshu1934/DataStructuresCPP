#include<iostream> 

using namespace std; 

class Array{ 

    public: 

    int*a; 

    int size; 

    int length; 

}; 

int main(){ 

    Array array; 

    array.size = 10; 

    array.a = new int[array.size]; 

    array.length = 5; 

    array.a[0] = 1; 

    array.a[1] = 2; 

    array.a[2] = 3; 

    array.a[3] = 4; 

    array.a[4] = 5;    

     int key = 3; 

  

for(int i=0; i<array.length; i++){ 

        if(array.a[i] == key){ 

            cout<<"The key is located at "<<i<<" th position in the array"; 

        } 

        break;

        else{ 
            cout<<"The key is not found in the array"; 

        } 

        continue;

    } 

     

    return 0; 

} 