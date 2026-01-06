// // Inserting at the Specific Position of a Linked List

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

    void insertAtPosition(int val, int pos) {
        Node* newNode = new Node(val);

        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        int count = 1;

        while (temp != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) {
            cout << "Position out of range!" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
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

    ll.insertAtPosition(10, 1); // Insert 10 at position 1
    ll.insertAtPosition(20, 2); // Insert 20 at position 2
    ll.insertAtPosition(30, 3); // Insert 30 at position 3
    ll.insertAtPosition(15, 2); // Insert 15 at position 2
    ll.insertAtPosition(25, 4); // Insert 25 at position 4

    ll.printList();
    return 0;
}
