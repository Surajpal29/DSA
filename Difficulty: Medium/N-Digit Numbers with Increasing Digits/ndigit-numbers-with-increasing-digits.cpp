class Solution {
  public:
    void solve(int n,int last_digit,int current_num,vector<int>&ans){
        if(n==0){
            ans.push_back(current_num);
            return;
        }
        for(int i=last_digit+1;i<=9;i++){
            solve(n-1,i,current_num*10+i,ans);
        }
    }
    vector<int> increasingNumbers(int n) {
        // code here
        vector<int>ans;
        
        if(n==1) return {0,1,2,3,4,5,6,7,8,9};
          
        if(n>9) return ans;
        
        solve(n,0,0,ans);
        return ans;
    }
};