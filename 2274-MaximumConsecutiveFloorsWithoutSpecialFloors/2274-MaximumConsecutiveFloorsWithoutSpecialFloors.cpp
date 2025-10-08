// Last updated: 10/8/2025, 10:16:27 PM
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(), special.end());
        int ans=0;
        ans=max(ans, special[0]-bottom);
        for(int i=1;i<special.size();i++){
            ans=max(ans, special[i]-special[i-1]-1);

        }
        int n=special.size();
        ans=max(ans, top-special[n-1]);
        return ans;
    }
};