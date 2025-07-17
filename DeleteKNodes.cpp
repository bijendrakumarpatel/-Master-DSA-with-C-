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

// Function to delete `n` nodes after `m` nodes recursively
void LinkKdelete(Node *head, int m, int n) {
    if (!head) return; // Base condition

    Node* it = head;

    // Traverse `m-1` nodes
    for (int i = 1; i < m && it != NULL; i++) {
        it = it->next;
    }

    // If we reached the end, return
    if (!it) return;

    // Start deleting `n` nodes
    Node* mthNode = it;
    it = mthNode->next;

    for (int i = 0; i < n && it != NULL; i++) {
        Node* temp = it;
        it = it->next;
        delete temp;
    }

    // Connect remaining list
    mthNode->next = it;

    // Recursive call for remaining nodes
    LinkKdelete(it, m, n);
}

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating nodes
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);
    Node* seventh = new Node(7);
    Node* eighth = new Node(8);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;

    // Head of the linked list
    Node* head = first;

    // Printing the linked list before deletion
    cout << "Original List: ";
    print(head);

    // Delete 1 node after every 2 nodes
    LinkKdelete(head, 2, 1);

    // Printing the modified linked list
    cout << "Modified List: ";
    print(head);

    return 0;
}
