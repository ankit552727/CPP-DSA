#include <iostream>
using namespace std;

void leftShiftArray(int arr[], int n, int shifts) {
    for(int i = 0; i < shifts; i++) {
        int temp = arr[0];
        for(int j = 1; j < n; j++) {
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int shifts = 5;

    leftShiftArray(arr, n, shifts);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}