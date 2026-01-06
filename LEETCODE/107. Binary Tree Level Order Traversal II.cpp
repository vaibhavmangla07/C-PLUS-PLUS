// 107. Binary Tree Level Order Traversal II

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == nullptr) {
            return {};
        }
        vector<vector<int>> arr;
        queue<TreeNode*> q;

        q.push(root);
        q.push(nullptr);

        while(true) {
            vector<int> vec;
            while(q.front() != nullptr) {
                TreeNode* currNode = q.front();
                q.pop();
                vec.push_back(currNode->val);
                if(currNode->left != nullptr) {
                    q.push(currNode->left);
                }
                if(currNode->right != nullptr) {
                    q.push(currNode->right);
                }
            }
            arr.push_back(vec);
            q.pop();
            if(q.empty()) {
                break;
            }
            q.push(nullptr);
        }

        reverse(arr.begin(), arr.end());
        return arr;
    }
};