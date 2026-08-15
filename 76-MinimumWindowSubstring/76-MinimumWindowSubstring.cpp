// Last updated: 8/15/2026, 8:49:21 PM
1class Solution {
2public:
3    string minWindow(string s, string t) {
4        int m = s.size();
5        int n = t.size();
6        if (n > m)
7            return "";
8        int mini = INT_MAX;
9        unordered_map<char, int> tfreq;
10        unordered_map<char, int> freq;
11        for (int i = 0; i < n; i++) {
12            tfreq[t[i]]++;
13        }
14        int req = tfreq.size();
15        int l = 0;
16        int r = 0;
17        int startIndex = 0;
18        int formed = 0;
19        while (r < m) {
20            freq[s[r]]++;
21            if (tfreq.count(s[r]) && tfreq[s[r]] == freq[s[r]]) {
22                formed++;
23            }
24            while (formed == req) {
25                if (1 + r - l < mini) {
26                    mini = 1 + r - l;
27                    startIndex = l;
28                }
29                freq[s[l]]--;
30                if (tfreq[s[l]] && tfreq[s[l]] > freq[s[l]])
31                    formed--;
32                l++;
33            }
34            r++;
35        }
36        return mini == INT_MAX ? "" : s.substr(startIndex, mini);
37    }
38};