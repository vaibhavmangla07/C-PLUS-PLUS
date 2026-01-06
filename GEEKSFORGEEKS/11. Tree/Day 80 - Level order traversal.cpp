// Day 80 - Level order traversal

/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        vector<vector<int>> ans;
        if(!root) {
            return ans;
        }
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            vector<int> level;
            for(int i = 0; i < q.size(); ++i) {
                Node* node = q.front();
                q.pop();
                level.push_back(node->data);
                
                if(node->left) {
                    q.push(node->left);
                }
                if(node->right) {
                    q.push(node->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};