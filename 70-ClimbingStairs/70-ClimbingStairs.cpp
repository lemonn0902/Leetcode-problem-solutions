// Last updated: 4/18/2025, 11:32:01 PM
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) return 1;

        int a = 1, b = 1, temp;

        for (int i = 2; i <= n; ++i) {
            temp = a + b;
            a = b;
            b = temp;
        }

        return b;
    }
};
