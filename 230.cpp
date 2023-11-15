class Solution {
public:
    void inorder(TreeNode* root,vector<int>& ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);

    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        if(ans.size()>=1){
            return ans[k-1];
        }
        else{
            return NULL;
        }
    }
};