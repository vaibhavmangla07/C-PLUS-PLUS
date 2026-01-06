// 160. Intersection of Two Linked Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            if (!headA || !headB) {
                return NULL;
            }
    
            ListNode *ptrA = headA;
            ListNode *ptrB = headB;
    
            while (ptrA != ptrB) {
                ptrA = (!ptrA) ? headB : ptrA->next;
                ptrB = (!ptrB) ? headA : ptrB->next;
            }
            return ptrA = ptrB; 
        }
    };