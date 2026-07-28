class Solution {
public:
    string smallestPalindrome(string s) {
        string t = "";
        for (int i = 0; i < s.length() / 2; i++) {
            t += s[i];
        }
        sort(t.begin(), t.end());
        string temp = t;
        reverse(temp.begin(), temp.end());
        if(s.length()%2==0){
            t+=temp;
            return t;
        }
        t+=s[s.length()/2]+temp; // odd k case mein original string ka exact middle character ko bhi daalna padega 
        return t;
    }
};