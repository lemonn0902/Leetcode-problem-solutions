# Last updated: 4/5/2026, 12:02:24 PM
1class Solution:
2    def maximalSquare(self, matrix: List[List[str]]) -> int:
3        rows=len(matrix)
4        cols=len(matrix[0])
5        dp=[[0]*(cols) for _ in range(rows)]
6        ans=0
7        for i in range(rows):
8            for j in range(cols):
9                if matrix[i][j]=="1":
10                    if i==0 or j==0:
11                        dp[i][j]=1
12                    else:
13                        dp[i][j]=1+min(dp[i-1][j], dp[i-1][j-1], dp[i][j-1])
14                    area=dp[i][j]*dp[i][j]
15                    if area>ans:
16                         ans=area
17        return ans
18
19