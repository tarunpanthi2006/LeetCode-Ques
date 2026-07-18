class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1){
            if(k%2==0)return nums[0];
            else return -1*nums[0];
        }
        int x=0;
        for(int i=1;i<=k;i++){
            if(x!=n-1 && nums[x]<=nums[x+1]){
                nums[x]=-1*nums[x];
            }
            else{
                x++;
                if(x==n)x=n-1;
                nums[x]=-1*nums[x];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return sum;
    }
};