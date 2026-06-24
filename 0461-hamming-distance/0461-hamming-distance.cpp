class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int>v1;
        vector<int>v2;
        if(x == 0) v1.push_back(0);
        while(x>0){
            v1.push_back(x%2);
            x=x/2;
        }
        if(y == 0) v2.push_back(0);
        while(y>0){
            v2.push_back(y%2);
            y=y/2;
        }
        if(v1.size() < v2.size()){
            while(v1.size() < v2.size()){
                v1.push_back(0);
            }
        }
        else if(v1.size() > v2.size()){
            while(v2.size() < v1.size()){
                v2.push_back(0);
            }
        }
        int ans=0;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                ans++;
            }
        }
        return ans;
    }
};