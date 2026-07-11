class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        string ans="";
        int count=1;
        for(int i=0;i<n;i++){
            if(i!=0){
                if(s[i]==s[i-1]){
                    count++;
                }
                else count=1;
            }
            if(count<3){
                ans+=s[i];
            }
        }
        return ans;
    }
};