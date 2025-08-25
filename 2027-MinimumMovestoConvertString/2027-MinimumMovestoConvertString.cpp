// Last updated: 8/25/2025, 4:18:46 PM
class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int moves = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'X') {
                moves++;
                i += 2; 
            }
        }
        return moves;
    }
};
