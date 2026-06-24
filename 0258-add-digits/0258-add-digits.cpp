class Solution {
public:
int size(int x){
    int ans=0;
    while(x!=0){
        x=x/10;
        ans++;
    }
    return ans;
}
    int addDigits(int num) {
        int len=size(num);
        int sum=0;
        while(len>0){
            sum=sum+(num%10);
            num=num/10;
            len--;
        }
        if(sum>=10) return addDigits(sum);
        return sum;
    }
};