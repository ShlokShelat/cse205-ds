class Solution {
public:
    bool isValid(string s) {
    stack<char> stacki;
     for(int i=0; i<s.length(); i++) {
         
         char ch = s[i];
         
         //if opening bracket, stack push
         //if close bracket, stacktop check and pop
         
         if(ch == '(' || ch == '{' || ch == '['){
             stacki.push(ch);
         }
         else
         {
             //for closing bracket
             if(!stacki.empty()) {
                  char top = stacki.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      stacki.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
    
    if(stacki.empty())
        return true;
    else
        return false;

    }
};