#include <iostream>
using namespace std;
int main(){
    int a = 39;
    int n = a/2;
    int b = 0;
    int sol = 0;
    while (b <= n){
        int mid = (b + n) / 2;
        if(mid*mid == a){
            sol = mid;
            break;
        }
        else if(mid*mid>a){
            n = mid - 1;
        }
        else if(mid*mid<a){
            b = mid + 1;
        }
        sol = n;
    }
    cout<<sol<<endl;
    
     
    
}