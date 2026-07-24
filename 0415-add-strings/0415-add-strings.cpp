class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.length();
        int n2=num2.length();
        int i=n1-1;
        int j=n2-1;
        string s="";
        int carry=0;
        while(i>=0 && j>=0){
            int ascii1=num1[i]-'0';
            int ascii2=num2[j]-'0';
            int ans=ascii1+ascii2+carry;
            carry=ans/10;
            ans=ans%10;
            char c=(char)ans+'0';
            s+=c;
            i--;
            j--;
        }
        if(i<0){
            while(j>=0){
                int ascii=num2[j]-'0';
                int z=ascii+carry;
                carry=z/10;
                z=z%10;
                char q = (char)z+'0';
                s+=q;
                j--;
            }
        }
        else if(j<0){
            while(i>=0){
                int ascii=num1[i]-'0';
                int z=ascii+carry;
                carry=z/10;
                z=z%10;
                char q = (char)z+'0';
                s+=q;
                i--;
            }
        }
        if(carry>0){
            s+=carry+'0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};