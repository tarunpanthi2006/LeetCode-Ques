class Solution {
public:
    int minimumPushes(string s) {
        vector<int>freq(26,0);
        int n=s.length();
        int ans=0;
        int count=0;
        int a=1;
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        sort(freq.rbegin(),freq.rend()); // yeh reverse sort hai
        for(int i=0;i<freq.size();i++){
            ans+=freq[i]*a;
            count++;
            if(count%8==0)a++;
        }
        return ans ;
    }
};