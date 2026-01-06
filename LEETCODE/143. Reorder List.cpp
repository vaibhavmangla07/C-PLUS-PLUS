// 143. Reorder List

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
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if(!head->next) {
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        ListNode* temp = head;

        while(fast && fast->next) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = nullptr;

        ListNode* head2 = reverseList(slow);

        temp = head;
        ListNode* temp2 = head2;

        while(temp && temp2) {
            ListNode* next = temp->next;
            temp->next = temp2;
            temp2 = temp2->next;
            if(!next) {
                return;
            }
            temp->next->next = next;
            temp = temp->next->next;
        }
    }
};