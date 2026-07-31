class Solution {
public:
    int longCommSubstr(string& s1, string& s2) {
        int n = s1.size();
        int m = s2.size();
        
        // dp[i][j] stores length of longest common suffix of s1[0..i-1] and s2[0..j-1]
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        int res = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    res = max(res, dp[i][j]);
                } else {
                    dp[i][j] = 0;
                }
            }
        }

        return res;
    }
};