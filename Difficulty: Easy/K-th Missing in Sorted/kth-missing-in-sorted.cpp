class Solution {
  public:
    int KthMissingElement(vector<int> &arr, int &k) {
        // Code here
        int n=arr.size();
        
        for(int i=0;i<n-1;i++){
            int missing_in_gap=arr[i+1]-arr[i]-1;
            
            if(k<=missing_in_gap) return arr[i]+k;
            
            k-=missing_in_gap;
        }
        return -1;
    }
};