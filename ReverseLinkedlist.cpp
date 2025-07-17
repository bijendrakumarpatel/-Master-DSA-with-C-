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

// Recursive function to reverse the linked list
Node* reverse(Node* prev, Node* curr) {
    if (curr == NULL) {
        return prev; // Return new head
    }
    
    Node* forward = curr->next; // Store next node
    curr->next = prev; // Reverse the link
    return reverse(curr, forward); // Move to the next node
}
int main() {
    // Creating nodes
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first; // Head of the linked list

    cout << "Original List: ";
    print(head);

    // Reversing the linked list
    head = reverse(NULL, head);

    cout << "Reversed List: ";
    print(head);
    return 0;
}
