// Last updated: 8/22/2025, 12:33:30 PM
class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int curr=1;
        int maxAns=1;
        for(int i=0;i<n-1;i++){
            if(s[i+1]==s[i]){
                curr++;
                maxAns=max(maxAns, curr);
            }
            else curr=1;
        }
        return maxAns;
    }
};