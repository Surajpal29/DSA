class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto x:connections){
            adj[x[0]].push_back({x[1],1});
            adj[x[1]].push_back({x[0],0});
        }
        queue<int>q;
        vector<int>vis(n,-1);
        q.push(0);
        vis[0]=0;
        int ans=0;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(auto x:adj[curr]){
                if(vis[x.first]==-1){
                    vis[x.first]=vis[curr]+1;
                    ans+=x.second;
                    q.push(x.first);
                }
            }
        }
        return ans;
    }
};