class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int left=0;
        int ans=0;
        unordered_set<char>st;
        for(int i=0;i<n;i++){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
            }
            else{
                while(s[left]!=s[i]){
                    st.erase(s[left]);
                    left++;
                }
                st.erase(s[left]);
                left++;
                st.insert(s[i]);
            }
            ans=max(i-left+1,ans);
        }
        return ans;
    }
};