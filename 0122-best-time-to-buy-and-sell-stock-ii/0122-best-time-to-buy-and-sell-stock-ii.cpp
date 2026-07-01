class Solution {
public:
    int maxProfit(vector<int>& arr) {
        stack<int>st;
        int n=arr.size();
        int ans=0;
        st.push(arr[0]);
        for(int i=1;i<n;i++){
            if(st.top()<arr[i]){
                ans+=arr[i]-st.top();
                st.pop();
            }
            st.push(arr[i]);
        }
        return ans;
    }
};