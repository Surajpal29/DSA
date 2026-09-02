class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        // code here
        int cnt_1=accumulate(arr.begin(),arr.end(),0);
        if(cnt_1==0) return -1;
        
        int l=0, cnt_0=0, swap=INT_MAX;
        for(int r=0;r<arr.size();r++){
            if(arr[r]==0) cnt_0++;
            if(r-l+1==cnt_1){
                swap=min(swap,cnt_0);
                if(arr[l]==0) cnt_0--;
                l++;
            }
        }
        return swap;
    }
};