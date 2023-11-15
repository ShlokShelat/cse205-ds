class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=NULL;
        if(root==NULL){
            return NULL;
        }
        if(root==p){
            return root;
        }
        if(root==q){
            return root;
        }
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        if(left==NULL && right==NULL){
            return ans;;
        }
        if(left!=NULL && right!=NULL){
            ans=root;
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