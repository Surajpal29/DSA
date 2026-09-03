class Solution {
  public:
    int maxDiffSum(vector<int>& arr) {
        // code here
        int keep =0,change = 0;

        for(int i=1;i<arr.size();i++){
            int newKeep = max(
                keep+abs(arr[i-1]-arr[i]),
                change+abs(1-arr[i]));
            int newChange=max(
                keep+abs(arr[i-1]-1),
                change+abs(1-1));

            keep = newKeep;
            change = newChange;
        }
        return max(keep,change);
    }
};