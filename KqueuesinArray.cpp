#include <iostream>
using namespace std;

class kqueue {
public:
    int n, k, freeSpot;
    int *arr, *front, *rear, *next;

    kqueue(int _n, int _k) : n(_n), k(_k), freeSpot(0) {
        arr = new int[n];
        next = new int[n];
        front = new int[k];
        rear = new int[k];

        // Initialize front and rear arrays
        for (int i = 0; i < k; i++) {
            front[i] = rear[i] = -1;
        }

        // Initialize next array to link free slots
        for (int i = 0; i < n - 1; i++) {
            next[i] = i + 1;
        }
        next[n - 1] = -1; // Last element points to -1
    }

    bool push(int value, int qi) {
        if (qi < 0 || qi >= k) {
            cout << "Invalid queue index\n";
            return false;
        }
        if (freeSpot == -1) {
            cout << "Queue Overflow\n";
            return false;
        }

        // Find free index
        int index = freeSpot;
        freeSpot = next[index];

        // If first element in queue
        if (front[qi] == -1) {
            front[qi] = index;
        } else {
            next[rear[qi]] = index;
        }

        // Update next and rear pointers
        next[index] = -1;
        rear[qi] = index;
        arr[index] = value;

        return true;
    }

    int pop(int qi) {
        if (qi < 0 || qi >= k) {
            cout << "Invalid queue index\n";
            return -1;
        }
        if (front[qi] == -1) {
            cout << "Queue Underflow\n";
            return -1;
        }

        // Get index of front element
        int index = front[qi];
        front[qi] = next[index];

        // Free the used index
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }

    ~kqueue() {
        delete[] arr;
        delete[] front;
        delete[] rear;
        delete[] next;
    }
};

int main() {
    kqueue q(10, 3); // 3 queues in an array of size 10

    q.push(10, 0);
    q.push(20, 0);
    q.push(30, 1);
    q.push(40, 1);
    q.push(50, 2);

    cout << "Popped from Queue 0: " << q.pop(0) << endl; // 10
    cout << "Popped from Queue 1: " << q.pop(1) << endl; // 30
    cout << "Popped from Queue 2: " << q.pop(2) << endl; // 50

    return 0;
}
