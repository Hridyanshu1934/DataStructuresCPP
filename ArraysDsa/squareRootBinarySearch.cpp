#include <iostream>
using namespace std;
int main(){
    int a = 56;
    int n = a;
    int b = 0;
    while (b <= n){
        int mid = (b + n) / 2;
        if(mid*mid == a){
            cout<<mid;
            break;
        }
        else if(mid*mid>a){
            n = mid - 1;
        }
        else if(mid*mid<a){
            b = mid + 1;
        }
    }
    cout<<n<<endl;
     
    
}