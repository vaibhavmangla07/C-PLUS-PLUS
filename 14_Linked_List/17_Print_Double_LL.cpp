// Print Double Linked List

#include <iostream>
using namespace std;

// Node structure for Doubly Linked List
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Class for Doubly Linked List
class DoublyLinkedList {
public:
    Node* head;
    head = NULL;

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    void printList() {
        Node* temp = head;
        cout << "Doubly Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);

    dll.printList();

    return 0;
}
