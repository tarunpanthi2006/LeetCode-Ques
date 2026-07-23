class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans =0;
        int water=capacity;
        int n=plants.size();
        for(int i=0;i<n;i++){
            if(water<plants[i]){
                ans+=2*i;
                water=capacity;
            }
            water-=plants[i];
            ans++;
        }
        return ans;
    }
};