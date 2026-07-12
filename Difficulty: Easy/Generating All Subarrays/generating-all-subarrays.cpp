class Solution {
  public:
    
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>>res;
        int n=arr.size()-1;
        
        for(int i=0;i<=n;i++){
            vector<int>curr;
            for(int j=i;j<=n;j++){
                curr.push_back(arr[j]);
                res.push_back(curr);
            } 
        }
        return res;
    }
};