class Solution {
public:
    void bfs(vector<int>adj[],vector<int>&vis,int start,int v){
        queue<int>q;
        q.push(start);
        vis[start]=1;
        while(q.size()>0){
            int node=q.front();
            q.pop();
            for(auto ele: adj[node]){
                if(vis[ele]==0){
                    vis[ele]=1;
                    q.push(ele);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {
        // mereko matrix diya hai so firstly mai ek adjlist banaunga
        int v=grid.size();
        vector<int>adj[v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(i!=j && grid[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        // list bann gayi yeh tarika yaad rakhlo
        vector<int>vis(v,0);
        int ans=0;
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                ans++;
                bfs(adj,vis,i,v);
            }
        }
        return ans;
    }
};