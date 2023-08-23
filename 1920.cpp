class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> nums1;
        for(int i=0;i<nums.size();i++){
            int ans=nums[nums[i]];
            nums1.push_back(ans);
        }
        return nums1;
    }
};