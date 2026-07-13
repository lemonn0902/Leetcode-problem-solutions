// Last updated: 7/13/2026, 11:31:25 PM
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        int balance = 0;
5        int ans = 0;
6        for (char ch : s) {
7            if (ch == '(') {
8                balance++;
9            } else {
10                if (balance > 0)
11                    balance--;
12                else
13                    ans++;      
14            }
15        }
16        return ans + balance;   
17    }
18};