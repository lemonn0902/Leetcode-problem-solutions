// Last updated: 8/4/2026, 7:06:22 PM
1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) {
4        int n = grid.size();
5        int m = grid[0].size();
6        queue<pair<int, int>> q;
7        int fresh = 0;
8        for (int i = 0; i < n; i++) {
9            for (int j = 0; j < m; j++) {
10                if (grid[i][j] == 2)
11                    q.push({i, j});
12
13                else if (grid[i][j] == 1)
14                    fresh++;
15            }
16        }
17        if (fresh == 0)
18            return 0;
19        vector<int> dr = {-1, 1, 0, 0};
20        vector<int> dc = {0, 0, -1, 1};
21        int tot = 0;
22        while (!q.empty()) {
23            int sz = q.size();
24            bool isLevel=false;
25            while (sz--) {
26                auto [r, c] = q.front();
27                q.pop();
28                for (int k = 0; k < 4; k++) {
29                    int nr = r + dr[k];
30                    int nc = c + dc[k];
31                    if (nr < 0 || nc < 0 || nr >= n || nc >= m)
32                        continue;
33                    if (grid[nr][nc] == 1) {
34                        q.push({nr, nc});
35                        grid[nr][nc] = 2;
36                        fresh--;
37                        isLevel=true;
38                    }
39                }
40            }
41            if (isLevel)
42                tot++;
43        }
44        if(fresh!=0) return -1;
45        return tot;
46    }
47};