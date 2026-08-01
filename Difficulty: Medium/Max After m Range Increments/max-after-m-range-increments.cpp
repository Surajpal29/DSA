class Solution {
  public:
    int findMax(int n, vector<int>& a, vector<int>& b, vector<int>& k) {
        // code here
        vector<int>arr(n+1,0);
        
        int m=a.size();
        
        for(int i=0;i<m;i++){
            int l=a[i],r=b[i],val=k[i];
            
            arr[l]+=val;
            arr[r+1]-=val;
        }
        int ans=arr[0];
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
            ans=max(ans,arr[i]);
        }
        return ans;
    }
};