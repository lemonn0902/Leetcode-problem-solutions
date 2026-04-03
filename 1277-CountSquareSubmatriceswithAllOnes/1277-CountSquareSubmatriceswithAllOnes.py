# Last updated: 4/3/2026, 5:40:44 PM
1class Solution:
2    def countSquares(self, matrix: List[List[int]]) -> int:
3        row=len(matrix)
4        col=len(matrix[0])
5        dp = [[0] * (col + 1) for _ in range(row + 1)]
6        tot=0
7        for i in range(row):
8            for j in range(col):
9                if matrix[i][j]==1:
10                    dp[i+1][j+1]=1+min(dp[i+1][j], dp[i][j+1],dp[i][j])
11                    tot+=dp[i+1][j+1]
12        return tot
13
14        