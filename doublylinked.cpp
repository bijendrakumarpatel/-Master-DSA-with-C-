#include <iostream>
using namespace std;

// Doubly Linked List Node Class
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructors
    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Function to print the Doubly Linked List
void print(Node* head) {
    Node* temp = head;
    cout << "NULL <- ";
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " <-> ";
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}

// Function to get the length of the Doubly Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

// 1. Insert at Head
void insertAtHead(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// 2. Insert at Tail
void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

// 3. Insert at Specific Position
void insertAtPosition(Node*& head, Node*& tail, int position, int data) {
    if (position < 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (position == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    if (temp->next == NULL) {
        insertAtTail(head, tail, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

// 4. Insert after a specific value
void insertAfterValue(Node*& head, Node*& tail, int value, int data) {
    Node* temp = head;
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Value not found!" << endl;
        return;
    }

    if (temp->next == NULL) {
        insertAtTail(head, tail, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

// 1. Delete from Head
void deleteFromHead(Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;
    else tail = NULL;  // If list becomes empty

    delete temp;
}

// 2. Delete from Tail
void deleteFromTail(Node*& head, Node*& tail) {
    if (tail == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = tail;
    tail = tail->prev;
    if (tail != NULL) tail->next = NULL;
    else head = NULL;  // If list becomes empty

    delete temp;
}

// 3. Delete from Specific Position
void deleteAtPosition(Node*& head, Node*& tail, int position) {
    if (position < 1 || head == NULL) {
        cout << "Invalid position or empty list!" << endl;
        return;
    }

    if (position == 1) {
        deleteFromHead(head, tail);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (temp != NULL && count < position) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    if (temp->next == NULL) {
        deleteFromTail(head, tail);
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

// 4. Delete by Value
void deleteByValue(Node*& head, Node*& tail, int value) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    if (head->data == value) {
        deleteFromHead(head, tail);
        return;
    }

    Node* temp = head;
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Value not found!" << endl;
        return;
    }

    if (temp->next == NULL) {
        deleteFromTail(head, tail);
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

// Main Function
int main() {
    // Creating initial nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Linking nodes
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    // Setting head and tail
    Node* head = first;
    Node* tail = fourth;

    cout << "Original List: ";
    print(head);

    // Insertions
    insertAtHead(head, tail, 5);
    cout << "After inserting 5 at head: ";
    print(head);

    insertAtTail(head, tail, 50);
    cout << "After inserting 50 at tail: ";
    print(head);

    insertAtPosition(head, tail, 3, 15);
    cout << "After inserting 15 at position 3: ";
    print(head);

    insertAfterValue(head, tail, 30, 35);
    cout << "After inserting 35 after value 30: ";
    print(head);

    // Deletions
    deleteFromHead(head, tail);
    cout << "After deleting from head: ";
    print(head);

    deleteFromTail(head, tail);
    cout << "After deleting from tail: ";
    print(head);

    deleteAtPosition(head, tail, 3);
    cout << "After deleting at position 3: ";
    print(head);

    deleteByValue(head, tail, 20);
    cout << "After deleting value 20: ";
    print(head);

    return 0;
}
