class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int temp=100000007;
        bool found =true;
        while(found!=false){
            found=false;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]==temp){
                        found=true;
                        break;
                    }
                }
                if(found==true)temp++;
                else break;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int x=0;x<n;x++){
                        if(matrix[i][x]!=0){
                            matrix[i][x]=temp;
                        }
                    }
                    for(int x=0;x<m;x++){
                        if(matrix[x][j]!=0){
                            matrix[x][j]=temp;
                        }
                    }
                    matrix[i][j]=temp;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==temp)matrix[i][j]=0;
            }
        }
    }
};