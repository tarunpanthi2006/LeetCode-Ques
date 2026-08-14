class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++){
            vector<int>v(i);
            ans.push_back(v);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<ans[i].size();j++){
                if(j==0 || j==i)ans[i][j]=1;
                else{
                    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
                }
            }
        }
        return ans;
    }
};