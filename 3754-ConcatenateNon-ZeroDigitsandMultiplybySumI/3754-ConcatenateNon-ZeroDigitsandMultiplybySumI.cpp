// Last updated: 7/7/2026, 12:28:50 PM
1class Solution {
2public:
3    long long sumAndMultiply(int n) {
4        string no=to_string(n);
5        string h;
6        long long sum=0;
7        int len=no.size();
8        for(int i=0;i<len;i++){
9            if(no[i]=='0') continue;
10            h=h+no[i];
11            sum=sum+(no[i]-'0');
12        }
13        if(sum==0) return 0;
14        long long ne=stoi(h);
15        long long ans=sum*ne;
16        return ans;
17
18    }
19};