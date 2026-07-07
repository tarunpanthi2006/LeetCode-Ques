class Solution {
public:
    long long sumAndMultiply(int n) {
        int a=n;
        vector<int>v;
        while(a>0){
            if(a%10!=0)v.push_back(a%10);
            a=a/10;
        }
        reverse(v.begin(),v.end());
        int size= v.size();
        if(size==0)return 0;
        int num=0;
        int j=0;
        int sum=0;
        for(int i=size-1;i>=0;i--){
            sum+=v[i];
            num+=v[i]*pow(10,j);
            j++;
        }
        long long ans=(long long)sum * (long long)num;
        return ans;
    }
};