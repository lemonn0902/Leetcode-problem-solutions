// Last updated: 8/11/2025, 11:31:02 PM
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(!isalpha(s[l])){
                l++;
                continue;
            }
            if(!isalpha(s[r])){
                r--;
                continue;
            }
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
    }
};