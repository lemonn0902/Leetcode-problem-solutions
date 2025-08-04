// Last updated: 8/4/2025, 5:09:26 PM
class Solution {
public:
    bool possible(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>& visited){
        int m =grid.size(); //r
        int n=grid[0].size();  //c
        if(i<0||i>=m||j<0||j>=n||grid[i][j]==0||visited[i][j]==true) return false;
        return true;
    }
    int solve(vector<vector<int>>& grid, int i,int j, vector<vector<bool>>& visited){
        visited[i][j]=true;
        
        int maxGold = 0;
        //try left
        if(possible(grid,i,j-1, visited)){
            
            
            maxGold = max(maxGold, solve(grid, i, j-1, visited));
        }
        //try right
        if(possible(grid,i,j+1, visited)){
            
            maxGold = max(maxGold, solve(grid, i, j+1, visited));
        }
        //try up
        if(possible(grid,i-1,j, visited)){
            
           maxGold = max(maxGold, solve(grid, i-1, j, visited));
        }
        //try down
        if(possible(grid,i+1,j, visited)){
            
            maxGold = max(maxGold, solve(grid, i+1, j, visited));
        }
        visited[i][j] = false; 
        return grid[i][j] + maxGold;

    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m =grid.size(); //r
        int n=grid[0].size();  //c
        int maxGold=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                vector<vector<bool>> visited(m,vector<bool>(n,false));
                int start=grid[i][j];
                if(start==0) continue;
                else {
                    int ans= solve(grid, i,j, visited);
                    maxGold= max(maxGold, ans);
                }
            }
        }
        return maxGold;

    }
};