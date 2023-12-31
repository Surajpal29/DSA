//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
        sort(coins,coins+N);
        int sum=0;
        for(int i=0;i<N;i++) sum+=coins[i];
        vector<vector<bool>>dp(N+5,vector<bool>(sum+5,false));
        dp[0][0]=true;
        for(int i=1;i<=N;i++){
            for(int s=0;s<=sum;s++){
                if(s<coins[i-1]){
                    dp[i][s]=dp[i-1][s];
                }else{
                    dp[i][s] = dp[i-1][s] | dp[i-1][s-coins[i-1]];
                }
                if((s>0)&&(s%20==0 || s%24==0 ||s==2024) && dp[i][s]) return 1;
            }
        }
        return 0;
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends