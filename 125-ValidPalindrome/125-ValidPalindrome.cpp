// Last updated: 8/11/2025, 11:10:38 PM
class Solution {
public:
    bool isPalindrome(string s) {
        for(char& c: s){
            c=tolower(c);
        }
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            
            if(!isalnum(s[l])) {
                l++;
                continue;
            }
            if(!isalnum(s[r])) {
                r--;
                continue;
            }
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};