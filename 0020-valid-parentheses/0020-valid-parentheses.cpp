class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        bool flag=false;
        if(s[n-1]=='}')flag=true;
        else if(s[n-1]==')')flag=true;
        else if(s[n-1]==']')flag=true;
        if(flag==false)return false;
        bool flag2 = false;
        if(s[0]=='{')flag2=true;
        else if(s[0]=='(')flag2=true;
        else if(s[0]=='[')flag2=true;
        if(flag2==false)return false;
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                st.push(s[i]);
            }
            else{
                if (st.size() == 0) return false;
                
                if(s[i]==')' && st.top()=='(') st.pop();
                else if((s[i]==')' && st.top()!='(')) return false;
                else if(s[i]=='}' && st.top()=='{') st.pop();
                else if((s[i]=='}' && st.top()!='{')) return false;
                else if(s[i]==']' && st.top()=='[') st.pop();
                else if((s[i]==']' && st.top()!='[') ) return false;
            }
        }
        if(st.size()!=0)return false;
        return true;
    }
};