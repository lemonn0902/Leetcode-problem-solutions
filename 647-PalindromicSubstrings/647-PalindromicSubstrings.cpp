// Last updated: 1/31/2026, 5:10:41 PM
1class Solution {
2public:
3    int expand(string str, int left, int right){
4        int count=0;
5        int n=str.size();
6        while(left>=0 && right<n && str[left]==str[right]){
7            count++; //found one valid, now shrink and try again
8            left--;
9            right++;
10        }
11        return count;
12    }
13    int countSubstrings(string s) {
14        int total=0;
15        for(int center=0;center<s.size();center++){
16            int len1=expand(s, center, center);
17            int len2=expand(s, center, center+1);
18            total+=len1+len2;
19        }
20        return total;
21    }
22};