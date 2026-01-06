// Adding Two Linked Lists

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

Node* addTwoLists(Node* l1, Node* l2) {
    Node* dummy = new Node(0);
    Node* temp = dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry) {
        int sum = carry;
        if (l1 != NULL) {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        temp->next = new Node(sum % 10);
        temp = temp->next;
    }

    return dummy->next;
}

int main() {
    List l1, l2;

    l1.insertAtEnd(3);
    l1.insertAtEnd(4);
    l1.insertAtEnd(2);

    l2.insertAtEnd(4);
    l2.insertAtEnd(6);
    l2.insertAtEnd(5);

    cout << "List 1: ";
    l1.printList();

    cout << "List 2: ";
    l2.printList();

    Node* ans = addTwoLists(l1.head, l2.head);

    cout << "Addition: ";
    while (ans != NULL) {
        cout << ans->data << " -> ";
        ans = ans->next;
    }
    cout << "NULL" << endl;

    return 0;
}
