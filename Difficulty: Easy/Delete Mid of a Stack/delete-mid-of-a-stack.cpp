class Solution {
  public:
    void solve(stack<int>& s,int mid){
        if(s.size()==mid) {
            s.pop();
            return;
        }
        
        int top=s.top();
        s.pop();
        solve(s,mid);
        s.push(top);
    }
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        
        int mid=(s.size()+1)/2;
        
        int top=s.top();
        s.pop();
        
        solve(s,mid);
        
        s.push(top);
        
    }
};