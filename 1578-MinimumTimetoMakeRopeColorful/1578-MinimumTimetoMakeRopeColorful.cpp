// Last updated: 11/3/2025, 5:15:37 PM
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        int maxi=neededTime[0];
        for(int i=1;i<colors.size();i++){
            if(colors[i]==colors[i-1]){
                ans+=min(maxi, neededTime[i]);
                maxi=max(maxi, neededTime[i]);
            }
            else maxi=neededTime[i];
        }
        return ans;
    }
};