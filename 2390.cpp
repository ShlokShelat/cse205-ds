class Solution {
public:
    string removeStars(string s) {
            string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                res=res+s[i];
            }
            else if(!res.empty()){
                res.pop_back();
            }
        }
        return res;
    }
};