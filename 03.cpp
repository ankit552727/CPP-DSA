 #include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    if (size == 0 || size == 1) {
        return true;
    }
// Compare the first two elements of the array 

    if (arr[0] > arr[1]) {
        return false;
        // Not sorted
    }

    // do recresion to the rest of the array.
    return isSorted(arr + 1, size - 1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};  

    if (isSorted(arr, sizeof(arr) / sizeof(arr[0]))) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
