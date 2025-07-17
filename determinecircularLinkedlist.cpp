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
bool checkForCircularLinkedlist(Node*&head){
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
    seventh->next=first;

   Node* head = first; // Head of the linked list

   // cout << "Original List: ";
    //print(head);

    cout<<"Loop is presents in mentioned list is "<<endl;
    if( checkForCircularLinkedlist(head)==1){
        cout<<"this is an circular Linked List";
    }
    else{
        cout<<"Not a circular linked list";
    }

    return 0;
}

