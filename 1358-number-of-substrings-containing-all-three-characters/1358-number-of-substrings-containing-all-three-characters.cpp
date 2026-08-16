class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastseen[3]={-1,-1,-1};
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')lastseen[0]=i;
            else if(s[i]=='b')lastseen[1]=i;
            else lastseen[2]=i;
            count+=1+min({lastseen[0],lastseen[1],lastseen[2]});
        }
        return count;
    }
};