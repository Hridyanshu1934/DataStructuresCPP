#include <iostream>
using namespace std;

int fun(int arr[], int n) {
    int cost = 0;

    while (n > 1) {
        int min1 = 0, min2 = 1;

        if (arr[min1] > arr[min2]) {
            swap(min1, min2);
        }

        for (int i = 2; i < n; ++i) {
            if (arr[i] < arr[min1]) {
                min2 = min1;
                min1 = i;
            } else if (arr[i] < arr[min2]) {
                min2 = i;
            }
        }

        cost += arr[min1];
        arr[min2] += arr[min1];

        for (int i = min1; i < n - 1; ++i) {
            arr[i] = arr[i + 1];
        }

        --n;
    }

    return cost;
}


