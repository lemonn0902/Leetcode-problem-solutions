// Last updated: 7/11/2026, 11:47:34 PM
1class NumMatrix {
2public:
3    vector<vector<int>> prefix;
4    NumMatrix(vector<vector<int>>& matrix) {
5        int m=matrix.size();
6        int n=matrix[0].size();
7        prefix.assign(m + 1, vector<int>(n + 1, 0));
8        for(int i=1;i<=m;i++){
9            for(int j=1;j<=n;j++){
10                prefix[i][j]+=matrix[i-1][j-1]+prefix[i][j-1]+prefix[i-1][j]-prefix[i-1][j-1];
11            }
12        }
13
14    }
15    int sumRegion(int row1, int col1, int row2, int col2) {
16       return prefix[row2 + 1][col2 + 1]
17             - prefix[row1][col2 + 1]
18             - prefix[row2 + 1][col1]
19             + prefix[row1][col1];
20
21    }
22};
23
24/**
25 * Your NumMatrix object will be instantiated and called as such:
26 * NumMatrix* obj = new NumMatrix(matrix);
27 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
28 */