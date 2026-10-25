class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<int>>& grid) {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 1) return;
        
        // Mark as visited by changing land to water
        grid[i][j] = 1;
        
        dfs(i - 1, j, n, m, grid);
        dfs(i + 1, j, n, m, grid);
        dfs(i, j - 1, n, m, grid);
        dfs(i, j + 1, n, m, grid);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // 1. Eliminate all lands connected to the top and bottom borders
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 0) dfs(0, j, n, m, grid);
            if (grid[n - 1][j] == 0) dfs(n - 1, j, n, m, grid);
        }
        
        // 2. Eliminate all lands connected to the left and right borders
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 0) dfs(i, 0, n, m, grid);
            if (grid[i][m - 1] == 0) dfs(i, m - 1, n, m, grid);
        }
        
        // 3. Count remaining closed islands
        int res = 0;
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < m - 1; j++) {
                if (grid[i][j] == 0) {
                    res++;
                    dfs(i, j, n, m, grid);
                }
            }
        }
        
        return res;
    }
};