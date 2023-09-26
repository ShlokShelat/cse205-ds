class Solution {
public:
    int summax=INT_MIN;
    int sum=0;
    int maximumWealth(vector<vector<int>>& accounts) {
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            if(sum>summax){
                summax=sum;
            }
            sum=0;
        }
        return summax;
    }
};