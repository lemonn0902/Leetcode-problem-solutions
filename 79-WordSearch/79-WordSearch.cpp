class Solution {
public:
    bool isSafe(int newx, int newy, vector<vector<int>>& visited, vector<vector<char>>& board){
        int m = board.size();
        int n = (m > 0) ? board[0].size() : 0;
        if ( (newx >= 0 && newx < m) && (newy >= 0 && newy < n) && visited[newx][newy] == 0)
            return true;
        else
            return false;
    }

    void backtrack(int x, int y, vector<vector<char>>& board, string word, string path, vector<vector<int>>& visited, bool& ans, int index) {
        if (ans == true) return;  

        // Base case: 
        if (path.size() == word.size()) {
            if (path == word) {
                ans = true;
            }
            return;
        }

        // 4 directions

        // Down
        if (isSafe(x + 1, y, visited, board) && board[x + 1][y] == word[index + 1]) {
            visited[x + 1][y] = 1;
            backtrack(x + 1, y, board, word, path + board[x + 1][y], visited, ans, index + 1);
            visited[x + 1][y] = 0;
        }

        // Up
        if (isSafe(x - 1, y, visited, board) && board[x - 1][y] == word[index + 1]) {
            visited[x - 1][y] = 1;
            backtrack(x - 1, y, board, word, path + board[x - 1][y], visited, ans, index + 1);
            visited[x - 1][y] = 0;
        }

        // Right
        if (isSafe(x, y + 1, visited, board) && board[x][y + 1] == word[index + 1]) {
            visited[x][y + 1] = 1;
            backtrack(x, y + 1, board, word, path + board[x][y + 1], visited, ans, index + 1);
            visited[x][y + 1] = 0;
        }

        // Left
        if (isSafe(x, y - 1, visited, board) && board[x][y - 1] == word[index + 1]) {
            visited[x][y - 1] = 1;
            backtrack(x, y - 1, board, word, path + board[x][y - 1], visited, ans, index + 1);
            visited[x][y - 1] = 0;
        }
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = (m > 0) ? board[0].size() : 0;
        vector<vector<int>> visited(m, vector<int>(n, 0));
        bool ans = false;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == word[0]) {  // first letter match
                    visited[i][j] = 1;
                    backtrack(i, j, board, word, string(1, board[i][j]), visited, ans, 0);
                    visited[i][j] = 0;

                    if (ans) return true;
                }
            }
        }
        return ans;
    }
};
