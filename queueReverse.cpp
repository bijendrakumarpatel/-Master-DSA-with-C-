#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> s;

    // Move all elements from queue to stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Move all elements back from stack to queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}
// by using recursion 
void reverseQueueRecursion(queue<int>& q) {
    if (q.empty()) {
        return; // Base case: if queue is empty, return
    }

    // Step 1: Remove front element
    int frontElement = q.front();
    q.pop();

    // Step 2: Recursive call to reverse the remaining queue
    reverseQueueRecursion(q);

    // Step 3: Push the removed element at the back
    q.push(frontElement);
}


int main() {
    queue<int> q;

    // Pushing elements into the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    cout << "Printing the original Queue:" << endl;

    // Create a copy of the original queue to print it without modifying `q`
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Now reverse the queue
    //reverseQueue(q);
    reverseQueueRecursion(q);

    cout << "Printing the Reversed Queue:" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
