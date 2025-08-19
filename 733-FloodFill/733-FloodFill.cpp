// Last updated: 8/19/2025, 3:23:45 PM
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int startColor = image[sr][sc];
        vector<vector<int>> vis(m, vector<int>(n,0));
        queue<pair<int,int>> q;
        q.push({sr,sc});
        vis[sr][sc]=1;
        image[sr][sc]=color;
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        while(!q.empty()){
            auto curr= q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nrow= curr.first+dx[i];
            int ncol= curr.second+dy[i];
            if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&image[nrow][ncol]==startColor&&!vis[nrow][ncol]){
                image[nrow][ncol]=color;
                vis[nrow][ncol]=1;
                q.push({nrow, ncol});
            }
            }
            
        }
        return image;

    }
};