// Last updated: 8/6/2026, 12:34:11 PM
1class Solution {
2public:
3    int getP(int i){
4        int p=1;
5        while(i!=0){
6            int r=i%10;
7            p=p*r;
8            i=i/10;
9        }
10        return p;
11    }
12    int smallestNumber(int n, int t) {
13        for(int i=n;;i++){
14            int prod=getP(i);
15            if(prod%t==0) return i;
16        }
17        return 0;
18    }
19};