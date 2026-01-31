// Last updated: 1/31/2026, 12:29:06 PM
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        int n=chars.size();
5        if(n==1) return 1;
6        int idx=0;
7        int i=0;
8        while(i<n){
9            int count=0;
10            char curr=chars[i];
11            while(i<n && chars[i]==curr){
12                count++;
13                i++;
14            }
15            chars[idx++]=curr;
16            if(count>1){
17                string num=to_string(count);
18                for(char c:num){
19                    chars[idx++]=c;
20                }
21            }
22        }
23        return idx;
24    }
25};