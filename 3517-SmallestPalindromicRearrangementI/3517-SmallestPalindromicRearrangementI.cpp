// Last updated: 7/29/2026, 11:18:13 PM
1class Solution {
2public:
3    string smallestPalindrome(string s) {
4        map<char, int> mpp;
5        string temp = s;
6        sort(temp.begin(), temp.end());
7        int n = s.size();
8        if(n==1) return s;
9        for (int i = 0; i < n; i++) {
10            mpp[temp[i]]++;
11        }
12        string res;
13        char mid='\0';
14        for (auto it : mpp) {
15            int freq = it.second;
16            res.append(freq/2, it.first);
17            if(freq%2==1) mid=it.first;
18            
19        }
20        string rev = res;
21        reverse(rev.begin(), rev.end());
22        if(mid!='\0') res+=mid;
23        res += rev;
24        return res;
25    }
26};