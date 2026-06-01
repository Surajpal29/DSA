class Solution {
  public:
    int findMaxProduct(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==1) return arr[0];
        
        long long int mod=1e9+7;
        long long int prod=1;
        
        int max_neg=INT_MIN;
        int cnt_neg=0,cnt_zero=0,cnt_pos=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cnt_zero++;
                continue;
            }
            if(arr[i]<0){
                cnt_neg++;
                max_neg=max(max_neg,arr[i]);
            }else{
                cnt_pos++;
            }
            prod=(prod*arr[i])%mod;
        }
        if(cnt_zero==n || cnt_neg==1 && cnt_zero+cnt_neg==n) return 0;
        
        if(cnt_neg%2!=0){
            prod=1;
            int skipped=0;
            for(int i=0;i<n;i++){
                if(arr[i]==0) continue;
                if(arr[i]==max_neg && !skipped){
                    skipped=1;
                    continue;
                }
                prod=(prod*arr[i])%mod;
            }
        }
        return (prod+mod)%mod;
    }
};
