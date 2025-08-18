// Last updated: 8/19/2025, 12:53:00 AM
class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>> res;
        queue<pair<int,int>> q1;
        queue<pair<int,int>> q2;
        vector<vector<int>> visP(m,vector<int>(n,0));
        vector<vector<int>> visA(m,vector<int>(n,0));
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        // Pacific border (row 0, col 0)
        for (int i = 0; i < m; i++) {
            q1.push({i, 0});
            visP[i][0] = 1;
        }
        for (int j = 0; j < n; j++) {
            q1.push({0, j});
            visP[0][j] = 1;
        }
        
        // Atlantic border (row m-1, col n-1)
        for (int i = 0; i < m; i++) {
            q2.push({i, n-1});
            visA[i][n-1] = 1;
        }
        for (int j = 0; j < n; j++) {
            q2.push({m-1, j});
            visA[m-1][j] = 1;
        }
        while(!q1.empty()){
            auto curr= q1.front();
            q1.pop();
            for(int i=0;i<4;i++){
                int nrow=curr.first+dx[i];
                int ncol=curr.second+dy[i];
                if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&!visP[nrow][ncol]&& heights[curr.first][curr.second]<=heights[nrow][ncol]){
                    visP[nrow][ncol]=1;
                    q1.push({nrow, ncol});
                }
            }
        }
        while(!q2.empty()){
            auto curr= q2.front();
            q2.pop();
            for(int i=0;i<4;i++){
                int nrow=curr.first+dx[i];
                int ncol=curr.second+dy[i];
                if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&!visA[nrow][ncol]&& heights[curr.first][curr.second]<=heights[nrow][ncol]){
                    visA[nrow][ncol]=1;
                    q2.push({nrow, ncol});
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visP[i][j]==1&&visA[i][j]==1){
                    res.push_back({i,j});
                }
            }
        }
        return res;

    }
};