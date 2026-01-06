// Day 71 - Detect Loop in linked list

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        Node* slow = head;
        Node* fast = head;
        
        while(slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow) {
                return true;
            }
        }
        return false;
    }
};