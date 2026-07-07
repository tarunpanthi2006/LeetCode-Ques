class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n>0){
            int last=n%10;
            rev=rev*10+last;
            n=n/10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>map;
        int n=nums.size();
        int mindiff=INT_MAX;
        for(int i=0;i<n;i++){
            int x = reverse(nums[i]);
            if(map.find(nums[i])!=map.end()){
                int diff=abs(map[nums[i]]-i);
                mindiff=min(mindiff,diff);
            }
            map[x] = i;
        }
        if(mindiff!=INT_MAX)return mindiff;
        else return -1;
    }
};