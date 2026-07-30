class Solution {
  public:
    bool issafe(int i,int j,int n,int m){
        return (i>=0 && i<n && j>=0 && j<m);
    }
    void helper(int i,int j,vector<vector<bool>>& vis,vector<vector<char>>& grid,int n,int m){
       
        vector<vector<int>>d={{0,-1},{0,1},{1,0},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
        
        vis[i][j]=1;
        
        for(int k=0;k<8;k++){
            int newi=i+d[k][0];
            int newj=j+d[k][1];
            
            if(issafe(newi,newj,n,m) && !vis[newi][newj] && grid[newi][newj]=='L'){
                helper(newi,newj,vis,grid,n,m);
            }
        }
    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int res=0;
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='L'){
                helper(i,j,vis,grid,n,m);
                res++;
                }
            }
        }
        return res;
    }
};