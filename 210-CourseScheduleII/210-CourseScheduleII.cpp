// Last updated: 8/5/2026, 5:16:33 PM
1class Solution {
2public:
3    void transform(string& curr, unordered_set<string>& transformed) {
4        int len = curr.size();
5        for (int i = 0; i < len; i++) {
6            char original = curr[i];
7            for (char ch = 'a'; ch <= 'z'; ch++) {
8                if (ch == original)
9                    continue;
10                curr[i] = ch;
11                transformed.insert(curr);
12            }
13            curr[i] = original;
14        }
15    }
16    int ladderLength(string beginWord, string endWord,
17                     vector<string>& wordList) {
18        queue<string> q;
19        q.push(beginWord);
20        int level = 1;
21        unordered_set<string> st(wordList.begin(), wordList.end());
22        if(st.find(endWord)==st.end()) return 0;
23        while (!q.empty()) {
24            int sz = q.size();
25            while (sz--) {
26                string curr = q.front();
27                if (curr == endWord)
28                    return level;
29                q.pop();
30                
31                unordered_set<string> transformed;
32                transform(curr, transformed);
33                for (string s : transformed) {
34                    if (st.find(s) != st.end()) {
35                        q.push(s);
36                        st.erase(s);
37                    }
38                }
39            }
40            level++;
41        }
42        return 0;
43    }
44};