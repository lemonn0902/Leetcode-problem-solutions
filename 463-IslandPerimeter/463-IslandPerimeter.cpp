// Last updated: 8/10/2025, 4:57:06 PM
class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i, int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0||i>=m||j<0||j>=n||grid[i][j]==0) return 1;
        if(grid[i][j]==-1) return 0;
        grid[i][j]=-1;
        return (dfs(grid, i+ 1, j) +
                dfs(grid, i- 1, j) +
                dfs(grid, i, j + 1) +
                dfs(grid, i, j - 1));
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int p=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    p+=dfs(grid,i,j);
                }
            }
        }
        return p;
    }
};