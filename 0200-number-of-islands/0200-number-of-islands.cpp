class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i,
             int j) {
        vis[i][j] = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        int m = grid.size();
        int n = grid[0].size();
        while (q.size() > 0) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            // checing all the neighbours
            for (int delrow = -1; delrow <= 1; delrow++) {
                for (int delcol = -1; delcol <= 1; delcol++) {
                    int nrow = delrow + row;
                    int ncol = delcol + col;
                    if(nrow==row || ncol==col){
                        if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                            grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0) {
                            vis[nrow][ncol] = 1;
                            q.push({nrow, ncol});
                        }
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && vis[i][j] == 0) {
                    ans++;
                    bfs(grid, vis, i, j);
                }
            }
        }
        return ans;
    }
};