// Last updated: 8/7/2026, 3:49:45 PM
1class Solution {
2public:
3    void solve(vector<int>& candidates, vector<vector<int>>& res,vector<int>& curr,int target,int idx){
4        int n=candidates.size();
5        if(idx==n){
6            if(target==0){
7                res.push_back(curr);
8            }
9            return;
10        }
11        if(candidates[idx]<=target){
12            curr.push_back(candidates[idx]);
13            solve(candidates,res,curr,target-candidates[idx],idx);
14            curr.pop_back();
15        }
16        solve(candidates,res,curr,target,idx+1);
17    }
18    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
19        vector<vector<int>> res;
20        vector<int> curr;
21        solve(candidates,res,curr,target,0);
22        return res;
23    }
24};