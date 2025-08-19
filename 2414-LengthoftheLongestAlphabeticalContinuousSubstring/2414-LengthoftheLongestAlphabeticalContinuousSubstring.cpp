// Last updated: 8/20/2025, 12:35:16 AM
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int len=s.size();
        int maxAns=1;
        int curr=1; 
        string t="abcdefghijklmnopqrstuvwxyz";
        for(int i=1;i<len;i++){
            if(s[i]==s[i-1]+1){
                curr++;
                maxAns=max(maxAns, curr);
            }
            else{
                curr=1;
            }
        }
        return maxAns;
    }
};