//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        // Your code here
        int left=0,right=0;
        vector<int>ans;
        int maxi=0;
        
        for(int i=0;i<n;i++){
            maxi=maxi+arr[i];
            
            if(maxi==s){
                ans.push_back(left+1);
                ans.push_back(i+1);
                break;
            }
            
            else if(maxi>s){
                while(maxi>s){
                    maxi-=arr[left];
                    left++;
                }
                if(maxi==s && i>=left){
                    ans.push_back(left+1);
                    ans.push_back(i+1);
                    break;
                }
            }
        }
        if(ans.size()==0) return {-1};
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends