// Last updated: 8/13/2026, 3:49:03 PM
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7        int lo=0, hi=n;
8        while(lo<hi){
9            int m=lo+(hi-lo)/2;
10            if(!isBadVersion(m)) lo=m+1;
11            else hi=m;
12        }
13        return lo;
14    }
15};