#include <iostream>
using namespace std;

void minNotes(int money) {
    int denominationArr[] = {2000, 500, 200, 100, 50, 20, 10, 5, 1};
    int countArr[9] = {0};

    for (int i = 0; i < 9; i++) {
        if (money >= denominationArr[i]) {
            countArr[i] = money / denominationArr[i];
            money = money % denominationArr[i];
        }
    }

    cout << "Currency  Count" << endl;
    for (int i = 0; i < 9; i++) {
        if (countArr[i] != 0) {
            cout << denominationArr[i] << " : " << countArr[i] << endl;
        }
    }
}