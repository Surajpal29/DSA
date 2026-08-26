class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int res=1;
        if(arr.size()<2) return 1;
        int n=arr.size();
        
        int currMax=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>=currMax){
                res++;
                currMax=arr[i];
            }
        }
        return res;
    }
};