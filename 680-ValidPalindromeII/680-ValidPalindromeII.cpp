// Last updated: 8/11/2025, 11:24:42 PM
class Solution {
public:
    bool pal(string& s, int l , int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            r--;
            l++;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        
        while(l<r){
            if(s[l]!=s[r]){
                return pal(s,l+1,r)||pal(s,l,r-1);
            }
            l++;
            r--;
                
        }
        return true;
    }
};