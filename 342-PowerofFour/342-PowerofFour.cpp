// Last updated: 8/15/2025, 9:39:02 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        while(n%4==0){
            n=n/4;
        }
        return n==1;
    }
};