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

     

     

  

    for(int i = 0; i <array.length ; i++){ 

        cout<<array.a[i]<< endl; 

    } 

} 