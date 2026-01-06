// 2807. Insert Greatest Common Divisors in Linked List

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
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while (curr && curr->next) {
            int gcdVal = gcd(curr->val, curr->next->val);
            ListNode* newNode = new ListNode(gcdVal);

            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        return head;
    }
};
