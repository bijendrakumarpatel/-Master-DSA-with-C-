#include <iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top1;
    int top2;

    // Constructor
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data) {
        if (top2 - top1 == 1) {
            cout << "Stack 1 Overflow" << endl;
        } else {
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "Stack 2 Overflow" << endl;
        } else {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Underflow in Stack 1" << endl;
        } else {
            top1--;
        }
    }

    void pop2() {
        if (top2 == size) {
            cout << "Underflow in Stack 2" << endl;
        } else {
            top2++;
        }
    }

    int topStack1() {
        if (top1 == -1) {
            cout << "Stack 1 is empty" << endl;
            return -1;
        }
        return arr[top1];
    }

    int topStack2() {
        if (top2 == size) {
            cout << "Stack 2 is empty" << endl;
            return -1;
        }
        return arr[top2];
    }

    bool isEmpty1() {
        return top1 == -1;
    }

    bool isEmpty2() {
        return top2 == size;
    }

    ~Stack() {
        delete[] arr; // Free allocated memory
    }
};

int main() {
    Stack s(10);
    s.push1(10);
    s.push2(101);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);
    s.push2(210);
    s.push2(310);

    // Printing and popping Stack 1
    cout << "Stack 1 elements: ";
    while (!s.isEmpty1()) {
        cout << s.topStack1() << " ";
        s.pop1();
    }
    cout << endl;

    // Printing and popping Stack 2
    cout << "Stack 2 elements: ";
    while (!s.isEmpty2()) {
        cout << s.topStack2() << " ";
        s.pop2();
    }
    cout << endl;

    return 0;
}
