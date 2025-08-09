// Last updated: 8/10/2025, 12:44:31 AM
class Solution {
public:
    void dfs(vector<vector<int>>& grid, int x, int y){
        int m=grid.size();
        int n=grid[0].size();
        if(x<0||x>=m||y<0||y>=n) return;
        if(grid[x][y]==1) return;
        grid[x][y]=1;
        dfs(grid, x-1,y);
        dfs(grid, x+1,y);
        dfs(grid, x,y+1);
        dfs(grid, x,y-1);
    }
    int validIslands(vector<vector<int>>& grid){
        int closedIslands=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    if(i==0||j==0||i==m-1||j==n-1) continue;
                    else{
                        closedIslands++;
                        dfs(grid, i, j);
                    } 
                }
            }
        }
        return closedIslands;

    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                    if(i==0||j==0||i==m-1||j==n-1) {
                        if(grid[i][j]==0) dfs(grid, i,j);
                    }
                
            }
        }
        return validIslands(grid);
    }
};