// 61. Rotate List

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
            ListNode* temp = head;
            int sz = 0;
            while (temp) {
                temp = temp->next;
                sz++;
            }
            return sz;
        }
    
        ListNode* rotateRight(ListNode* head, int k) {
            if (!head || !head->next || k == 0)
                return head;
    
            int length = getSize(head);
    
            ListNode* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = head;
    
            k = k % length; 
            int size = length - k;
            temp = head;
            for (int i = 1; i < size; i++) {
                temp = temp->next;
            }
    
            head = temp->next;
            temp->next = NULL; 
    
            return head;
        }
    };