#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> & arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int result = binary_search(arr, target);
    if (result != -1) {
        cout << "Element is present at index " << result << endl;
    } else {
        cout << "Element is not present in array" << endl;
    }
    return 0;
}
