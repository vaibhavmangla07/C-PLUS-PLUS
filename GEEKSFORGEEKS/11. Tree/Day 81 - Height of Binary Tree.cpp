// Day 81 - Height of Binary Tree

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
        if(!node) return -1;
        return max(height(node->left), height(node->right)) + 1;
    }
};