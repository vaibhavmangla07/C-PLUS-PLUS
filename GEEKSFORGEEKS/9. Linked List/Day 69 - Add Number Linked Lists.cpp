// Day 69 - Add Number Linked Lists

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head) {
        Node* prev = NULL;
        while(head) {
            Node* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
    Node* removeLeadingZeros(Node* head) {
        while(head && head->data == 0) {
            head = head->next;
        }
        return head ? head : new Node(0);
    }
    
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        num1 = removeLeadingZeros(num1);
        num2 = removeLeadingZeros(num2);
        
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        Node* dummy = new Node(0);
        Node* temp = dummy;
        int carry = 0;
        
        while(num1 || num2 || carry) {
            int sum = carry;
            if(num1) {
                sum += num1->data;
                num1 = num1->next;
            }
            if(num2) {
                sum += num2->data;
                num2 = num2->next;
            }
            carry = sum / 10;
            temp->next = new Node(sum % 10);
            temp = temp->next;
        }
        return reverse(dummy->next);
    }
};