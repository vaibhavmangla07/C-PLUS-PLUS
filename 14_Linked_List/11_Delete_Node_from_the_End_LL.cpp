// Delete Node from the End

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

    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
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

    ll.head = new Node(10);
    ll.head->next = new Node(20);
    ll.head->next->next = new Node(30);
    ll.head->next->next->next = new Node(40);

    cout << "Original List: ";
    ll.printList();

    ll.deleteAtEnd();

    cout << "After Deletion at End: ";
    ll.printList();

    return 0;
}
