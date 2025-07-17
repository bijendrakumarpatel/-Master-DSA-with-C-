#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to get the length of the linked list
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

// Function to reverse K nodes in a linked list
Node* reverseKnodes(Node* head, int k) {
    if (head == NULL) {
        cout << "Linked list is empty" << endl;
        return NULL;
    }

    int len = getLength(head);
    if (k > len || k <= 0) {
        cout << "Enter a valid value of k" << endl;
        return head;
    }

    // Reverse first K nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // Recursively reverse the remaining list and connect
    if (forward != NULL) {
        head->next = reverseKnodes(forward, k);
    }

    return prev; // `prev` is the new head after reversal
}

int main() {
    // Creating linked list
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);
    Node* seventh = new Node(7);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    Node* head = first; // Head of the linked list

    cout << "Original List: ";
    print(head);

    int k = 2; // Reverse in groups of k
    head = reverseKnodes(head, k);

    cout << "List after reversing in " << k << "-groups: ";
    print(head);

    return 0;
}
