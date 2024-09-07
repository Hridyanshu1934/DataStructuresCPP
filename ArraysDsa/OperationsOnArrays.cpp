    #include <iostream> 

    using namespace std; 

    class Array { 

    public: 

     int *a; 

     int size; 

    int length; 

}; 

  

int main(){ 

    Array array; 

    array.size = 10; 

    array.a = new int[array.size]; 

    array.length = 5; 

    array.a[0] = 0; 

    array.a[1] = 1; 

    array.a[2] = 2; 

    array.a[3] = 3; 

    array.a[4] = 4; 

  

    // appending an array 

  

    array.a[array.length] = 5; 

    array.length++; 

  

    // inserting an element at the given position inside the array 

    int pos,element; 

    pos = 2; 

    element = 10; 

    array.length++; 

  

    for(int j = array.length;j>pos;j--){ 

        array.a[j] = array.a[j-1]; 

    } 

    array.a[pos] = element; 

  

    for(int i = 0; i <array.length ; i++){ 

        cout<<array.a[i]<< endl; 

    } 

} 