// Last updated: 10/2/2025, 1:24:21 AM
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles+(numBottles-1)/(numExchange-1);
    }
};