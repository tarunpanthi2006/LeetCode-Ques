class Solution {
public:
    string smallestPalindrome(string s) {
        int mid = s.length() / 2;
        sort(s.begin(), s.begin() + mid);
        int l=0;
        int r=s.length()-1;
        while(l<=r){
            s[r]=s[l];
            r--;
            l++;
        }
        return s;
    }
};