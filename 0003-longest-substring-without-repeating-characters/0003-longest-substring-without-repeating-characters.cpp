class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)return 0;
        unordered_set<int>st;
        int l=0;
        int r=0;
        int ans=1;
        st.insert(s[0]);
        r++;
        while(r<n){
            if(st.find(s[r])==st.end()){
                ans=max(ans,r-l+1);
                st.insert(s[r]);
            }
            else{
                while(s[l]!=s[r]){
                    st.erase(s[l]);
                    l++;
                }
                st.erase(s[l]);
                l++;
                st.insert(s[r]);
            }
            r++;
        }
        return ans;
    }
};