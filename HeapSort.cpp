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

    void buildHeap(int inputArr[], int n) {
        size = n;
        for (int i = 0; i < n; i++) {
            arr[i + 1] = inputArr[i]; 
        }

        for (int i = size / 2; i > 0; i--) {
            HeapiFy(arr, i, size);
        }
    }
  
    void heapSort(int arr[], int size) {
        int tempSize = size;  
        while (tempSize > 1) {
            swap(arr[1], arr[tempSize]);
            tempSize--;
            HeapiFy(arr, 1, tempSize);
        }
    }
    void printHeap(int arr[], int size) {
        if (size == 0) {
            cout << "Heap is empty!" << endl;
            return;
        }
        cout << "Heap: ";
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h;
    int inputArr[] = {87,78,43,44,56,12,5,6,3,23,32};
    int size = 11;

    cout << "Original Heap Before Heap Construction: - ";
    h.printHeap(inputArr, size); 

    cout << "Building the heap..." << endl;
      h.buildHeap(inputArr, size);

    cout << "Print the built heap:- ";
    h.printHeap(h.arr, size);

    cout << "Performing Heap Sort:- " << endl;
    h.heapSort(h.arr, size);

    cout << "Sorted Array:- ";
    h.printHeap(h.arr, size);

    return 0;
}
