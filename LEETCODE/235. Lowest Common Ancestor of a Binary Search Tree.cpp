// 235. Lowest Common Ancestor of a Binary Search Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) {
            return nullptr;
        }

        if(root == p || root == q) {
            return root;
        }

        int maxVal = max(p->val, q->val);
        int minVal = min(p->val, q->val);

        if(root->val < maxVal && root->val > minVal) {
            return root;
        }

        if(root->val > maxVal) {
            return lowestCommonAncestor(root->left, p, q);
        }

        return lowestCommonAncestor(root->right, p, q);
    }
};