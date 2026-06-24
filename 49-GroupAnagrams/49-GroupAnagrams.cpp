// Last updated: 6/24/2026, 7:43:34 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        vector<vector<string>> res;
5        unordered_map<string, vector<string>> mpp;
6        for(int i=0;i<strs.size();i++){
7            string curr=strs[i];
8            sort(curr.begin(), curr.end());
9            mpp[curr].push_back(strs[i]);
10        }
11        for(auto it: mpp){
12            res.push_back(it.second);
13        }
14        return res;
15    }
16};