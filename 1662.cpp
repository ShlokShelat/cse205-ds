class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        vector<string> temp1;
        vector<string> temp2;
        string ans;
        string ans1;
        for(int i=0;i<word1.size();i++){
            ans=ans+word1[i];
        }
        for(int j=0;j<word2.size();j++){
            ans1=ans1+word2[j];
        }
        if(ans==ans1){
            return true;
        }
        else{
            return false;
        }
    }
};