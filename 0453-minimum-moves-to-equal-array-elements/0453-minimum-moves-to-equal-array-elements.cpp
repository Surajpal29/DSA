class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size(),mini=INT_MAX;
        int sum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<n;i++) mini=min(mini,nums[i]);
        return sum-(n*mini);
    }
};