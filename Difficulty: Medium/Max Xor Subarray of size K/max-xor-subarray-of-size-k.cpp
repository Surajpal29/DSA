class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int ans=INT_MIN;
        int xorr=0;
        int n=arr.size();
        for(int i=0;i<k;i++){
            xorr=xorr^arr[i];
        }
        ans=max(ans,xorr);
        for(int i=k;i<n;i++){
            xorr=xorr^arr[i];
            xorr=xorr^arr[i-k];
            ans=max(ans,xorr);
            
        }
        return ans;
    }
};