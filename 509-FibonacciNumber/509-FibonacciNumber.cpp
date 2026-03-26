// Last updated: 3/26/2026, 11:24:19 PM
1class Solution {
2public:
3    int fib(int n) {
4        if(n==0) return 0;
5        if(n==1) return 1;
6        int prev2=0;
7        int prev1=1;
8        
9        for(int i=2;i<=n;i++){
10            int curr=prev2+prev1;
11            prev2=prev1;
12            prev1=curr;
13        }
14        return prev1;
15    }
16};