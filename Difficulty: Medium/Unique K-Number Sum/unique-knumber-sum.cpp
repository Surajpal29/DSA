class Solution {
  public:
  void helper(int num,int n,int k, vector<int>&curr,vector<vector<int>>& res){
      
      if(n==0 && curr.size()==k){
          res.push_back(curr);
          return;
      }
      
      if(n<0 || curr.size()>k || num>9) return;
      
      curr.push_back(num);
      helper(num+1,n-num,k,curr,res);
      curr.pop_back();
      
      helper(num+1,n,k,curr,res);
  }
    vector<vector<int>> combinationSum(int n, int k) {
        // code here
        vector<vector<int>>res;
        vector<int>curr;
        helper(1,n,k,curr,res);
        return res;
        
    }
};