// Last updated: 3/9/2025, 9:26:17 AM
class Solution {
public:
    bool canBePlaced(int fruit, vector<int>& baskets){
        for(int i=0;i<baskets.size();i++){
            if(baskets[i]!=0 && baskets[i]>=fruit){
                baskets[i]=0;
                return true;
            }
        }
        return false;
    }
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count=0;
        for(int i=0;i<fruits.size();i++){
            int fruit = fruits[i];
            bool res= canBePlaced(fruit, baskets);
            if(res==false)
                count++;
        }
        return count;
    }
};