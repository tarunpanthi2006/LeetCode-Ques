class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>0){
            sort(stones.begin(),stones.end());
            if(stones.size()==1)return stones[0];
            int y=stones[stones.size()-1];
            int x=stones[stones.size()-2];
            if(x==y){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones.pop_back();
                stones[stones.size()-1]=y-x;
            }
            if(stones.size()==0)return 0;
        }
        return stones[0];
    }
};