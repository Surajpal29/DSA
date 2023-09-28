class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      int n=nums.size()-1;
      int i=0,j=n;
      while(i<j){
          if(nums[j]%2==0 && nums[i]%2!=0){
                 swap(nums[i],nums[j]);
                 i++;j--;
          }else if(nums[j]%2!=0) j--;
          else i++;
      }
      return nums;
    }
};