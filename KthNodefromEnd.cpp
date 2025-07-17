#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
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

// Function to find the kth element from the end
int findKthFromEnd(Node* head, int k) {
    int len = getLength(head);

    if (k > len || k <= 0) {
        cout << "Invalid value of k!" << endl;
        return -1;
    }

    Node* temp = head;
    for (int i = 0; i < len - k; i++) {
        temp = temp->next;
    }
    return temp->data;
}

int main() {
    // Creating linked list
    Node* first = new Node(50);
    Node* second = new Node(60);
    Node* third = new Node(70);
    Node* fourth = new Node(80);
    Node* fifth = new Node(90);
    Node* sixth = new Node(100);
    Node* seventh = new Node(110);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    Node* head = first; 

    cout << "Linked list: ";
    print(head);

    cout << "The length of the linked list is " << getLength(head) << endl;

    int k = 6; // Example: Find the 3rd element from the end
    int kthElement = findKthFromEnd(head, k);
    if (kthElement != -1) {
        cout << "The " << k << "rd element from the end is: " << kthElement << endl;
    }

    return 0;
}
