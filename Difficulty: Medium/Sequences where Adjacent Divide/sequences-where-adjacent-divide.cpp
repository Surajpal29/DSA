class Solution {
public:
    int count(int n, int m) {
        // dp[i][j] = number of sequences of length i ending with value j
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        
        // Base case: sequences of length 1 ending with any j from 1 to m
        for (int j = 1; j <= m; j++) {
            dp[1][j] = 1;
        }
        
        // Fill DP table for lengths 2 to n
        for (int len = 2; len <= n; len++) {
            for (int last = 1; last <= m; last++) {
                for (int prev = 1; prev <= m; prev++) {
                    // Check if adjacent elements divide each other
                    if (last % prev == 0 || prev % last == 0) {
                        dp[len][last] += dp[len - 1][prev];
                    }
                }
            }
        }
        
        // Sum up all valid sequences of length n
        int totalCount = 0;
        for (int j = 1; j <= m; j++) {
            totalCount += dp[n][j];
        }
        
        return totalCount;
    }
};