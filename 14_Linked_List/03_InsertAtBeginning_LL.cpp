// Inserting at the Beginning of a Linked List

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;

    List() {
        head = NULL;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head; 
        head = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;

    ll.insertAtBeginning(5);
    ll.insertAtBeginning(10);
    ll.insertAtBeginning(15);
    ll.insertAtBeginning(20);

    ll.printList();
    return 0;
}
