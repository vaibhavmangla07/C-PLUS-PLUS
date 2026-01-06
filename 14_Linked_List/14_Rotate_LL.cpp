// Rotate Linked List

#include<bits/stdc++.h>
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

int getSize(Node* head) {
    Node* temp = head;
    int sz = 0;
    while (temp) {
        temp = temp->next;
        sz++;
    }
    return sz;
}

Node* rotateRight(Node* head, int k) {
    if (!head || !head->next || k == 0)
        return head;

    int length = getSize(head);

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = head;

    k = k % length; 
    int size = length - k;
    temp = head;
    for (int i = 1; i < size; i++) {
        temp = temp->next;
    }

    head = temp->next;
    temp->next = NULL; 

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);

    cout << "Original List: ";
    printList(head);

    int k = 3; 
    head = rotateRight(head, k);

    cout << "Rotated List: ";
    printList(head);

    return 0;
}