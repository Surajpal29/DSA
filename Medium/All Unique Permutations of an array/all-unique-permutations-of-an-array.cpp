//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void solve(vector<int>&arr,int n,int ind,set<vector<int>>&st){
        if(ind==n-1){
            st.insert(arr);
            return;
        }
        for(int j=ind;j<n;j++){
            swap(arr[ind],arr[j]);
            solve(arr,n,ind+1,st);
            swap(arr[ind],arr[j]);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>>ans;
        set<vector<int>>st;
        solve(arr,n,0,st);
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends