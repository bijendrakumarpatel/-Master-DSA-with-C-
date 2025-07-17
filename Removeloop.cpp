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

// Function to check if a loop exists
bool checkForLoop(Node* head) {
    if (head == NULL) {
        cout << "Linked list is empty" << endl;
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }
    return false;
}

// Function to detect and remove a loop in the linked list
void RemoveLoop(Node* head) {
    if (head == NULL) return;

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL; // To keep track of the last node in the loop

    // Step 1: Detect the loop using Floyd's Cycle Detection Algorithm
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) { // Cycle detected
            slow = head; // Reset slow pointer to head

            // Step 2: Find the starting point of the loop
            while (slow != fast) {
                prev = fast;  // Track the last node before meeting point
                slow = slow->next;
                fast = fast->next;
            }

            // Step 3: Remove the loop by setting prev->next to NULL
            prev->next = NULL;
            return;
        }
    }
}

int main() {
    // Creating linked list
    Node* first = new Node(50);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(55);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = third; // Creating a loop at node 30

    Node* head = first; // Head of the linked list
     //print(head);
    cout<<"Loop is presents in mentioned list is present  "<<checkForLoop(head)<<endl;

    RemoveLoop(head);

    cout << "Loop present after removal? " << (checkForLoop(head) ? "Yes" : "No") << endl;

    cout << "Linked list after removing loop: ";
    print(head);
    
    return 0;
}
