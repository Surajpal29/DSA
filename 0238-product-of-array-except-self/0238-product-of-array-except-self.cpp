class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);

        for(int i=0;i<n;i++){
            if(i==0) v[i]=1;
            else{
                v[i]=v[i-1];
                v[i]*=nums[i-1];
            }
        }
        for(int i=n-2;i>=0;i--){
            v[i]*=nums[i+1];
            nums[i]*=nums[i+1];
        }
        return v;
    }
};