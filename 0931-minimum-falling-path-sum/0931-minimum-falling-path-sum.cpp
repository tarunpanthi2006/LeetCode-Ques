class Solution {
public:
    int f(int row, int col, vector<vector<int>>& matrix,
          vector<vector<int>>& dp) {

        int n = matrix.size();

        if (col < 0 || col >= n)
            return INT_MAX;

        if (row == 0)
            return matrix[0][col];

        if (dp[row][col]!=INT_MIN)
            return dp[row][col];
        int left = f(row - 1, col - 1, matrix, dp);
        int up = f(row - 1, col, matrix, dp);
        int right = f(row - 1, col + 1, matrix, dp);

        int best = min({left, up, right});

        if (best == INT_MAX)
            return dp[row][col] = INT_MAX;

        return dp[row][col] = matrix[row][col] + best;
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> dp(n, vector<int>(n,INT_MIN));
        int ans = INT_MAX;

        for (int j = 0; j < n; j++) {
            ans = min(ans, f(n - 1, j, matrix, dp));
        }

        return ans;
    }
};