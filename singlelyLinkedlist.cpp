#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        this->data = 0;
        this->next = NULL;
    }

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

// Insert new node at head
void insertAtHead(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// Insert new node at tail
void insertAtTail(Node*& tail, int data) {
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;  // Update tail to the new last node
}

// insert at ant positions 

void insertAtPositions(int data,int positions,Node*  &head, Node*& tail){\
 if(positions==0){
     insertAtHead(head, data);
     return;
 }
    if(head==NULL){
      Node*newNode =new Node(data);
      head=newNode;
      tail=newNode;
      return;
    }
// find the positions 
    int i=0;
    Node*prev =head;
    while(i<positions){
        prev=prev->next;
        i++;
    }
    Node*curr=prev->next;

    Node*newNode =new Node(data);
    newNode->next=curr;
    prev->next=newNode; 

}

int main() {
    // Creating nodes with values
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
    fifth->next = NULL;

    // Initializing head and tail
    Node* head = first;
    Node* tail = fifth;  // Tail should be the last node initially

    // Printing the linked list before insertion
    cout << "Original List: ";
    print(head);

    // Inserting a new node with value 40 at the head
    insertAtHead(head, 40);
    cout << "After inserting 40 at the head: ";
    print(head);

    // Inserting at the tail
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);

    // Printing the updated linked list
    cout << "After inserting at the tail: ";
    print(head);
    // printing after inserting at a positions 
    insertAtPositions(89,2,head,tail);
    print(head);
    return 0;
}
