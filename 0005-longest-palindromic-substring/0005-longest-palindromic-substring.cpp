class Solution {
public:
    void ispalindrome(string &s,int i,int j,string &answer,int c,int &maxlen){ // dhyan dena yaha & lagana pada strings k liye coz yeh nayi string banakar memory limit exceeded ka error de raha tha
        bool flag = true;
        int left = i;
        int right = j;
        while (left < right) {
            if (s[left] != s[right]) {
                flag = false;
                break;
            }
            left++;
            right--;
        }
        if(flag){
            c=j-i+1;
            if(c>maxlen){
                maxlen=c;
                answer = "";
                for(int x=i;x<=j;x++){
                    answer+=s[x];
                }
            }
        }
    }
    string longestPalindrome(string s) {
        string ans="";
        int c=0;
        int maxlen=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ispalindrome(s,i,j,ans,c,maxlen);
            }
        }
        return ans;
    }
};