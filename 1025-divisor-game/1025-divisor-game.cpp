class Solution {
public:
    bool divisorGame(int n) {
        if(n==1)return false;
        if(n==2)return true;
        if(n==3)return false;
        for(int i=1;i<n;i++){
            if(n%i==0){
                // basically yeh niche jo return kar raha hu vo bob ke ans ka ulta hai matlab agar bob haara toh return true else return false;
                // first maine alice k liye likha bakai aage kaa kaaam apne aap recursion
                return(!divisorGame(n-i));
            }
        }
        return false;
    }
};