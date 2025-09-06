// Last updated: 9/6/2025, 10:08:35 AM
class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int ans=0, maxFlip=0;
        for(int i=0;i<flips.size();i++){
            maxFlip=max(maxFlip, flips[i]);
            if(maxFlip==i+1) ans++;
        }
        return ans;
    }
};