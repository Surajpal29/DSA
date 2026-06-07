class Solution {
  public:
    
    void solve(int cnt,int n){
        if(cnt==n) return;
        cout<<cnt+1<<" ";
        solve(cnt+1,n);
    }
    void printTillN(int n) {
        // code here
        solve(0,n);
        
    }
};