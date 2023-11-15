class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=NULL;
        if(root==NULL){
            return NULL;
        }
        if(root->val==val){
            return root;
        }
        TreeNode* left=searchBST(root->left,val);
        TreeNode* right=searchBST(root->right,val);
        if(left==NULL && right==NULL){
            return ans;
        }
        if(left!=NULL && right==NULL){
            ans=left;
        }
        if(left==NULL && right!=NULL){
            ans=right;
        }
        return ans;
    }
};