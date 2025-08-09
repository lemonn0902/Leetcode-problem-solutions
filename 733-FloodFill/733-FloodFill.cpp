// Last updated: 8/10/2025, 12:19:40 AM
class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int originalColor, int color){
        int m=image.size();
        int n= image[0].size();
        if(i<0||i>=m||j<0||j>=n) return;
        

        if(image[i][j]==originalColor){
            image[i][j]=color;
        dfs(image, i-1, j,originalColor,color);
        dfs(image, i+1, j,originalColor,color);
        dfs(image, i, j+1,originalColor,color);
        dfs(image, i, j-1,originalColor,color);

        } 
        else return;
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        
        dfs(image, sr, sc, image[sr][sc], color);
        return image;
    }
};