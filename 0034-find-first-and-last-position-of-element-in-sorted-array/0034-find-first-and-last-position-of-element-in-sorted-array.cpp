class Solution {
private:

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int fI=-1,lI=-1;
        if(nums.size()==1){
            if(nums[0]==target)
            {
                fI=lI=0;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
            {
                fI=i;
                break;
            }
        }
        
        for(int i=fI;i<nums.size();i++){
            if(nums[i]==target)
            {
                lI=i;
                
            }
        }
        // int arr[2];
        ans.push_back(fI);
        ans.push_back(lI);

        return ans;
    }
};