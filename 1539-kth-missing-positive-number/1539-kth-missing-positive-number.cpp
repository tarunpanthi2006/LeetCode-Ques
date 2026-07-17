class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        int n=arr.size();
        int ans=0;
        for(int i=1;i<=INT_MAX;i++){
            int lo=0;
            int hi=n-1;
            bool flag=true;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(i==arr[mid]){
                    flag=false;
                    break;
                }
                else if(i>arr[mid])lo=mid+1;
                else hi=mid-1;
            }
            if(flag){
                count++;
                if(count==k){
                    ans=i;
                    break;
                }
            }
        }
        return ans;
    }
};