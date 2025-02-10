#include <iostream>

using namespace std;

int minRot(int input, int unlock) {
    int totalRotations = 0;

    for (int i = 0; i < 4; i++) {

        int forward = unlock % 10 - input % 10;
        if (forward < 0) forward += 10;

        int backward = 10 - forward;

         if (forward < backward) {
            totalRotations += forward;
        } else {
            totalRotations += backward;
        }

        input /= 10;
        unlock /= 10;
    }

    return totalRotations;
}