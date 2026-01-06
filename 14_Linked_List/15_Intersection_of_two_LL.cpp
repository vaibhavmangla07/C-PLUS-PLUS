// Intersection of two linked list

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

Node *getIntersectionNode(Node *headA, Node *headB) {
    if (!headA || !headB) {
        return NULL;
    }

    Node *ptrA = headA;
    Node *ptrB = headB;

    while (ptrA != ptrB) {
        ptrA = (!ptrA) ? headB : ptrA->next;
        ptrB = (!ptrB) ? headA : ptrB->next;
    }
    return ptrA = ptrB; 
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
   // Creating two linked lists with an intersection point
   Node* common = new Node(8);
   common->next = new Node(9);
   common->next->next = new Node(10);

   // First linked list: 1 -> 2 -> 3 -> [8 -> 9 -> 10]
   Node* headA = new Node(1);
   headA->next = new Node(2);
   headA->next->next = new Node(3);
   headA->next->next->next = common;

   // Second linked list: 4 -> 5 -> [8 -> 9 -> 10]
   Node* headB = new Node(4);
   headB->next = new Node(5);
   headB->next->next = common;

   cout << "List A: ";
   printList(headA);

   cout << "List B: ";
   printList(headB);

   Node* intersection = getIntersectionNode(headA, headB);

   if (intersection) {
       cout << "Intersection at node with value: " << intersection->data << endl;
   } else {
       cout << "No intersection found." << endl;
   }

   return 0;
}