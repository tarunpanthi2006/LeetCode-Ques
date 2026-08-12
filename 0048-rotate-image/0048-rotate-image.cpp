class Solution {
public:
    void rotate(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=grid[i][j];
                grid[i][j]=grid[j][i];
                grid[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++){
           vector<int>temp;
           for(int j=0;j<n;j++){
            temp.push_back(grid[i][j]);
           } 
           reverse(temp.begin(),temp.end());
           int x=0;
           for(int j=0;j<n;j++){
            grid[i][j]=temp[x];
            x++;
           }
        }
    }
};