// Last updated: 11/3/2025, 1:48:17 AM
class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n,0));
        for(auto& g:guards) grid[g[0]][g[1]]=1; //mark gaurds as 1
        for(auto& w:walls) grid[w[0]][w[1]]=2; //mark walls as 2
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        for(auto& g: guards){
            int r=g[0], c=g[1];
            for(int d=0;d<4;d++){
                int nr=r, nc=c;
                while(true){
                    nr+=dx[d];
                    nc+=dy[d];
                    if(nr < 0 || nr >= m || nc < 0 || nc >= n || grid[nr][nc] == 1 || grid[nr][nc] == 2)
                        break;
                    if(grid[nr][nc] == 0)
                        grid[nr][nc] = 3;
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) ans++;
            }
        }
        return ans;

    }
};