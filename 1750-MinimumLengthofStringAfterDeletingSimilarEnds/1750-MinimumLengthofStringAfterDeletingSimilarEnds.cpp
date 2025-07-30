// Last updated: 7/31/2025, 1:05:22 AM
class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r && s[l]==s[r]){
            int ch=s[l];
            while(l<r&&s[l]==ch){
                l++;
            }
            while(r>=l&&s[r]==ch){
                r--;
            }
            
        }
        return 1+r-l;
    }
};