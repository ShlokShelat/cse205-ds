class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }
    
    void inorder(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        
        // Traverse the left subtree
        inorder(node->left, result);
        
        // Visit the current node
        result.push_back(node->val);
        
        // Traverse the right subtree
        inorder(node->right, result);
    }
};