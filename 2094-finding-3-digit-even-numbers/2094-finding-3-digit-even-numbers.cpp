class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        for (int i = 100; i < 999; i = i + 2) {
            map<int, int> map;
            for (int j = 0; j < n; j++) {
                map[nums[j]]++;
            }
            int x = i;
            int a = x % 10;
            x = x / 10;
            int b = x % 10;
            x = x / 10;
            int c = x % 10;
            if(map.find(a)!=map.end() && map[a]>0){
                map[a]--;
            }
            else continue;
            if(map.find(b)!=map.end() && map[b]>0){
                map[b]--;
            }
            else continue;
            if(map.find(c)!=map.end() && map[c]>0){
                map[c]--;
            }
            else continue;
            v.push_back(i);
        }
        return v;
    }
};