// Day 82 - Diameter of a Binary Tree

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
    int height(Node* root, int& diameter) {
        if(!root) return 0;
        
        int l = height(root->left, diameter);
        int r = height(root->right, diameter);
        
        diameter = max(diameter, l + r);
        
        return 1 + max(l, r);
    }
    
    int diameter(Node* root) {
        // Your code here
        int ans = 0;
        height(root, ans);
        return ans;
    }
};