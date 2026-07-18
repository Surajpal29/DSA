class Solution {
  public:
    int helper(int start,vector<int>&arr, int end){
        int prev1=0,prev2=0;
        
        for(int i=start;i<=end;i++){
            int pick=arr[i]+prev2;
            int skip=prev1;
            int curr=max(pick,skip);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
    int maxValue(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        if(n==1) return arr[0];
        if(n==2) return max(arr[0],arr[1]);
        
        int ans1=helper(0,arr,n-2);
        
        int ans2=helper(1,arr,n-1);
        
        return max(ans1,ans2);
    }
};
