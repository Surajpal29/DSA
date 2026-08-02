class Solution {
public:
    int solve(vector<int>& piles,int left,int right,vector<vector<int>>&dp){
        if(left==right) return piles[left];

        if(dp[left][right]!=NULL) return dp[left][right];

        int pickleft=piles[left]-solve(piles,left+1,right,dp);
        int pickright=piles[right]-solve(piles,left,right-1,dp);

        dp[left][right]=max(pickleft,pickright);
        return dp[left][right];
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>dp(n,vector<int>(n));
        return solve(piles,0,n-1,dp)>0;
    }
};