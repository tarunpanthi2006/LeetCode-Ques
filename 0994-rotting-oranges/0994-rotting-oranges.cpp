class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();
        while (1) {
            bool flag = false;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 2) {
                        if (j + 1 <= n - 1 && grid[i][j + 1] == 1) {
                            grid[i][j + 1] = 3;
                            flag = true;
                        }
                        if (j != 0 && grid[i][j - 1] == 1) {
                            grid[i][j - 1] = 3;
                            flag = true;
                        }
                        if (i != 0 && grid[i - 1][j] == 1) {
                            grid[i - 1][j] = 3;
                            flag = true;
                        }
                        if (i + 1 <= m - 1 && grid[i + 1][j] == 1) {
                            grid[i + 1][j] = 3;
                            flag = true;
                        }
                    }
                }
            }
            if (!flag) break;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 3) {
                        grid[i][j] = 2;
                    }
                }
            }
            count++;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) return -1; // Impossible to rot all
            }
        }
        return count;
    }
};