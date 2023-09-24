//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
   string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        if(N==1){
            return arr[0];
        }
        string ans="";
        int currPrefix=0;
        int mx = INT_MAX;
        string com = arr[0];
        for(int i=1;i<N;i++){
            string temp = arr[i];
            for(int j=0;j<temp.length();j++){
                if(com[j]==temp[j]){
                    currPrefix++;
                }else{
                    break;
                }
            }
            mx = min(currPrefix,mx);
            currPrefix=0;
        }
        for(int i=0;i<mx;i++){
            ans+=com[i];
        }
        return ans.length()==0?"-1":ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends