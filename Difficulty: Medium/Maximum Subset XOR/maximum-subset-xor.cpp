class Solution {
  public:
    int maxSubsetXOR(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        int index=0;
        
        for(int bit=31;bit>=0;bit--){
            int maxind=-1;
            
            for(int i=index;i<n;i++){
                if(arr[i] & (1<<bit)){
                    maxind=i;
                    break;
                }
            }
            
            if(maxind==-1) continue;
            
            swap(arr[index],arr[maxind]);
            
            for(int i=0;i<n;i++){
                if(i!=index && ( arr[i] & (1<<bit))){
                    arr[i]^=arr[index];
                }
            }
            index++;
        }
        
        int ans=0;
        for(int it:arr){
            ans=max(ans,it^ans);
        }
        return ans;
    }
};