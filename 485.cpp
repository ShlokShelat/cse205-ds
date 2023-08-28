class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        vector<int> ansarray;
        for(int i=0;i<nums.size();i++){
            while(i!=nums.size() && nums[i]!=0){
                ans++;
                i++;
            }
        ansarray.push_back(ans);
        ans=0;
        }
        cout << endl;

        int rightans=0;
        for(int i=0;i<ansarray.size();i++){
            if(ansarray[i]>rightans){
                rightans=ansarray[i];
            }
        }
        return rightans;
    }
};