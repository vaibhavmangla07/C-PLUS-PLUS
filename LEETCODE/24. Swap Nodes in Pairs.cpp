// 24. Swap Nodes in Pairs

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
        ListNode* swapPairs(ListNode* head) {
            if (!head || !head->next) {
                return head;
            }
            ListNode* first = head;
            ListNode* second = head->next;
    
            while (true) {
                int temp = first->val;
    
                first->val = second->val;
                second->val = temp;
                first = first->next->next;
    
                if (!second->next || !second->next->next) {
                    break;
                }
                second = second->next->next;
            }
            return head;
        }
    };