class Solution {
  public:
    int maxTask(vector<int>& h, vector<int>& l) {
        // code here
        int n=h.size();
        int prev1=0,prev2=0;
        for(int i=0;i<n;i++){
            int curr=max(h[i]+prev2,l[i]+prev1);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};