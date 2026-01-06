// Delete Node at a Given Position

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

    void deleteAtPosition(int position) {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        for (int i = 1; temp != NULL && i < position - 1; i++) {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL) {
            cout << "Invalid position!" << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
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

    ll.deleteAtPosition(2);

    cout << "After Deletion at Position 2: ";
    ll.printList();

    return 0;
}
