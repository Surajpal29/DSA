class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalsum=0;
        for(int num:nums) totalsum+=num;
        int maxlength=-1,currsum=0;
        for(int l=0,r=0;r<nums.size();r++){
            currsum+=nums[r];
            while(l<=r && currsum>totalsum-x) currsum-=nums[l++];
            if(currsum==totalsum-x) maxlength=max(maxlength,r-l+1);
        }
       return maxlength==-1?-1:nums.size()-maxlength;
    }
};