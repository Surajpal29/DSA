class Solution {
public:
    

    int findDuplicate(vector<int>& nums) {
        int l=1,r=nums.size()-1;
        int cnt;
        while(r>=l){
            int mid=l+(r-l)/2;
            cnt=0;
            for(int n:nums){
                if(n<=mid)
                ++cnt;
            }
            if(cnt<=mid){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return l;
    }
};