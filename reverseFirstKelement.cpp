#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseFirstKElements(queue<int>& q, int k) {
    if (k > q.size() || k <= 0) return;  // Edge case: k should be valid

    stack<int> s;
    int n = q.size();

    // Step 1: Push first K elements into the stack
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Pop from stack and push back to queue (reversing first K elements)
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move the remaining elements (n-k) to the back of the queue
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;

    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    q.push(12);
    q.push(14);
    q.push(16);

    cout << "Original Queue: ";
    queue<int> temp = q;  
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
  int k=9;
    reverseFirstKElements(q, k);

    cout << "Queue after reversing first " << k << " elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
