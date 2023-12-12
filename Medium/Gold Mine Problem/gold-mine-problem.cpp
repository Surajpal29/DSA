//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
        int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int maxi = INT_MIN;
        for(int i=0;i<n;++i){
            int ans = solve(i,0,n,m,M,dp);
            maxi = max(maxi,ans);
        }
        return maxi;
    }
    int solve(int x,int y,int n,int m,vector<vector<int>>&M,vector<vector<int>>&dp){
        if(x<0 || y<0 || x>=n || y>=m){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        return dp[x][y]  = M[x][y] + max(solve(x,y+1,n,m,M,dp),max(solve(x-1,y+1,n,m,M,dp),solve(x+1,y+1,n,m,M,dp)));
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends