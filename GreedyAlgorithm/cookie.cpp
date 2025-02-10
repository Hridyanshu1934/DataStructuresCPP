#include <iostream>
using namespace std;

int cookie(int g[], int m, int c[], int n) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (g[i] > g[j]) {
                int temp = g[i];
                g[i] = g[j];
                g[j] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (c[i] > c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    int i = 0, j = 0;
    while (i < m && j < n) {
        if (c[j] >= g[i]) {
            i++;
        }
        j++;
    }

    return i;
}


