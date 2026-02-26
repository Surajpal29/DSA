// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int ans=0;
        for(auto it:arr) ans+=it;
        return ans;
    }
};