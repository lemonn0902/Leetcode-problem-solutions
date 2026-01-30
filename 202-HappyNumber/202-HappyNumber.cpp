// Last updated: 1/30/2026, 12:54:55 PM
1class Solution {
2public:
3    int square(int n){
4        int ans=0;
5        while(n!=0){
6            int r=n%10;
7            int sq=r*r;
8            ans=ans+sq;
9            n=n/10;
10        }
11        return ans;
12    }
13    bool isHappy(int n) {
14        int slow=n;
15        int fast=n;
16        while(true){
17            slow=square(slow);
18            fast=square(square(fast));
19            if(slow==fast) {
20                if(slow==1) return true;
21                break;
22            }
23        }
24        return false;
25    }
26};