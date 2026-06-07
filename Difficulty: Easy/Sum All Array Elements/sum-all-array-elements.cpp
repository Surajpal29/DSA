class Solution {
  public:
    void solve(vector<int>& arr, int& ans,int start,int size) {
        if(start==size) {
            ans+=arr[start];
            return;
        }
        ans+=arr[start];
        solve(arr,ans,start+1,size);
    }
    int arraySum(vector<int>& arr) {
        // code here
        int ans=0;
        int n=arr.size();
        solve(arr,ans,0,n-1);
        return ans;
    }
};