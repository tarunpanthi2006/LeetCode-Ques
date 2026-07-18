class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        int i=0;
        for(int j=0;j<s.size();j++){
            if(g[i]<=s[j]){
                ans++;
                i++;
            }
            if(ans ==g.size())break;
        }
        return ans;
    }
};