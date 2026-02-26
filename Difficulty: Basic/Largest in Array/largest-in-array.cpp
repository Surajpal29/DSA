class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest=INT_MIN;
        for(auto it:arr) if(largest<it) largest=it;
        return largest;
    }
};
