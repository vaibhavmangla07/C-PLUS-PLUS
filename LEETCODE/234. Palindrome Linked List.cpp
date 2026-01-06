// 234. Palindrome Linked List

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
            ListNode* curr = head;
    
            while (curr != NULL) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
    
        bool isPalindrome(ListNode* head) {
            if (!head || !head->next) {
                return true;
            }
    
            ListNode* slow = head;
            ListNode* fast = head;
    
            while (fast != NULL && fast->next != NULL) {
                slow = slow->next;
                fast = fast->next->next;
            }
    
            ListNode* newHead = reverseList(slow);
            ListNode* firstHalf = head;
            ListNode* secondHalf = newHead;
    
            while (secondHalf != NULL) {
                if (firstHalf->val != secondHalf->val) {
                    reverseList(newHead); 
                    return false;
                }
                firstHalf = firstHalf->next;
                secondHalf = secondHalf->next;
            }
            reverseList(newHead);
            return true;
        }
    };