#include <iostream>
using namespace std;
int fun1(int n) {
    if (n <= 1)
        return n;
    else
        return fun1(n - 1) + fun1(n - 2);
}
int main() {
    int num;
    cout<<"Enter the number for fibonacci";
    cin>>num;
    for (int i = 1; i < num+1; i++)
        cout << fun1(i) << " ";
}
