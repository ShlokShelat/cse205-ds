class Solution {
public:
    TreeNode* prev=nullptr;
    TreeNode* first=nullptr;
    TreeNode* second=nullptr;
    void inorder(TreeNode* curr){
        if(!curr){
            return;
        }
        inorder(curr->left);
        if(prev!=NULL && curr->val<prev->val){
            if(first==NULL){
                first=prev;
            }
                second=curr;
        }
        prev=curr;
        inorder(curr->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        int temp=first->val;
        first->val=second->val;
        second->val=temp;
    }
};