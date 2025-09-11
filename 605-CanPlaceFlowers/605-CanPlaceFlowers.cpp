// Last updated: 9/11/2025, 5:50:18 PM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        for(int i=0;i<len;i++){
            if(flowerbed[i]==1) continue;
            else{
                
                if((i==0||flowerbed[i-1]!=1)&&(i==len-1||flowerbed[i+1]!=1)){
                    flowerbed[i]=1;
                    n--;
                }
                if(n==0) return true;
            }
        }
        return n<=0;
            
    }
};