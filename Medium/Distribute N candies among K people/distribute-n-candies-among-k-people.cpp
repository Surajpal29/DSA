//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    vector<long long> distributeCandies(int N, int K) {
        // code here
        vector<long long>arr(K,0);
        int i=0,cnt=1;
        
        while(N>0){
            if(N-cnt>0){
                arr[i]+=cnt;
                N=N-cnt;
            }else if(N-cnt==0){
                arr[i]+=cnt;
                break;
            }else{
                arr[i]+=N;
                break;
            }
            i=(i+1)%(K);
            cnt++;
        }
       
       
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        
        Solution ob;
        vector<long long> res = ob.distributeCandies(N,K);
        
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends