class Solution {
public:
    void reverseString(vector<char>& st) {
        int s=0;
        int e=st.size()-1;
        while(s<=e){
            swap(st[s],st[e]);
            s++;
            e--;
        }
    }
};

//Recursive Approach
class Solution {
public:
    int s=0;
    int e;
    void solve(vector<char>& st,int s,int e){
        if(s>e){
            return;
        }
        swap(st[s],st[e]);
        solve(st,++s,--e);
    }
    void reverseString(vector<char>& st) {
        e=st.size()-1;
        return solve(st,s,e);
        }
    };