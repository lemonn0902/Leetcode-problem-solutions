// Last updated: 8/28/2025, 11:29:14 AM
class Solution {
public:
    bool isPalindrome(int x) {
        string num= to_string(x);
        int n=num.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(num[l]!=num[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};