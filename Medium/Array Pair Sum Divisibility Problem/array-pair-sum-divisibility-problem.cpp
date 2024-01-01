//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
    
         int n=nums.size();
        if(n%2==1) return false;
        
        map<int,int>mp;
        int ans=0;
        
        
        for(auto &it:nums)
        {
            it= it%k; //to ensure we have (a+b)%k==0 we convert a to a%k and b to b%k
            //then we will need to check that case1) a==0 && b==0 or other case2) a=(k-b) because after taking the 
            //mod both a and b will become <k ,so for (a+b)%k==0  either of above two cases needs to 
            //be satisfied.
            // note k-b will be positive bcz b<k after taking mod
        }
        
        for(int i=0;i<n;i++)
        {
            int newVal= k-nums[i];
            
             if(nums[i]==0 && mp.find(0)!=mp.end()){ 
                 ans++;
                 mp.erase(0);
                 continue;
             }
           
         if(mp.find(newVal)!= mp.end())
            {
                ans++;
                mp.erase(newVal);
                
            }
            else{
                mp[nums[i]]++;
            }
        }
        return ans==(n/2);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends