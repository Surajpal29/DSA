//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int k) {
        // Your code goes here
            int n=a.size(), sum=0;
        sort(a.begin(), a.end());
        set<vector<int>>ans;
        int l=0, r=n-1;
        for(int i=0;i<n-3;i++){
           for(int j=i+1;j<n-2;j++){
               l=j+1;
               r=n-1;
               if(i==j) continue;
               while(l<r){
                  if(i<j && j<l && l<r){
                      if(a[i]+a[j]+a[l]+a[r]==k){
                          ans.insert({a[i], a[j], a[l], a[r]});
                          l++;
                          r--;
                      }
                      else if(a[i]+a[j]+a[l]+a[r]>k) r--; 
                      else l++;
                  }else break;
               } 
           } 
        }
        vector<vector<int>> res(ans.begin(), ans.end());
       return res; 
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends