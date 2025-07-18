#include <iostream>
using namespace std;

class Heap {
public:
    int arr[101];
    int size;

    Heap() {
        size = 0;
        arr[0] = -1;
    }

    void HeapiFy(int arr[], int i, int size) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int largest = i;

        if (left <= size && arr[left] > arr[largest]) {
            largest = left;
        }
        if (right <= size && arr[right] > arr[largest]) {
            largest = right;
        }
        if (largest != i) {
            swap(arr[i], arr[largest]);
            HeapiFy(arr, largest, size);
        }
    }

    void BuildHeap(int arr[], int size) {
        for (int i = size / 2; i > 0; i--) {
            HeapiFy(arr, i, size);
        }
    }

    void printHeap(int arr[], int size) {
        cout << "Heap: ";
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {-1, 12, 15, 13, 11, 14};
    int size = 5;

    Heap h;
    cout << "Before building the heap:- ";
    h.printHeap(arr, size);

    h.BuildHeap(arr, size);

    cout << "After building the heap:- ";
    h.printHeap(arr, size);

    return 0;
}
