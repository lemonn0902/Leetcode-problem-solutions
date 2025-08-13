// Last updated: 8/13/2025, 12:44:01 PM
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n=piles.size();
        int temp=n;
        int ans=0;
        for(int i=0;i<n/3;i++){
            ans=ans+ piles[temp-2];
            temp=temp-2;
            
        }
        return ans;
    }
};