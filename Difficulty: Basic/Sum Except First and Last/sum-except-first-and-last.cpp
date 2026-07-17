class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
        // code here
        if(arr.size()<=1) return 0;
        int ans=0;
        for(int i=1;i<arr.size()-1;i++) ans+=arr[i];
        return ans;
    }
};