// Subtracting Two Linked Lists

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

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

Node* subtractLists(Node* l1, Node* l2) {
    l1 = reverse(l1);
    l2 = reverse(l2);

    Node* ans = NULL;
    Node* temp = NULL;
    int borrow = 0;

    while (l1 != NULL) {
        int num1 = l1->data - borrow;
        int num2 = 0;
        if (l2 != NULL) {
            num2 = l2->data;
        }

        if (num1 < num2) {
            num1 += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        int diff = num1 - num2;
        Node* newNode = new Node(diff);

        if (ans == NULL) {
            ans = newNode;
            temp = ans;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }

        l1 = l1->next;
        if (l2 != NULL) {
            l2 = l2->next;
        }
    }

    ans = reverse(ans);

    while (ans != NULL && ans->data == 0) {
        Node* toDelete = ans;
        ans = ans->next;
        delete toDelete;
    }

    if (ans == NULL) {
        return new Node(0);
    }

    return ans;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* l1 = new Node(9);
    l1->next = new Node(1);
    l1->next->next = new Node(3);

    Node* l2 = new Node(2);
    l2->next = new Node(1);
    l2->next->next = new Node(4);

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2);

    Node* ans = subtractLists(l1, l2);

    cout << "Subtraction: ";
    printList(ans);
    return 0;
}
