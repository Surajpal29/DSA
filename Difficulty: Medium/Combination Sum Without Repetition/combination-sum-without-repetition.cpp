class Solution {
  public:
    void helper(int ind,vector<int>&arr,int target,vector<int>&curr,vector<vector<int>>&res){
        
        if(target==0){
            res.push_back(curr);
            return;
        }
       
       for(int i=ind;i<arr.size();i++){
           if(i>ind && arr[i]==arr[i-1]) continue;
           if(arr[i]>target) break;
           curr.push_back(arr[i]);
           helper(i+1,arr,target-arr[i],curr,res);
           curr.pop_back();
       }
        
    }
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        // code here
        vector<vector<int>>res;
        vector<int>curr;
        
        sort(arr.begin(),arr.end());
        
        helper(0,arr,target,curr,res);
        
        return res;
    }
};