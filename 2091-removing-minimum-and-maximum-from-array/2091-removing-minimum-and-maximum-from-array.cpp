class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n=nums.size();
        int min_ind=min_element(nums.begin(),nums.end())-nums.begin();
        int max_ind=max_element(nums.begin(),nums.end())-nums.begin();

        int l=min(min_ind,max_ind);
        int r=max(min_ind,max_ind);

        return min({r+1,n-l,l+1+n-r});
    }
};