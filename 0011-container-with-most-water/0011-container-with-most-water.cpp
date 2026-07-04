class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int left=0;
        int right=n-1;
        int maxarea=0;
        int limiting=arr[left];
        while(left<right){
            limiting=min(arr[left],arr[right]);
            int area=(right-left)*limiting;
            if(limiting==arr[left])left++;
            else right--;
            maxarea=max(area,maxarea);
        }
        return maxarea;
    }
};