class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int n=s.length();
        int count=0;
        int count2=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')')count++;
            if(s[i]=='('){
                count2++;
            }
            while(count2>0){
                count--;
                count2--;
            }
            ans=max(count,ans);
        }
        return ans;
    }
};