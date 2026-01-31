// Last updated: 1/31/2026, 4:22:15 PM
1class Solution {
2public:
3    int minOperations(vector<string>& logs) {
4        //assume the string "../" as backspace
5        int ans=0;
6        for(string str: logs){
7            if(str=="../"){
8                if(ans>0) ans--;
9            } 
10            else if(str=="./") continue;
11            else ans++;
12        }
13        
14        return ans;
15    }
16};