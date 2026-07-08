class Solution {
  public:
    int helper(string&s1,string&s2,int ind1,int ind2,vector<vector<int>>&dp){
        if(ind1>=s1.length()) return s2.length()-ind2;
        if(ind2>=s2.length()) return s1.length()-ind1;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        
        if(s1[ind1]==s2[ind2]) return dp[ind1][ind2]=helper(s1,s2,ind1+1,ind2+1,dp);
        
        
        return dp[ind1][ind2]=1+ min({helper(s1,s2,ind1+1,ind2+1,dp),helper(s1,s2,ind1,ind2+1,dp),
        helper(s1,s2,ind1+1,ind2,dp)});
    }
    int editDistance(string& s1, string& s2) {
        // code here
        int n=s1.length(),m=s2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return helper(s1,s2,0,0,dp);
        
    }
};//media.geeksforgeeks.org/img-practice/chatIcon-1653561581.svg