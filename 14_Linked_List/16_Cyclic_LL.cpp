// Linked List Cycle

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

bool hasCycle(Node *head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next; 

        if(slow == fast) {
            return true;
        }
    }
    return false;
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

    // Creating a cycle: 5 -> 3 (loop back)
    head->next->next->next->next->next = head->next->next;
    cout << (hasCycle(head) ? "Cycle detected" : "No cycle") << endl;

    return 0;
}