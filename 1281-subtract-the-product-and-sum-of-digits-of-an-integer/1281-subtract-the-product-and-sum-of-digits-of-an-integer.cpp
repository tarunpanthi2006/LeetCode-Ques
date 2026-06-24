class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        int x=n;
        while(x>0){
            prod=prod*(x%10);
            x=x/10;
        }
        while(n>0){
            sum=sum+(n%10);
            n=n/10;
        }
        return prod-sum;
    }
};