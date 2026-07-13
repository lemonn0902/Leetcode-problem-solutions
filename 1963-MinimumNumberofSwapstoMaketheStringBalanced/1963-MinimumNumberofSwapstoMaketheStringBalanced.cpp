// Last updated: 7/14/2026, 12:13:54 AM
1class Solution {
2public:
3    int minSwaps(string s) {
4        int balance=0;
5        int ans=0;
6        for(char ch:s){
7            if(ch=='[') balance++;
8            else balance--;
9            ans=max(ans, -balance);
10        }
11        return (ans+1)/2;
12    }
13};