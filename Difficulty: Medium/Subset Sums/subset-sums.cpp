class Solution {
  public:
    void solve(vector<int>&arr , int ind,int sum,vector<int>&result){
        if(ind==arr.size()) {
            result.push_back(sum);
            return;
        }
        sum+=arr[ind];
        solve(arr,ind+1,sum,result);
        sum-=arr[ind];
        solve(arr,ind+1,sum,result);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>result;
        solve(arr,0,0,result);
        return result;
    }
};