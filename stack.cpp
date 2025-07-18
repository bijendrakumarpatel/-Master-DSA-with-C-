#include <iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int top;
    int size;
      // constructor
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data) {
        if (size - top > 1) {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            top--;
        }
    }

    int getTop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1; // Returning a default value to handle the empty case
        }
        return arr[top];
    }

    int getSize() {
        return top + 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    ~Stack() {
        delete[] arr; // Free allocated memory
    }
};

int main() {
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while (!s.isEmpty()) {
        cout << s.getTop() << " " <<endl;
        s.pop();
    }
    cout<<endl; 
  cout<<"Size of stack "<<s.getSize()<<endl;
    return 0;
}
