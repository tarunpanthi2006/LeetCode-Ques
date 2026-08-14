class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        unordered_map<int,int>mp;
        int l=0;
        int r=0;
        mp.insert({s[r],1});
        r++;
        int ans=INT_MIN;
        while(r<n){
            if(mp[s[r]]<2){
                mp[s[r]]++;
                ans=max(ans,r-l+1);
            }
            else{
                while(mp[s[r]]>=2){
                    mp[s[l]]--;
                    l++;
                }
                mp[s[r]]++;
                ans=max(ans,r-l+1);
            }
            r++;
        }
        return ans;
    }
};