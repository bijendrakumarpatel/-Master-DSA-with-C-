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

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


Node* getMiddle(Node* head) {
    if (head == NULL) {
        cout << "Linked list is empty!" << endl;
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          
        fast = fast->next->next;    
    }

    return slow; 
}
int main() {
    
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

   
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;  

    cout << "Original List: ";
    print(head);

    Node* middle = getMiddle(head);
    if (middle != NULL) {
        cout << "Middle node is: " << middle->data << endl;
    }
    return 0;
}
