class Solution {
public:
    int findpos(vector<int>& inorder,int element,int n){
        for(int i=0;i<n;i++){
            if(inorder[i]==element){
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>& inorder,vector<int>& preorder,int &preindex,int inorderstart,int inorderend,int n){
        if(preindex>=n || inorderstart>inorderend){
            return NULL;
        }
        int element=preorder[preindex++];
        TreeNode* root=new TreeNode(element);
        int pos=findpos(inorder,element,n);
        root->left=solve(inorder,preorder,preindex,inorderstart,pos-1,n);
        root->right=solve(inorder,preorder,preindex,pos+1,inorderend,n);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder;
        vector<int> help;
        help=preorder;
        sort(help.begin(),help.end());
        inorder=help;
        int preindex=0;
        int n=inorder.size();
        TreeNode* ans=solve(inorder,preorder,preindex,0,n-1,n);
        return ans;
    }
};
