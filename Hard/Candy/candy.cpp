//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        // code here
      if(N==0) return 0;
      int left[N];
      int right[N];
      
      left[0]=1;
      right[N-1]=1;
      for(int i=1;i<N;i++) left[i]=ratings[i]>ratings[i-1]?left[i-1]+1:1;
      for(int i=N-2;i>=0;i--) right[i]=ratings[i]>ratings[i+1]?right[i+1]+1:1;
      
      int ans=0;
      for(int i=0;i<N;i++) ans+=max(left[i],right[i]);
      
      return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends