class Solution {
  public:
    int cntSpecialNum(vector<int>& arr) {
        // code here
        int res=0;
        int n=arr.size();
        
        int max_val=0;
        
        for(auto it:arr) max_val=max(it,max_val);
        
        vector<int>freq(max_val+1,0);
        
        for(int x:arr) freq[x]++;
        
        vector<bool>isSpecial(max_val+1,0);
        
        for(int i=1;i<=max_val;i++){
            if(freq[i]>0){
                if(freq[i]>1) isSpecial[i]=1;
                for(int j=2*i;j<=max_val;j+=i) isSpecial[j]=1;
            }
        }
        
        // int res=0;
        for(auto x:arr){
            if(isSpecial[x]) res++;
        }
        return res;
    }
};
