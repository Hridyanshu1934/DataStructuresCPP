#include <iostream>
using namespace std;

int maxStocks(int p[], int n, int k) {
    int count = 0, cost = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i] > p[j]) {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (cost + p[i] <= k) {
            cost += p[i];
            count++;
        }
    }
    
    return count;
}


