class Solution {
  public:
    bool canplace(vector<int>& stalls, int cow,int d){
        int cnt=1;
        int lastpos=stalls[0];
        
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-lastpos>=d){
                cnt++;
                lastpos=stalls[i];
            }
            
            if(cnt>=cow) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        
        int n=stalls.size();
        int low=1,high=stalls.back()-stalls.front();
        int ans=0;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(canplace(stalls,k,mid)){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        return ans;
    }
};