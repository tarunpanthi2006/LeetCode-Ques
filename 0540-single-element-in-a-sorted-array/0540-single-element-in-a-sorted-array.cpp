class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
        int lo=1; // coz zero ka case toh check kar liya 
        int hi=n-2; // coz last wale ka case check ho gaya
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])return nums[mid];
            // basicaly jab single element se pehele hu toh indexes(even,odd) hai and single element k baad indexes (odd,even).
            if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2!=0 && nums[mid]==nums[mid-1])){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return -1;
    }
};