class Solution {
public:
// ek vecotor banao and in the starting assume all are prime then check in array if any number is prime then usske multiple will not be prime yeh concept lagaya.then at last count number of trues in the array.
    int countPrimes(int n) {
        if(n<=2)return 0;
        vector<bool>v(n,true);
        v[0]=false;
        v[1]=false;
        for(int i=2;i<sqrt(n);i++){
            if(v[i]==true){
                for(int j=i*i;j<n;j=j+i){
                    v[j]=false;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]==true)ans++;
        }
        return ans;
    }
};