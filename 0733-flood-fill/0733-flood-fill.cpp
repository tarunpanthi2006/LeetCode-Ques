class Solution {
public:
    void bfs(vector<vector<int>>&grid,vector<vector<int>>&vis,int row,int col,int color,int initialcolor){
        queue<pair<int,int>>q;
        q.push({row,col});
        int m=grid.size();
        int n=grid[0].size();
        while(q.size()>0){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int delrow=-1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                    int nrow=r+delrow;
                    int ncol=c+delcol;
                    if(nrow==r || ncol==c){
                        if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==initialcolor && vis[nrow][ncol]==0){
                            grid[nrow][ncol]=color;
                            vis[nrow][ncol]=1;
                            q.push({nrow,ncol});
                        }
                    }
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int initialcolor=grid[sr][sc];
        bfs(grid,vis,sr,sc,color,initialcolor);
        return grid;
    }
};