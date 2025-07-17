#include <iostream>
#include <climits> 
using namespace std;

// Function to find the maximum element
int Max(int arr[], int size) {
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}

// Function to find the minimum element
int Min(int arr[], int size) {
    int mini = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < mini) { 
            mini = arr[i];
        }
    }
    return mini;
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Maximum number in the array is " << Max(arr, size) << endl;
    cout << "Minimum number in the array is " << Min(arr, size) << endl;

    return 0;
}
