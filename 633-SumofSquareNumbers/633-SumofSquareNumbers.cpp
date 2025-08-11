// Last updated: 8/11/2025, 1:51:58 PM
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = floor(sqrt(c)); // largest possible square root
        
        while (a <= b) {
            long long sum = a * a + b * b;
            if (sum == c) return true;
            else if (sum < c) a++;
            else b--;
        }
        
        return false;
    }
};
