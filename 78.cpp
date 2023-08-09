class Solution {
public:
void solve(vector<int> input,vector<int> output,int index,vector<vector<int>>& ans){
     if(index>=input.size()){
         ans.push_back(output);
         return ;
     }
     //exclude
     solve(input,output,index+1,ans);

    //include
    int element=input[index];
    output.push_back(element);
    solve(input,output,index+1,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};