// Last updated: 1/31/2026, 3:45:55 PM
1class Solution {
2public:
3    bool backspaceCompare(string s, string t) {
4        string s1="";
5        string s2="";
6        int m=s.size();
7        int n=t.size();
8        int i=0; int j=0;
9        while(i<m){
10            if(s[i]=='#'){
11                if(!s1.empty())
12                s1.pop_back();
13            }
14            else{
15                s1.push_back(s[i]);
16            }
17            i++;
18        }
19        while(j<n){
20            if(t[j]=='#'){
21                if(!s2.empty())
22                s2.pop_back();
23            }
24            else {
25                s2.push_back(t[j]);
26            }
27            j++;
28        }
29        return s1==s2;
30
31    }
32};