class Solution {
    bool isValid(string s) {
    stack<char> st;
    int i=0;

    do{
    if(s[i] == '(')
        {
        st.push(s[i]);
        i++;
        }
    else if(s[i] == ')')
        {
        if(!st.empty() && st.top() == '(')
            {
                st.pop();
                i++;
            }
            else
            return false;
        }
    }while(i<s.length());
            
    if(st.empty())
        return true;
    else
        return false;

    }
    void generateAllCombinations(int n, string curr, vector<string>& ans)
    {
        if(n == 0)
        {
         if(isValid(curr)) 
            ans.push_back(curr);
         return;  
        }
        curr += "(";
        generateAllCombinations(n-1,curr,ans);
        curr.pop_back(); 
        curr += ")";
        generateAllCombinations(n-1,curr,ans);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "";
        generateAllCombinations(2*n,curr,ans);
        return ans;
    }
};