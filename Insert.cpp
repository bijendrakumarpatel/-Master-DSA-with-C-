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

    void insertValue(int value) {
        size++;
        int index = size;
        arr[index] = value;

        while (index > 1) {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    int Delete() {
        if (size == 0) {
            cout << "Heap is empty!" << endl;
            return -1;
        }

        int ans = arr[1]; 
        arr[1] = arr[size];
        size--;

        int index = 1;
        while (index <= size) {
            int left = 2 * index;
            int right = 2 * index + 1;
            int largest = index;

            if (left <= size && arr[largest] < arr[left]) {
                largest = left;
            }
            if (right <= size && arr[largest] < arr[right]) {
                largest = right;
            }
            if (largest == index) {
                break;
            } else {
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
        return ans;
    }

    void heapify(int arr[], int i, int size) {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= size && arr[largest] < arr[left]) {
            largest = left;
        }
        if (right <= size && arr[largest] < arr[right]) {
            largest = right;
        }

        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, largest, size);
        }
    }
    void BuildHeap(int arr[],int size){
        for(int i=size/2;i>0;i++){
            heapify(arr,size,i);
        }
    }

    void printHeap() {
        cout << "Heap: ";
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h;

    h.insertValue(12);
    h.insertValue(15);
    h.insertValue(13);
    h.insertValue(11);
     h.insertValue(14);

    cout << "Original Heap: ";
    h.printHeap();

  //  h.insertValue(11);

    cout << "Heap after insertion: ";
    h.printHeap();
    
    cout << "Heap after heapify at index 3: ";
    h.heapify(h.arr, 3, h.size);
    h.printHeap();

    cout<<"Build an heaps :-";
    h.BuildHeap(h.arr,2);
    h.printHeap();

    return 0;
}
