class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        int ans=0;
        sort(arr.begin(),arr.end());
        
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i]-1){
                continue;
            }
            ans++;
        }
        return ans+1;
    }
};
