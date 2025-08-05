// Last updated: 8/6/2025, 12:31:17 AM
class Solution {
public:
    int m, n, result = 0, totalSteps;
    void dfs(vector<vector<int>>& grid, int i, int j, int count) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == -1) return;
        if (grid[i][j] == 2) {
            if (count == totalSteps) result++;
            return;
        }
        // Mark current cell as visited
        int temp = grid[i][j];
        grid[i][j] = -1;

        dfs(grid, i + 1, j, count + 1);
        dfs(grid, i - 1, j, count + 1);
        dfs(grid, i, j + 1, count + 1);
        dfs(grid, i, j - 1, count + 1);
        // Backtrack
        grid[i][j] = temp;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int start_i = 0, start_j = 0;
        totalSteps = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != -1) totalSteps++;
                if (grid[i][j] == 1) {
                    start_i = i;
                    start_j = j;
                }
            }
        }

        dfs(grid, start_i, start_j, 1); 
        return result;
    }
};
