// Last updated: 7/23/2025, 4:28:02 PM
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int Alice_points=0;
        int Bob_points=0;
        int chance=1;
        while(!piles.empty()){
            int n= piles.size();
            if(chance%2!=0){ //Alice
                if(piles[0]>piles[n-1]){
                    Alice_points+=piles[0];
                    piles.erase(piles.begin());
                }
                else{
                    Alice_points+=piles[n-1];
                    piles.pop_back();
                }
            }
            else{ //Bob
                if(piles[0]>piles[n-1]){
                    Bob_points+=piles[0];
                    piles.erase(piles.begin());
                }
                else{
                    Bob_points+=piles[n-1];
                    piles.pop_back();
                }
            }
        }
        if(Alice_points> Bob_points) return true;
        else return false;
    }
};