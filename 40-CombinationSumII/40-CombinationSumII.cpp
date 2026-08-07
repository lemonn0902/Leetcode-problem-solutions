// Last updated: 8/7/2026, 4:36:57 PM
1class Solution {
2public:
3    void solve(vector<int>& candidates, int target,vector<vector<int>>& res,vector<int>& curr, int idx){
4        int n=candidates.size();
5        if(target==0){
6            res.push_back(curr);
7            return;
8        }
9        if(target<0 ||idx==n){
10            return;
11        }
12        curr.push_back(candidates[idx]);
13    solve(candidates, target - candidates[idx], res, curr, idx + 1);
14    curr.pop_back();
15    int next=idx+1;
16    while(next<n&&candidates[next]==candidates[idx]) next++;
17    solve(candidates, target , res, curr, next);
18
19    }
20    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
21        sort(candidates.begin(), candidates.end());
22        vector<vector<int>> res;
23        vector<int> curr;
24        solve(candidates,target,res,curr,0);
25        return res;
26    }
27};