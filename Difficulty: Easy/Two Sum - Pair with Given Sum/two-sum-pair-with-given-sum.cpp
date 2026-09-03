class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int>st;
        for(auto it:arr){
            if(st.count(target-it)) return true;
            else st.insert(it);
        }
        return false;
    }
};