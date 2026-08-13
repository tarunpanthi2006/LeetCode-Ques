class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=-1e9;
        int l=0;
        int r=0;
        int n=nums.size();
        long long sum=0;
        while(r<n){
            sum+=nums[r];
            if(r-l+1==k){
                if((double)sum/k>avg)avg=(double)sum/k;
            }
            else if(r-l+1>k){
                sum=sum-nums[l];
                l++;
                if((double)sum/k > avg) avg = (double)sum/k;
            }
            r++;
        }
        return avg;
    }
};