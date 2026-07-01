class Solution {
public:
    int val(char c){
        if(c=='I')return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        if(c=='M')return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int ans=0;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            st.push(s[i]);
        }
        int temp=val(s[s.length()-1]);
        while(st.size()>0){
            int x = val(st.top());
            if(x>=temp)ans+=x;
            if(x<temp)ans-=x;
            temp=x;
            st.pop();
        }
        return ans;
    }
};