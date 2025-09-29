// Last updated: 9/29/2025, 8:13:00 PM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> vis(m, vector<int>(n,0));
        vector<vector<int>> res(m, vector<int>(n, 0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        while(!q.empty()){
            auto curr= q.front();
            q.pop();
            res[curr.first.first][curr.first.second]=curr.second;
            for(int i=0;i<4;i++){
                int nrow=curr.first.first+dx[i];
                int ncol=curr.first.second+dy[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol]==0){
                    vis[nrow][ncol]=1;
                    q.push({{nrow, ncol}, curr.second+1});
                }

            }
        }
        return res;
    }
};