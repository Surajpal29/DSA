class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int>ans;
       if(nums.size()<=1) return nums;
       if(nums.size()==2){
           if(nums[0]!=nums[1])
           return nums;
           if(nums[0]==nums[1])
           { ans.push_back(nums[0]);
           return ans;
           }
       }
       int cnt=0;
       int n=nums.size();
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-1;i++){
           if(nums[i]!=nums[i+1])
           cnt=0;
           if(nums[i]==nums[i+1])
           cnt++;
           if(cnt==n/3)
           ans.push_back(nums[i]);
       } 
       return ans;
    }
};