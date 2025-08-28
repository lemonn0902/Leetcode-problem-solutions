// Last updated: 8/28/2025, 11:58:11 PM
class Solution {
public:
    int balancedStringSplit(string s) {
        int x=0, ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') x++;
            if(s[i]=='R') x--;
            if(x==0) ans++;
        }
        return ans;
    }
};