//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int mod=1e9+7;
	int count(int n, vector<int>&dp){
	    if(n==0) return 1;
	    if(n<0) return 0;
	    if(dp[n]!=-1) return dp[n];
	    return dp[n]=(count(n-1,dp)%mod+count(n-2,dp)%mod)%mod;
	}
		int nthPoint(int n){
		    // Code here
		    vector<int>dp(n+1,-1);
		    return count(n,dp);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends