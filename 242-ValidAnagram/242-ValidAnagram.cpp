// Last updated: 6/24/2026, 7:29:46 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        unordered_map<char,int> mpp;
5        if(s.size()!=t.size()) return false;
6        for(int i=0;i<s.size();i++){
7            mpp[s[i]]++;
8            mpp[t[i]]--;
9        }
10        for(auto it:mpp){
11            if(it.second!=0) return false;
12        }
13        return true;
14    }
15};