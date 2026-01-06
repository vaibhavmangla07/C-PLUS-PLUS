// 23. Merge k Sorted Lists

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
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            ListNode* dummy = new ListNode(0);
            ListNode* temp = dummy;
            
            while (l1 != nullptr && l2 != nullptr) {
                if (l1->val < l2->val) {
                    temp->next = l1;
                    l1 = l1->next;
                } else {
                    temp->next = l2;
                    l2 = l2->next;
                }
                temp = temp->next;
            }
            
            if (l1 != nullptr) temp->next = l1;
            if (l2 != nullptr) temp->next = l2;
            
            return dummy->next;
        }
        
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            if (lists.empty()) return nullptr;
            
            while (lists.size() > 1) {
                vector<ListNode*> mergedLists;
                for (int i = 0; i < lists.size(); i += 2) {
                    if (i + 1 < lists.size()) {
                        mergedLists.push_back(mergeTwoLists(lists[i], lists[i + 1]));
                    } else {
                        mergedLists.push_back(lists[i]);
                    }
                }
                lists = mergedLists;
            }
            
            return lists[0];
        }
    };
    