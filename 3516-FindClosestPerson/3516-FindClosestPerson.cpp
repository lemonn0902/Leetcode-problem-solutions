// Last updated: 9/4/2025, 12:56:44 PM
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int firstD=abs(x-z);
        int secondD=abs(y-z);
        if(firstD==secondD) return 0;
        else if(firstD<secondD) return 1;
        return 2;
    }
};