// Last updated: 9/25/2025, 1:29:16 PM
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1||grid[n-1][n-1]==1) return -1;
        if(n==1) return 1;
        queue<tuple<int,int,int>> q;
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        q.push({0,0,1});
        vis[0][0]=true;
        vector<pair<int,int>> dir={
            {-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}
        };
        while(!q.empty()){
            auto [r,c,dist]= q.front();
            q.pop();
            if(r==n-1&&c==n-1) return dist;
            for(auto [dr,dc]: dir){
                int nr=r+dr;
                int nc=c+dc;
                if(nr>=0&&nr<n&&nc>=0&&nc<n&&grid[nr][nc]==0&& !vis[nr][nc]){
                    vis[nr][nc]=true;
                    q.push({nr,nc, dist+1});
                }

            }

        }
        return -1;
    }
};