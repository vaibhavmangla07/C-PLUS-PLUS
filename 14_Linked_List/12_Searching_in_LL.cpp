// Searching

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

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool searchList(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Linked List: ";
    printList(head);

    int key = 3;
    if (searchList(head, key)) {
        cout << "Element " << key << " found in the linked list." << endl;
    } else {
        cout << "Element " << key << " not found in the linked list." << endl;
    }

    return 0;
}
