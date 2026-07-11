class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        vector<string>v;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')continue;
            else{
                string t="";
                while(i < s.length() && s[i]!=' '){
                    t+=s[i];
                    i++;
                }
                v.push_back(t);
                i--;
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
            if(i>0){
                ans+=" ";
            }
        }
        return ans;
    }
};