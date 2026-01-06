// 86. Partition List

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
    ListNode* addNode(ListNode* head, int n) {
        if(head->val == 999) { 
            head->val = n;
            return head;
        }
        ListNode* newNode = new ListNode(n);
        head->next = newNode;
        head = newNode;
        return head;
    }

    ListNode* partition(ListNode* head, int x) {
        if(head == nullptr) return head;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        vector<int> arr;

        ListNode* newList = new ListNode(999);
        ListNode* temp = newList;

        while(curr != nullptr) {
            if(curr->val >= x) {
                temp = addNode(temp, curr->val);

                if(prev == nullptr) {    
                    head = curr->next;
                    curr = head;
                    continue;
                }
                prev->next = curr->next;
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        if(prev == nullptr) { 
            return newList;
        }
        if(newList->val == 999) {  
            return head;
        }
        prev->next = newList;
        return head;
    }
};