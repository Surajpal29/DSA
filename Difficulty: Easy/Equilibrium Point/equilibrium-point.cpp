class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size()-1;
        
        int pref_sum=0;
        
        for(int it:arr) pref_sum+=it;
        
        int left_sum=0;
        
        for(int i=0;i<n;i++){
            int right_sum=pref_sum-left_sum-arr[i];
            
            if(right_sum==left_sum) return i;
            
            left_sum+=arr[i];
        }
        return -1;
    }
};