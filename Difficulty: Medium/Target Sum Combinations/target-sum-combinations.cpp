class Solution {
  public:
    void helper(int ind,vector<int>&arr,int target, vector<int>& curr, vector<vector<int>>& res){
        if(target==0){
            res.push_back(curr);
            return;
        }
        if(target<0 ||  ind==arr.size()) return;
        
        if(target>=arr[ind]){
             curr.push_back(arr[ind]);
             helper(ind,arr,target-arr[ind],curr,res);
             curr.pop_back();
        }
        
        helper(ind+1,arr,target,curr,res);
       
    }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<vector<int>>res;
        vector<int>curr;
        helper(0,arr,target,curr,res);
        return res;
    }
};