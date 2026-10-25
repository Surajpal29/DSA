class Solution {
public:
    int dfs(int row,int col,int n,int m,vector<vector<int>>&grid,vector<vector<int>>&vis){
        if(row>=n || col>=m || row<0 || col<0) return 0;

        if(row==n-1 && col==m-1) return 1;

        if(vis[row][col]!=-1) return vis[row][col];

        if(grid[row][col]==1) return vis[row][col]=0;

        int down=dfs(row+1,col,n,m,grid,vis);
        int right=dfs(row,col+1,n,m,grid,vis);

        return vis[row][col]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n= obstacleGrid.size();
        int m= obstacleGrid[0].size();

        if( obstacleGrid[0][0]==1 ||  obstacleGrid[n-1][m-1]==1) return 0;

        vector<vector<int>>vis(n,vector<int>(m,-1));

        int ans=dfs(0,0,n,m, obstacleGrid,vis);

        return ans;
    }
};