// Last updated: 9/29/2025, 7:38:52 PM
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>> res;
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int org=image[sr][sc];
        image[sr][sc]=color;
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        q.push({sr,sc});
        vis[sr][sc]=true;
        while(!q.empty()){
            auto [r,c] =q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=r+dx[i];
                int ncol=c+dy[i];
                if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&image[nrow][ncol]==org&&!vis[nrow][ncol]){
                    image[nrow][ncol]=color;
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=true;
                }
            }

        }
        return image;

    }
};