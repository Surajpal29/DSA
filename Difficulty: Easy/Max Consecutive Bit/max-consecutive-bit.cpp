class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int ans=1;
        int cnt=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]) cnt++;
            
            else if(arr[i]!=arr[i-1]) cnt =1;
            
            if(cnt>ans) ans=max(ans,cnt);
            
        }
        return ans;
    }
};