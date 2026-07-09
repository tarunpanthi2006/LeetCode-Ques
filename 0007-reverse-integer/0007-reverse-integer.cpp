class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        long long t = abs((long long)x);
        while(t>0){
            ans=ans*10+(t%10);
            t=t/10;
        }
        if(x>0){
            if(ans>INT_MAX)return 0;
        }
        if(x<0){
            ans=-1*ans;
            if(ans<INT_MIN)return 0;
        }
        return ans;
    }
};