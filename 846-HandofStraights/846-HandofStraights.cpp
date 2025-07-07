// Last updated: 7/8/2025, 1:53:37 AM
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;
        map<int, int> freq;
        for (int card : hand) freq[card]++;
        for (auto [num, count] : freq) {
            if(count == 0) continue;
            for (int i = 0; i < groupSize; ++i) {
                if (freq[num + i] < count) return false;
                freq[num + i] -= count;
            }
        }
        return true;
    }
};
