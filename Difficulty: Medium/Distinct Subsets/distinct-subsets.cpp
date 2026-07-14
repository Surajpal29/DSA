class Solution {
  public:
    void helper(int ind,vector<int>&arr,vector<int>&curr,vector<vector<int>>&res){
        res.push_back(curr);
        
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            
            
        
        curr.push_back(arr[i]);
        helper(i+1,arr,curr,res);
        curr.pop_back();
        }
        
    }
    vector<vector<int>> findSubsets(vector<int>& arr) {
        
        // code here
        vector<vector<int>>res;
        vector<int>curr;
        
        sort(arr.begin(),arr.end());
        
        
        helper(0,arr,curr,res);
        
        return res;
    }
};