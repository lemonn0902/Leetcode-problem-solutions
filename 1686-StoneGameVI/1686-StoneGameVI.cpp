// Last updated: 8/2/2026, 1:17:24 PM
1class Solution {
2public:
3    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
4        int n = aliceValues.size();
5        int aliceScore = 0, bobScore = 0;
6        vector<pair<int,int>> v;
7        for (int i = 0; i < n; i++) {
8            v.push_back({aliceValues[i] + bobValues[i], i});
9        }
10
11        sort(v.rbegin(), v.rend());
12
13        int alice = 0, bob = 0;
14
15        for (int i = 0; i < n; i++) {
16            int idx = v[i].second;
17
18            if (i % 2 == 0)
19                alice += aliceValues[idx];
20            else
21                bob += bobValues[idx];
22        }
23        if(alice>bob) return 1;
24        else if(bob>alice) return -1;
25        else return 0;
26    }
27};