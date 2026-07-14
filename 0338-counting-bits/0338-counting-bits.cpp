class Solution {
public:
// sab commnets achhe se padhna samajne k liye
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 0);
        // basic se observation ki odd number ki last bit is always 1. and even number ka last bit is always 0.

        // toh simple sa formula bana diya ki agar odd hai toh pichle wale se ek jyada hoga and if even toh add nahi hoga 
        for (int i = 1; i <= n; i++) {
            // Simple division and modulo approach

            // issme ">>"isska kaam 1 bit aage badna hai. mai i>>1 ki jagha (i/2) bhi use kar sakta hu vo bhi same kaam karta hai

            // and i%2 check kar raha hai ki even hai ya odd

            // mai i%2 ki jagha (i&1)bhi likh sakta hu coz vo bhi yahi check karta hai
            dp[i] = dp[i>> 1] + (i % 2);
        }
        
        return dp;
    }
};