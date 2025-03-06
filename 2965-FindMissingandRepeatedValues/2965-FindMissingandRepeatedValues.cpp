// Last updated: 3/6/2025, 6:46:39 PM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        vector<int> map;
        int n = grid.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int current = grid[i][j];
                if (find(map.begin(), map.end(), current) != map.end()) {
                    ans.push_back(current);
                }
                map.push_back(current);
            }
        }

        for (int i = 1; i <= (n * n); i++) {
            if (find(map.begin(), map.end(), i) == map.end()) {
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};