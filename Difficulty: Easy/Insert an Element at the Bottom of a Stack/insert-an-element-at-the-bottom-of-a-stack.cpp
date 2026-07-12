class Solution {
  public:
    void helper(stack<int>&st,int x){
        if(st.empty()) return st.push(x);
        
        int temp=st.top();
        st.pop();
        helper(st,x);
        st.push(temp);
    }
    stack<int> insertAtBottom(stack<int> st, int x) {
        int n=st.size();
        helper(st,x);
        return st;
    }
};