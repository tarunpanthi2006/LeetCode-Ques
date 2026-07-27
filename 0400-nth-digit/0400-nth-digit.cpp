class Solution {
public:
    int findNthDigit(int n) {
        if(n<=9)return n;
        int noofdigit;
        int t=n;
        int u;
        if(n<=180+9){
            noofdigit=2;
            t=t-9;
            u=9;
        }
        else if(n<=2700+180+9){
            noofdigit=3;
            t=t-9-180;
            u=99;
        }
        else if(n<=36000+2700+180+9){
            noofdigit=4;
            t=t-9-180-2700;
            u=999;
        }
        else if(n<=450000+36000+2700+180+9){
            noofdigit=5;
            t=t-9-180-2700-36000;
            u=9999;
        }
        else if(n<=5400000+450000+36000+2700+180+9){
            noofdigit=6;
            t=t-9-180-2700-36000-450000;
            u=99999;
        }
        else if(n<=63000000+5400000+450000+36000+2700+180+9){
            noofdigit=7;
            t=t-9-180-2700-36000-450000-5400000;
            u=999999;
        }
        else if(n<=720000000+63000000+5400000+450000+36000+2700+180+9){
            noofdigit=8;
            t=t-9-180-2700-36000-450000-5400000-63000000;
            u=9999999;
        }
        else{
            noofdigit=9;
            t=t-9-180-2700-36000-450000-5400000-63000000-720000000;
            u=99999999;
        }
        int x=t%noofdigit;
        int num;
        if(x==0){
            num=u+(t/noofdigit);
            return num%10;
        }
        else{
            num=u+(t/noofdigit)+1;
            int q=num;
            int digit=0;
            while(q>0){
                digit++;
                q=q/10;
            }
            int y=pow(10,digit-x);
            int ans= num/y;
            int r=ans/10;
            r=r*10;
            return ans-r;
        }
    }
};