#include <iostream>
using namespace std;

int findRotations(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        
        int mid = start + (end - start) / 2;
        int prev = (mid + n - 1) % n;  // Previous element
        int next = (mid + 1) % n;  // Next element

        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
            // Found the minimum element
            return mid;
        }
        else if (arr[mid] >= arr[start]) {
            // Minimum element is in the right half
            start = mid + 1;
        }
        else {
            // Minimum element is in the left half
            end = mid - 1;
        }
    }

    return -1;  // Invalid input
}

int main() {
    int arr[] = {6, 7, 8, 1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 8;

    int rotations = findRotations(arr, n);
    cout << "Number of rotations: " << rotations << endl;

    return 0;
}
