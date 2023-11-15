class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            TreeNode* root=new TreeNode(val);
            return root;
        }
        if(val > root->val){
            root->right=insertIntoBST(root->right,val);
        }
        else{
            root->left=insertIntoBST(root->left,val);
        }
        return root;
    }
};