class Solution {
public:
    int smallestNumber(int n, int t) {
        if(n==100)return 100;
        for(int i=0;i<10;i++){
            int x=n%10;
            int y=(n%100)/10;
            if(y==0){
                if(x%t==0)return n;
            }
            else if((x*y)%t==0)return n;
            n++;
        }
        return 0;
    }
};