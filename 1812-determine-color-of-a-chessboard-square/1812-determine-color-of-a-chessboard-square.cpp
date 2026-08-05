class Solution {
public:
    bool squareIsWhite(string s) {
        // if parity is same return black
        int x=s[0]-'a'+1;
        int y=s[1]-'0';
        return (x + y) % 2 != 0;
    }
};