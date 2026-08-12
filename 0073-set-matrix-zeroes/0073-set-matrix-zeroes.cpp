class Solution {
public:
    void setZeroes(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>rowvec;
        vector<int>colvec;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    rowvec.push_back(i);
                    colvec.push_back(j);
                }
            }
        }
        for(int x=0;x<rowvec.size();x++){
            int i=rowvec[x];
            for(int j=0;j<n;j++){
                grid[i][j]=0;
            }
        }
        for(int x=0;x<colvec.size();x++){
            int j=colvec[x];
            for(int i =0;i<m;i++){
                grid[i][j]=0;
            }
        }
    }
};