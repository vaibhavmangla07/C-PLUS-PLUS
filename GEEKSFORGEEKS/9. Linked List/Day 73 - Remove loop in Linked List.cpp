// Day 73 - Remove loop in Linked List

/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
public:
    void removeLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                break;
            }
        }

        if(fast == nullptr || fast->next == nullptr) {
            return;
        }

        slow = head;

        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        while(slow->next != fast) {
            slow = slow->next;
        }
        slow->next = nullptr;
    }
};
