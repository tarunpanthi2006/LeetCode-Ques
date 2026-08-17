class Solution {
public:
    long long int f(vector<int>& piles,int mid){
        long long int sum=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            sum+=ceil((double)piles[i]/(double)mid);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(piles[i]>maxi)maxi=piles[i];
        }
        int lo=1;
        int hi=maxi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            long long int hours=f(piles,mid);
            if(hours>h){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return lo;
    }
};