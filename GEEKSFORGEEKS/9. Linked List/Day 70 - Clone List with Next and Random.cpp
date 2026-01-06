// Day 70 - Clone List with Next and Random

/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        if(!head) return NULL;
        
        Node* curr = head;
        while(curr) {
            Node* newNode = new Node(curr->data);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        curr = head;
        while(curr) {
            if(curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* clonedHead = head->next;
        Node* clone = clonedHead;
        while(clone->next) {
            curr->next = curr->next->next;
            clone->next = clone->next->next;
            curr = curr->next;
            clone = clone->next;
        }
        curr->next = NULL;
        clone->next = NULL;
        
        return clonedHead;
    }
};