class Solution {
public:
int dp[500][500][2];
    int f(vector<int>& piles,int i,int j,int person){
        if(i>j)return 0;
        if(dp[i][j][person]!=-1) return dp[i][j][person];
        if(person==0){
            int take1=piles[i]+f(piles,i+1,j,1);
            int take2=piles[j]+f(piles,i,j-1,1);
            return dp[i][j][0]=max(take1,take2);
        }
        if(person==1){
            int take1=0+ f(piles,i+1,j,0);
            int take2= 0+f(piles,i,j-1,0);
            return dp[i][j][1]=min(take1,take2);
        }
        return dp[i][j][person]=0;
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        memset(dp, -1, sizeof(dp));
        int aliceScore=f(piles,0,n-1,0);
        int total=0;
        for(int i=0;i<n;i++){
            total+=piles[i];
        }
        int bobScore=total-aliceScore;
        return aliceScore>bobScore;
    }
};