// 19. Remove Nth Node From End of List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        int getSize(ListNode* head) {
            int sz = 0;
            ListNode* temp = head;
            while (temp != nullptr) {
                temp = temp->next;
                sz++;
            }
            return sz;
        }
    
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            int size = getSize(head);
            
            if (size == n) {
                ListNode* newHead = head->next;
                delete head;
                return newHead;
            }
    
            ListNode* temp = head;
            for (int i = 1; i < size - n; i++) {
                temp = temp->next;
            }
    
            ListNode* toDelete = temp->next;
            temp->next = temp->next->next;
    
            delete toDelete;
            return head;
        }
    };
    