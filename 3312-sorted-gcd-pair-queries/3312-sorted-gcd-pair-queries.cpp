class Solution {
public:

// mathematically achha question

    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n=nums.size();
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>maxi)maxi=nums[i];
        }
        vector<long long>freq(maxi+1,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<long long>divcount(maxi+1,0);
        for(int g=1;g<=maxi;g++){
            for(int i=g;i<=maxi;i=i+g){
                divcount[g]+=freq[i];
            }
        }
        vector<long long>exact(maxi+1,0);
        for(int g=maxi;g>=1;g--){
            exact[g]=(divcount[g]*(divcount[g]-1))/2;
            for(int i=2*g;i<=maxi;i=i+g){
                exact[g]-=exact[i];
            }
        }
        vector<long long>prefixsum(maxi+1,0);
        for(int i=1;i<=maxi;i++){
            prefixsum[i]=prefixsum[i-1]+exact[i];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            auto x=upper_bound(prefixsum.begin(),prefixsum.end(),queries[i]);
            ans.push_back(x-prefixsum.begin());
        }
        return ans;
    }
};