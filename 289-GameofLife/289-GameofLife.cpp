// Last updated: 7/31/2025, 12:07:02 PM
class Solution {
public:
    vector<int> getNeighbors(int curr, vector<vector<int>>& board,int i,int j){
        vector<int> res;
        int m = board.size();
        int n= board[0].size();
        if(i-1>=0)res.push_back(board[i-1][j]);
        if(j-1>=0)res.push_back(board[i][j-1]);
        if(j+1<n)res.push_back(board[i][j+1]);
        if(i+1<m)res.push_back(board[i+1][j]);
        if(i-1>=0&&j-1>=0)res.push_back(board[i-1][j-1]);
        if(i-1>=0&&j+1<n)res.push_back(board[i-1][j+1]);
        if(i+1<m&&j-1>=0)res.push_back(board[i+1][j-1]);
        if(j+1<n&&i+1<m)res.push_back(board[i+1][j+1]);
        return res;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n= board[0].size();
        vector<vector<int>> copy = board;
        for(int i=0;i<m;i++){ //row
            for(int j=0;j<n;j++){ //col
                int curr=copy[i][j];
                vector<int> neighbors= getNeighbors(curr, copy,i,j);
                int live=0;
                for(int i=0;i<neighbors.size();i++){
                    if(neighbors[i]==1) live++;
                }
                if(curr==1){ //live
                    if(live<2) board[i][j]=0;
                    else if(live==2 || live==3) board[i][j]=1;
                    else if(live>3) board[i][j]=0;
                }
                else { //dead
                    if(live==3) board[i][j]=1;
                }
            }
        }
    }
};