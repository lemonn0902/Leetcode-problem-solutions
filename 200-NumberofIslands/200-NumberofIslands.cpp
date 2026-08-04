// Last updated: 8/4/2026, 3:51:13 PM
1class Solution {
2public:
3    void dfs(int i,int j,vector<vector<char>>& grid){
4        int m=grid.size();
5        int n=grid[0].size();
6        if(i>=m||j>=n||i<0||j<0) return;
7        if(grid[i][j]=='0') return;
8        grid[i][j]='0';
9        dfs(i+1,j,grid);
10        dfs(i,j+1,grid);
11        dfs(i-1,j,grid);
12        dfs(i,j-1,grid);
13    }
14    int numIslands(vector<vector<char>>& grid) {
15        int tot=0;
16        int rows=grid.size();
17        int cols=grid[0].size();
18        for(int i=0;i<rows;i++){
19            for(int j=0;j<cols;j++){
20                if(grid[i][j]=='1'){
21                    tot+=1;
22                    dfs(i,j,grid);
23                }
24            }
25        }
26        return tot;
27    }
28};