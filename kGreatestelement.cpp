#include <iostream>
#include <queue>
using namespace std;

int getKGreatestElement(int arr[], int n, int k) {
     // Min heap to store k smallest elements
     priority_queue<int ,vector<int> , greater<int>> pq;

    // Insert first k elements into the max heap
    for (int i = 0; i < k; i++) {
        pq.push(arr[i]);
    }

    // Process remaining elements
    for (int i = k; i < n; i++) {
        if (arr[i] > pq.top()) {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top(); // The root of the max heap is the k-th smallest element
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]); // Correct way to find array size

    int ans = getKGreatestElement(arr, n, k);
    cout << k << "  th Greatest element is " << ans << endl;

    return 0;
}
