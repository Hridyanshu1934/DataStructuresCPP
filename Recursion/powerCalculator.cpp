#include <iostream>
using namespace std;
int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}
int main() {
    int base = 6, exp = 10;
    cout << base << " raised to the power of " << exp << " is " << power(base, exp) << endl;
    return 0;
}
// Here we will send both exp and base as the argument for the function and reduce exp by one each time