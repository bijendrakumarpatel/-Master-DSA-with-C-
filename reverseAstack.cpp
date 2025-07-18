#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target) {
    if (s.empty()) {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertAtBottom(s, target);
    s.push(topElement);
}

void reverseStack(stack<int> &s) {
    if (s.empty()) {
        return;
    }

    int target = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, target);
}

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(80);
    s.push(90);

    reverseStack(s);

    cout << "Reversed Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
