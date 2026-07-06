// Last updated: 7/6/2026, 4:19:41 PM
1class Solution {
2public:
3
4    const int MOD = 1e9 + 7;
5    const int NEG = -1e9;
6
7    vector<vector<pair<int,int>>> dp;
8    vector<vector<int>> vis;
9
10    pair<int,int> solve(vector<string>& board,int i,int j){
11
12        if(i<0 || j<0)
13            return {NEG,0};
14
15        if(board[i][j]=='X')
16            return {NEG,0};
17
18        if(i==0 && j==0)
19            return {0,1};
20
21        if(vis[i][j])
22            return dp[i][j];
23
24        vis[i][j]=1;
25
26        auto left = solve(board,i,j-1);
27        auto up = solve(board,i-1,j);
28        auto diag = solve(board,i-1,j-1);
29
30        int best = max({left.first,up.first,diag.first});
31
32        if(best==NEG){
33            dp[i][j]={NEG,0};
34            return dp[i][j];
35        }
36
37        long long ways=0;
38
39        if(left.first==best)
40            ways=(ways+left.second)%MOD;
41
42        if(up.first==best)
43            ways=(ways+up.second)%MOD;
44
45        if(diag.first==best)
46            ways=(ways+diag.second)%MOD;
47
48        int val=0;
49
50        if(board[i][j]!='S' && board[i][j]!='E')
51            val=board[i][j]-'0';
52
53        dp[i][j]={best+val,(int)ways};
54
55        return dp[i][j];
56    }
57
58    vector<int> pathsWithMaxScore(vector<string>& board) {
59
60        int n=board.size();
61
62        dp.assign(n,vector<pair<int,int>>(n));
63        vis.assign(n,vector<int>(n,0));
64
65        auto ans=solve(board,n-1,n-1);
66
67        if(ans.first<0)
68            return {0,0};
69
70        return {ans.first,ans.second};
71    }
72};