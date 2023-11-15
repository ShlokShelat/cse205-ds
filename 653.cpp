class Solution {
public:
    void inorder(TreeNode* root,vector<int>& ans){
        if(root==NULL){
            return ;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans);
        bool ans1=false;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]+ans[j]==k){
                ans1=true;
                break;
            }
            else if(ans[i]+ans[j]>k){
                j--;
            }
            else if(ans[i]+ans[j]<k){
                i++;
            }
        }
        return ans1;
    }
};