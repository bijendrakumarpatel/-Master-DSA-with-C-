#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// 1. Delete from Head (Beginning)
void deleteFromHead(Node*& head) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete from head." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// 2. Delete from Tail (End)
void deleteFromTail(Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete from tail." << endl;
        return;
    }
    if (head->next == NULL) {  // Only one element
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}

// 3. Delete from a Specific Position
void deleteAtPosition(Node*& head, Node*& tail, int position) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }
    
    if (position == 0) {  // Deleting the first node
        deleteFromHead(head);
        return;
    }

    Node* temp = head;
    int i = 0;

    while (temp != NULL && i < position - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;

    // If deleting the last node, update tail
    if (toDelete == tail) {
        tail = temp;
    }

    delete toDelete;
}

// 4. Delete by Value
void deleteByValue(Node*& head, Node*& tail, int value) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete value." << endl;
        return;
    }

    if (head->data == value) {  // If value is in the head
        deleteFromHead(head);
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        cout << "Value not found in the list!" << endl;
        return;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;

    // If deleting the last node, update tail
    if (toDelete == tail) {
        tail = temp;
    }

    delete toDelete;
}

int main() {
    // Creating nodes with values
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    // Initializing head and tail
    Node* head = first;
    Node* tail = fifth;

    cout << "Original List: ";
    print(head);

    // 1. Deleting from head
    deleteFromHead(head);
    cout << "After deleting from head: ";
    print(head);

    // 2. Deleting from tail
    deleteFromTail(head, tail);
    cout << "After deleting from tail: ";
    print(head);

    // 3. Deleting from a specific position
    deleteAtPosition(head, tail, 1);
    cout << "After deleting node at position 1: ";
    print(head);

    // 4. Deleting by value
    deleteByValue(head, tail, 20);
    cout << "After deleting value 20: ";
    print(head);

    return 0;
}
