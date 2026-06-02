class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int ans=arr.size();
        int left=0,right=ans-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(arr[mid]<target) left=mid+1;
            else{
                ans=mid;
                right=mid-1;
            }
        }
        return ans;
    }
};
