class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int size=arr.size();
        int sum=0;
        for(auto it:arr) sum+=it;
        return sum/size;
    }
};