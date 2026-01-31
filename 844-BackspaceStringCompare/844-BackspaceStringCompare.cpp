// Last updated: 1/31/2026, 4:07:13 PM
1class Solution {
2public:
3    int getValidChar(string str, int idx){
4        int back=0;
5        while(idx>=0){
6            if(str[idx]=='#') back++;
7            else if(back>0) back--;
8            else break;
9            idx--;
10        }
11        return idx;
12    }
13    bool backspaceCompare(string s, string t) {
14        int i=s.size()-1;
15        int j=t.size()-1;
16        while(i>=0 || j>=0){
17            i= getValidChar(s,i);
18            j=getValidChar(t, j);
19            if(i<0&&j<0) return true;
20            else if(i<0||j<0) return false;
21            else if(s[i]!=t[j]) return false;
22            i--;
23            j--;
24        }
25        return true;
26    }
27};