#include <iostream> 

using namespace std; 

  

class Array { 

private: 

    int A[10]; 

    int size; 

    int length; 

  

public: 

    Array(int arr[], int s, int l) : size(s), length(l) { 

        for (int i = 0; i < length; ++i) { 

            A[i] = arr[i]; 

        } 

    } 

  

    int Get(int index) { 

        if (index >= 0 && index < length) { 

            return A[index]; 

        } 

        return -1;  

    } 

  

    void Set(int index, int x) { 

        if (index >= 0 && index < length) { 

            A[index] = x; 

        } 

    } 

  

    int Max() { 

        int max = A[0]; 

        for (int i = 1; i < length; ++i) { 

            if (A[i] > max) { 

                max = A[i]; 

            } 

        } 

        return max; 

    } 

  

    int Min() { 

        int min = A[0]; 

        for (int i = 1; i < length; ++i) { 

            if (A[i] < min) { 

                min = A[i]; 

            } 

        } 

        return min; 

    } 

  

    int Sum() { 

        int s = 0; 

        for (int i = 0; i < length; ++i) { 

            s += A[i]; 

        } 

        return s; 

    } 

  

    float Avg() { 

        if (length == 0) return 0; 

        return static_cast<float>(Sum()) / length; 

    } 

}; 

  

int main() { 

    int arr1[] = {2, 3, 9, 16, 18, 21, 28, 32, 35}; 

    Array array(arr1, 10, 9); 

    cout << "\nElements are:\n"; 

     

        for (int i = 0; i < 9; ++i) { 

            cout << arr1[i] << " "; 

        } 

        cout << endl; 

    cout << "Average is : " << array.Avg() << endl; 

     

  

    return 0; 

} 