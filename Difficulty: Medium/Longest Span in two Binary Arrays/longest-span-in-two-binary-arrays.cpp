class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n=a1.size();
        unordered_map<int,int>ump;
        int ans=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=a1[i]-a2[i];
            if(sum==0) ans=i+1;
            if(ump.find(sum)!=ump.end()) ans=max(ans,i-ump[sum]);
            else ump[sum]=i;
        }
        return ans;
    }
};