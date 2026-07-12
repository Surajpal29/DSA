class Solution {
  public:
    void helper(int ind,vector<int>&arr,vector<vector<int>>&res){
        if(ind==arr.size()-1){
            res.push_back(arr);
            return;
        }
        
        for(int i=ind;i<arr.size();i++){
            swap(arr[ind],arr[i]);
            helper(ind+1,arr,res);
            swap(arr[ind],arr[i]); //Backtrack
        }
    }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        vector<vector<int>>res;
        helper(0,arr,res);
        return res;
    }
};