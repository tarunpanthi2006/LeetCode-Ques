class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>ans;
        for(int i=0;i<m;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(j-1>=0)if (grid[i][j-1]==-1) continue;
                    if(j+1<n)if (grid[i][j+1]==-1) continue;
                    if(i-1>=0)if (grid[i-1][j]==-1) continue;
                    if(i+1<m)if (grid[i+1][j]==-1) continue;
                    ans.push_back(grid[i][j]);
                    grid[i][j]=-1;
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    if(j-1>=0)if (grid[i][j-1]==-1) continue;
                    if(j+1<n)if (grid[i][j+1]==-1) continue;
                    if(i-1>=0)if (grid[i-1][j]==-1) continue;
                    if(i+1<m)if (grid[i+1][j]==-1) continue;
                    ans.push_back(grid[i][j]);
                    grid[i][j]=-1;
                }
            }
        }
        return ans;
    }
};