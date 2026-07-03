class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int maxword=0;
        for(int i=0;i<n;i++){
            string s = sentences[i];
            int spaces=0;
            for(int j=0;j<s.length();j++){
                if(s[j]==' ')spaces++;
            }
            maxword=max(maxword,spaces);
        }
        return maxword+1;
    }
};