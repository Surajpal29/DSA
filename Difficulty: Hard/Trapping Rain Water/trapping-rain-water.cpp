class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int index=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]>arr[index]) index=i;
        }
        
        int ta=0;
        int lm=0;
        for(int i=0;i<index;i++){
            lm=max(lm,arr[i]);
            ta+=lm-arr[i];
        }
        
        int rm=0;
        for(int i=n-1;i>index;i--){
            rm=max(rm,arr[i]);
            ta+=rm-arr[i];
        }
        
        return ta;
    }
};