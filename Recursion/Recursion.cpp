#include<iostream>
using namespace std;
int fun1(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n-1);
    }
}
int main(){
    fun1(10);
    return 0;
}