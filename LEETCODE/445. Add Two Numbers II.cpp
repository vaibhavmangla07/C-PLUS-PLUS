// 445. Add Two Numbers II

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
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            while (head != NULL) {
                ListNode* nextNode = head->next;
                head->next = prev;
                prev = head;
                head = nextNode;
            }
            return prev;
        }
    
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            l1 = reverseList(l1);
            l2 = reverseList(l2);
    
            ListNode* dummy = new ListNode(0);
            ListNode* temp = dummy;
            int carry = 0;
    
            while (l1 || l2 || carry) {
                int sum = carry;
    
                if (l1) {
                    sum += l1->val;
                    l1 = l1->next;
                }
                if (l2) {
                    sum += l2->val;
                    l2 = l2->next;
                }
    
                carry = sum / 10;
                temp->next = new ListNode(sum % 10);
                temp = temp->next;
            }
    
            return reverseList(dummy->next);
        }
    };
    