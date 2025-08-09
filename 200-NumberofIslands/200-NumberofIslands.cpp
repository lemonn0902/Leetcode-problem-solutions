// Last updated: 8/9/2025, 11:52:03 AM
class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0||i>=m||j<0||j>=n){
            return;
        }
        if(grid[i][j]=='0') return;
        grid[i][j]='0';
        dfs(grid, i+1,j);
        dfs(grid, i-1,j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }
    int countIslands(vector<vector<char>>& grid){
        int tot=0;
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    tot+=1;
                    dfs(grid, i, j);
                }
            }
        }
        return tot;
    }
    int numIslands(vector<vector<char>>& grid) {
        return countIslands(grid);
    }
};