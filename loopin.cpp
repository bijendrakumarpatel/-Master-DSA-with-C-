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

// loop in linked list
bool checkForLoop(Node*&head){
    if(head==NULL){
        cout<<" linked list is empty "<<endl;
        return false;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            return true;
        }
    }
    return false;
}
Node* startingPointOfLoop(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    // Step 1: Detect the cycle using Floyd’s Algorithm
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) { // Cycle detected
            slow = head; // Reset slow pointer to head

            // Step 2: Find the starting point of the loop
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; // Loop starting node
        }
    }
    return NULL; // No cycle found
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
    seventh->next=first;

   Node* head = first; // Head of the linked list

   // cout << "Original List: ";
    //print(head);

    cout<<"Loop is presents in mentioned list is "<<checkForLoop(head)<<endl;

    cout<<"Starting point of the linked list "<<startingPointOfLoop(head) ->data <<endl;
    cout<<endl;

    return 0;
}
