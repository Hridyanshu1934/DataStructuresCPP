#include <iostream>
using namespace std;
int main(){
int arr[] = {0,1,2,5,5,5,5};
int arrSize = 6;
int target = 5;
int mid;
int left = 0;
int a;
int count = 0;
int right = arrSize;

while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            count++;

            int h = mid - 1;
            while (h >= 0 && arr[h] == target) {
                count++;
                h--;
            }
            h = mid + 1;
            while (h < arrSize && arr[h] == target) {
                count++;
                h++;
            }
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

}
cout<<count;
}