// Last updated: 8/9/2025, 11:53:18 PM
class Solution {
public:
    int dfs(vector<vector<int>>& grid, int x, int y){
        
        int m=grid.size();
        int n=grid[0].size();
        if(x<0||x>=m||y<0||y>=n){
            return 0;
        }
        if(grid[x][y]==0) return 0;
        grid[x][y]=0;
        
        int l=dfs(grid, x-1,y);
        int r=dfs(grid, x+1,y);
        int u=dfs(grid, x,y+1);
        int d=dfs(grid, x,y-1);
        return 1+l+u+r+d;

    }
    int validIslands(vector<vector<int>>& grid){
        int maxArea=0;
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1){
                    int area=dfs(grid,i,j);
                    maxArea=max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        return validIslands(grid);
    }
};