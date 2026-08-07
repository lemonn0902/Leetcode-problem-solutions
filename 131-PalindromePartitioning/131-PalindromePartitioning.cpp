// Last updated: 8/7/2026, 5:17:52 PM
1class Solution {
2public:
3    bool isPal(string s, int l, int r){
4        while(l<r) if(s[l++]!=s[r--]) return false;
5        return true;
6    }
7    void solve(string s,vector<vector<string>>& res,vector<string>& curr, int idx){
8        int n = s.size();
9        if(idx==n){
10            res.push_back(curr);
11            return ;
12        }
13        for(int end=idx;end<n;end++){
14            if(!isPal(s,idx,end)) continue;
15            curr.push_back(s.substr(idx, end-idx+1));
16            solve(s,res,curr,end+1);
17            curr.pop_back();
18        }
19    }
20    vector<vector<string>> partition(string s) {
21        vector<vector<string>> res;
22        vector<string> curr;
23         solve(s,res,curr,0);
24         return res;
25    }
26};