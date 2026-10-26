class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<int>>&grid,vector<vector<bool>>&vis,long long& sum){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0|| vis[i][j]) return;

        sum+=grid[i][j];
        vis[i][j]=1;

        dfs(i,j-1,n,m,grid,vis,sum);
        dfs(i,j+1,n,m ,grid,vis,sum);
        dfs(i-1,j,n,m,grid,vis,sum);
        dfs(i+1,j,n,m,grid,vis,sum);
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        int res=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long sum=0;
                if(grid[i][j]!=0 && !vis[i][j]){
                    dfs(i,j,n,m,grid,vis,sum);
                    if(sum%k==0) res++;
                }
            }
        }
        return res;
    }
};