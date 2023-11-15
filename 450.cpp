class Solution {
public:
    TreeNode* maxi(TreeNode* root){
        TreeNode* temp=root;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(root->val==key){
            //0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            //1 child
            if(root->left!=NULL && root->right==NULL){
                TreeNode* left=root->left;
                delete root;
                return left;
            }
            if(root->left==NULL && root->right!=NULL){
                TreeNode* right=root->right;
                delete root;
                return right;
            }
            //2 child
            if(root->left!=NULL && root->right!=NULL){
                int maxfromleft=maxi(root->left)->val;
                root->val=maxfromleft;
                root->left=deleteNode(root->left,maxfromleft);
                return root;
            }
        }
        else if(root->val < key){
            root->right=deleteNode(root->right,key);
        }
        else{
            root->left=deleteNode(root->left,key);
        }
        return root;
    }
};