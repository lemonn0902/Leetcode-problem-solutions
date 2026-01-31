// Last updated: 1/31/2026, 1:08:56 PM
1class Solution {
2public:
3    bool canChange(string start, string target) {
4        int n=start.size();
5        int i=0; int j=0;
6        while(i<=n && j<=n){
7            while(i<=n && target[i]=='_') i++;
8            while(j<=n && start[j]=='_') j++;
9            if(i==n || j==n) return i==n && j==n;
10            else if(target[i]!=start[j]) return false;
11            else if(target[i]=='L'){
12                if(i>j) return false;
13            }
14            else{
15                if(j>i) return false;
16            }
17            i++;
18            j++;
19        }
20        return true;
21    }
22};