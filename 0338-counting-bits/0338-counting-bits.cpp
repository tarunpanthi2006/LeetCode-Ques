class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            int count=0;
            int x=i;
            while(x!=0){
                if((x&1)==1)count++;
                x>>=1;  // >> is the right shift operator
            }
            ans[i]=count;
        }
        return ans;
    }
};