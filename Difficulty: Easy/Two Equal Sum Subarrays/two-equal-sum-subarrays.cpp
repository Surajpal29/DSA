class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int pref_sum=0;
        
        for(auto it:arr) pref_sum+=it;
        
        if(pref_sum%2!=0) return false;
        
        pref_sum/=2;
        
        for(int it:arr){
            pref_sum-=it;
            if(pref_sum==0) return 1;
        }
        return 0;
    }
};
