class Solution {
  public:
    bool ternarySearch(vector<int> &arr, int x) {
        // code here
        int left=0,right=arr.size()-1;
        
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]==x) return true;
            else if(arr[mid]<x)left=mid+1;
            else right=mid-1;
        }
        return false;
    }
};