class Solution {
public:
    bool searchMatrix(vector<vector<int>>& grid, int target) {
        int m=grid.size();
        int n=grid[0].size();
        int lo=0;
        int hi=m*n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int x=mid;
            int midrow=mid/n;
            int midcol=mid%n;
            if(grid[midrow][midcol]==target)return true;
            else if(grid[midrow][midcol]>target) hi=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};