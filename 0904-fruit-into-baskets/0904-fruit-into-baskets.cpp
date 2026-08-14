class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>s;
        int l=0;
        int r=0;
        int ans=0;
        while(r<n){
            if(s.find(nums[r])==s.end()){
                s.insert({nums[r],0});
                s[nums[r]]++;
                if(s.size()<=2){
                    ans=max(ans,r-l+1);
                    r++;
                }
                else{
                    int freq=s[nums[l]];
                    int t=nums[l];
                    while(freq>0){
                        s[nums[l]]--;
                        if(nums[l]==t){
                            freq--;
                        }
                        if (s[nums[l]] == 0) s.erase(nums[l]);
                        l++;
                        if(s.size()<=2)break;
                    }
                    ans=max(ans,r-l+1);
                    r++;
                }
            }
            else{
                s[nums[r]]++;
                ans=max(ans,r-l+1);
                r++;
            }
        }
        return ans;
    }
};