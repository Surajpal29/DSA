class Solution {
  public:
    long long pairAndSum(vector<int> &arr) {
        // code here
        long long ans=0;
        
        for(int bit=0;bit<31;bit++){
            long long cnt=0;
            
            for(int it:arr){
                if(it & (1LL << bit)) cnt++;
            }
            
            long long pairs=cnt * (cnt-1)/2;
            
            ans+=pairs*(1LL << bit);
        }
        return ans;
    }
};