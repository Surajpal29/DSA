class Solution {
  public:
    
    int lis(vector<int>& arr) {
        // code here
        int res=1;
        int n=arr.size();
        vector<int>dp(n,1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i] && dp[j]+1>dp[i]) dp[i]=dp[j]+1;
            }
            if(dp[i]>res) res=dp[i];
        }
        return res;
    }
};