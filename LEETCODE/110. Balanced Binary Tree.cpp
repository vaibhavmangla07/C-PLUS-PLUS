// 110. Balanced Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<int,bool> helper(TreeNode* root) {
        if(root == nullptr) {
            return make_pair(0, true);
        }

        pair<int,bool> leftInfo = helper(root->left);
        pair<int,bool> rightInfo = helper(root->right);

        int leftHt = leftInfo.first;
        int rightHt = rightInfo.first;

        if((!leftInfo.second || !rightInfo.second) || abs(leftHt-rightHt) > 1) {
            return make_pair(max(leftHt, rightHt)+1, false);
        }

        return make_pair(max(leftHt, rightHt)+1, true);
    }

    bool isBalanced(TreeNode* root) {
        return helper(root).second;
    }
};