#include <iostream>
using namespace std;

int fun1(int n) {
    if (n == 0)
        return 1;
    else
        return n * fun1(n - 1);
}
int main() {
    int num;
    cout<<"Enter the number for factorial";
    cin>>num;
    cout << "fun1 of " << num << " is " << fun1(num) << endl;
}
