class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            v.push_back(arr[i]);
        }
        sort(arr.begin(),arr.end());
        map<int,int>map;
        int rank=1;
        for(int i=0;i<arr.size();i++){
            if(i>0){
                if(arr[i]==arr[i-1]){
                    map[arr[i]]=map[arr[i-1]];
                }
                else{
                    rank++;
                    map[arr[i]]=rank;
                }
            }
            else{
                map[arr[i]]=rank;
            }
        }
        vector<int>ans(arr.size());
        for(int i=0;i<v.size();i++){
            ans[i]=(map[v[i]]);
        }
        return ans;
    }
};