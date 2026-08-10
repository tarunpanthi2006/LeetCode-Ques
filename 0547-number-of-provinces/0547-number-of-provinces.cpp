class Solution {
public:
    void bfs(vector<vector<int>>& grid,int start,vector<int>&vis){
        queue<int>q;
        q.push(start);
        vis[start]=1;
        int n=grid.size();
        while(q.size()>0){
            int node=q.front();
            q.pop();
            for(int j=0;j<n;j++){
                if(grid[node][j]==1 && vis[j]==0){
                    vis[j]=1;
                    q.push(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ans++;
                bfs(grid,i,vis);
            }
        }
        return ans;
    }
};