class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int n = arr.size();
        string ans ="";
        sort(arr.begin(),arr.end());
        string starting=arr[0];
        string end=arr[n-1];
        for(int i=0;i<min(starting.length(),end.length());i++){
            if(starting[i]!=end[i])return ans;
            else ans+=starting[i];
        }
        return ans;
    }
};