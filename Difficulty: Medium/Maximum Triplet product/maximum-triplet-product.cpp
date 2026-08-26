class Solution {
  public:
    int maxTripletProduct(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int prod=INT_MIN;
        if(arr[0]<0 && arr[1]<0)  prod=arr[0]*arr[1]*arr[n-1];
        
        return max(arr[n-1]*arr[n-2]*arr[n-3],prod);
        
    }
};