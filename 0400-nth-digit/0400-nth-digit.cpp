class Solution {
public:
    int findNthDigit(int n) {
        if (n <= 9)
            return n;
        long long temp = n;
        int range = 0;
        long long no = 0;
        long long p10 = 1;
        for (int i = 0; i <= 9; i++) {
            no = 9LL * p10 * (i + 1);
            if (temp <= no) { 
                range = i + 1;
                break;
            }
            temp -= no;
            p10 *= 10;
        }
        long long pos = temp - 1; 
        long long num = pos / range + p10;
        int dig = pos % range;
        int ans = 0;
        int cnt = 0;
        while (num != 0) {
            ans = num % 10;
            if (cnt == range - dig - 1)
                break;
            cnt++;
            num /= 10;
        }
        return ans;
    }
};