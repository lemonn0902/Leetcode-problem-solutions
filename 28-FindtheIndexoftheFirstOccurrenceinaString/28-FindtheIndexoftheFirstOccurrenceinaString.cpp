// Last updated: 7/6/2026, 3:41:14 PM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int m=haystack.size();
5        int n=needle.size();
6        vector<int> lps(n,0);
7        int len=0;
8        int k=1;
9        while(k<n){
10            if(needle[len]==needle[k]){
11                len++;
12                lps[k]=len;
13                k++;
14            }
15            else{
16                if(len==0){
17                    lps[k]=0;
18                    k++;
19                }
20                else{
21                    len=lps[len-1];
22                }
23            }
24        }
25        int i=0;
26        int j=0;
27        while(i<m){
28            if(haystack[i]==needle[j]){
29                i++;
30                j++;
31            }
32            if(j==n) return i-j;
33            else if(i<m && haystack[i]!=needle[j]){
34                if(j==0) i++;
35                else j=lps[j-1];
36            }
37        }
38        return -1;
39    }
40};