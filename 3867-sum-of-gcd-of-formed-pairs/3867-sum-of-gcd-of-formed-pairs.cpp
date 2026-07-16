class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(st.size()==0){
                st.push(nums[i]);
            }
            else{
                if(nums[i]>st.top()){
                    st.pop();
                    st.push(nums[i]);
                }
            }
            ans.push_back(gcd(nums[i],st.top()));
        }
        sort(ans.begin(),ans.end());
        int n =ans.size();
        int pairs=n/2;
        int i=0;
        int j=n-1;
        long long sum=0;
        while(pairs>0){
            sum+=(long long)gcd(ans[i],ans[j]);
            i++;
            j--;
            pairs--;
        }
        return sum;
    }
};