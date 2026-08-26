class Solution {
  public:
    int unvisitedLeaves(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        vector<bool>visited(k+1,0);
        
        for(int i=0;i<n;i++){
            int frogjump=arr[i];
            if(frogjump==1) return 0;
            
            if(frogjump>k || visited[frogjump]) continue;
            
            for(int step=frogjump;step<=k;step+=frogjump) visited[step]=true;
        }
        int res=0;
        for(int i=1;i<=k;i++){
            if(visited[i]==0) res++;
        }
        return res;
    }
};