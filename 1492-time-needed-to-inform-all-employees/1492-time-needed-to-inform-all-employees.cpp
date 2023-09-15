class Solution {
public:
unordered_map<int,vector<int>>umap;
int ans=0,mx=0;
     void dfs(int manager,vector<int>& informtime){
         mx=max(mx,ans);
         for(auto employee:umap[manager]){
             ans+=informtime[manager];
             dfs(employee,informtime);
             ans-=informtime[manager];
         }
     }

    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        for(int i=0;i<n;i++){
            int val=manager[i];
            if(val!=-1) umap[val].push_back(i);
        }
    dfs(headID,informTime);
    return mx;
    }
};