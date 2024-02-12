//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int mod=1e9+7;
    long long sequence(int n){
        // code here
        long long a=1,sum=0;
        for(int i=1;i<=n;i++){
            long long j=i,s=1;
            while(j--){
                s=(s*a++)%mod;
            }
            sum=(sum+s)%mod;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends