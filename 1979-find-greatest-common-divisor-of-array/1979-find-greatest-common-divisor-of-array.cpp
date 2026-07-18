class Solution {
public:
    int findGCD(vector<int>& nums) {
        int large=INT_MIN,small=INT_MAX;
        for(int i=0;i<nums.size();i++){
            large=max(large,nums[i]);
            small=min(small,nums[i]);
        }
        int div=small;
        while(div>0){
            if(small%div==0 && large%div==0) return div;
            div--;
        }
        return 1;
    }
};