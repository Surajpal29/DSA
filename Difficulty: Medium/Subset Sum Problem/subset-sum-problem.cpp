class Solution {
  public:
    int dp[201][10001];
    bool helper(int ind,vector<int>&arr,int sum){
        if(sum==0) return true;
        
        if(ind>=arr.size() || sum<0) return false;
        
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        
        bool skip = helper(ind+1,arr,sum);
        
        bool take =0;
        if(arr[ind]<=sum) take=helper(ind+1,arr,sum-arr[ind]);
        return dp[ind][sum]= skip||take;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        memset(dp,-1,sizeof(dp));
        return helper(0,arr,sum);
    }
};