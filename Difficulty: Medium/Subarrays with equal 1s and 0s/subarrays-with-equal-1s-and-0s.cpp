class Solution {
  public:
    int countSubarray(vector<int>& arr) {
        // code here
        int ans=0;
        int one=0,zero=0;
        
        unordered_map<int,int>hash;
        
        hash[0]=1;
        
        for(int it:arr){
            one+=(it==1)?1:0;
            zero+=(it==0)?1:0;
            ans+=hash[one-zero];
            hash[one-zero]++;
        }
        return ans;
    }
};