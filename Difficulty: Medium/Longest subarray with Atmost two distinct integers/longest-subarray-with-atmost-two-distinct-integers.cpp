class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int l=0,r=0,n,cnt=0,ans=INT_MIN;
        unordered_map<int,int>mp;
        n=arr.size();
        
        while(r<n){
            if(mp[arr[r]]==0) cnt++;
            mp[arr[r]]++;
            while(cnt>2){
                if(mp[arr[l]]==1) cnt--;
                mp[arr[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
       
    }
};