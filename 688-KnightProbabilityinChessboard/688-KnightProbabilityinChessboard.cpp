// Last updated: 7/31/2025, 2:12:50 PM
class Solution {
public:
    vector<pair<int, int>> directions = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };
    
    double find(int n, int moves, int r,int c, vector<vector<vector<double>>>& memo){
        if(r<0||r>=n||c<0||c>=n) return 0;
        if(moves==0) return 1.0;
        if(memo[r][c][moves]!=-1) return memo[r][c][moves];
        double prob=0.0;
        for (auto& dir : directions) {
        int nr = r + dir.first;
        int nc = c + dir.second;
        prob += find(n, moves - 1, nr, nc, memo) / 8.0;
        }
        memo[r][c][moves] = prob;
    return prob;
    }


    
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>> memo(n, vector<vector<double>>(n, vector<double>(k + 1, -1)));
        return find(n,k,row,column,memo);
    }
};