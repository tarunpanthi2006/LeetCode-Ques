class Solution {
public:
    void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int& ans, queue<pair<int, int>>& q) {
        int m = grid.size();
        int n = grid[0].size();
        while (q.size() > 0) { // iss loop se sabhi rotten otranges ek saarth dekh lenge per minute
            int size = q.size();
            bool rotted = false;
            while (size > 0) { // current minute mein saare oranges ko dekh lenge
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                for (int delrow = -1; delrow <= 1; delrow++) {
                    for (int delcol = -1; delcol <= 1; delcol++) {
                        int nrow = delrow + r;
                        int ncol = delcol + c;
                        if (nrow == r || ncol == c) {
                            if (nrow >= 0 && nrow < m && ncol >= 0 &&
                                ncol < n && grid[nrow][ncol] == 1 &&
                                vis[nrow][ncol] == 0) {
                                grid[nrow][ncol] = 2;
                                vis[nrow][ncol] = 1;
                                q.push({nrow, ncol});
                                rotted = true;
                            }
                        }
                    }
                }
                size--;
            }
            if (rotted)
                ans++;
        }
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        queue<pair<int, int>> q;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2 && vis[i][j] == 0) {
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }
        bfs(grid, vis, ans, q);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1)
                    return -1;
            }
        }
        return ans;
    }
};