class Solution {
  public:
    
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        
        for(int ind=0;ind<s.size();ind++){
            if(s[ind]=='{'||s[ind]=='('||s[ind]=='[') st.push(s[ind]);
            else{
                
                if(st.empty()) return false;
            
                if(s[ind]=='}' && st.top()=='{' || 
                   s[ind]==')' && st.top()=='(' ||
                   s[ind]==']' && st.top()=='[')
                        st.pop();
                else return false;   
            }
        }
        return st.empty();
    }
};