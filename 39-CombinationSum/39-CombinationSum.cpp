// Last updated: 8/7/2026, 12:51:33 AM
1class Solution {
2public:
3    void solve(vector<int>& candidates,vector<vector<int>>& res,vector<int> curr, int target, int idx){
4        int n=candidates.size();
5        if(idx==n){
6            if(target==0){
7                res.push_back(curr);
8            }
9            return;
10        }
11        if(candidates[idx]<=target){
12            //picking 
13            curr.push_back(candidates[idx]);
14            solve(candidates, res, curr, target-candidates[idx],idx);
15            curr.pop_back();
16        }
17        //not pick
18        
19        solve(candidates, res, curr, target, idx+1);
20
21    }
22    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
23        vector<vector<int>> res;
24        vector<int> curr;
25        int sum=target;
26        solve(candidates, res, curr, target,0);
27        return res;
28    }
29};