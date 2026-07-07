class Solution {
public:
    int rev(int n){
        int rev=0;
        while(n>0){
            rev=rev*10+(n%10);
            n=n/10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        int M=1000000007;
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-rev(nums[i]);
        }
        map<int,int>map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        long long ans=0;
        for(auto ele : map){
            long long x=ele.second;
            // nC2 kiya hai 
            long long t = (x * (x - 1)) / 2;
            ans = (ans + t) % M;
        }
        return ans;
    }
};