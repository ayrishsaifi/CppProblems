/* Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array.
 The functions should put all 0s first, then all 1s and all 2s in last. */

#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    int l = 0;
    int mid = 0;
    int h = n - 1;

    while (mid <= h) {
        if (arr[mid] == 0) {
            swap(arr[l], arr[mid]);
            l++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[h]);
            h--;
        }
    }
}

int main() {
    int arr[] = {1, 1, 2, 1, 2, 0, 0, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

