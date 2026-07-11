class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        int n=s.length();        
        for(int i=0;i<n;i++){
            if(s[i]>=97 && s[i]<=122)str+=s[i];
            else if(s[i]>=65 && s[i]<=90){
                s[i]+=32;
                str+=s[i];
            }
            else if(s[i]>=48 && s[i]<=57)str+=s[i];
        }
        int i=0;
        int j=str.length()-1;
        while(i<j){
            if(str[i]!=str[j])return false;
            i++;
            j--;
        }
        return true;
    }
};