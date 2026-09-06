class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero_cnt=0,one_cnt=0,two_cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero_cnt++;
            else if(nums[i]==1) one_cnt++;
            else two_cnt++;
        }

        for(int i=0;i<nums.size();i++){
            if(zero_cnt){
                 nums[i]=0;
                 zero_cnt--;
            }
            else if(one_cnt){
                nums[i]=1;
                one_cnt--;
            }
            else nums[i]=2;
        }
    }
};