// Last updated: 3/5/2026, 4:52:24 PM
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        unordered_map<char,int> freq;
5        int maxi=0;
6        int maxFreq=0;
7        int l=0, r=0;
8        int n=s.size();
9        while(r<n){
10            freq[s[r]]++;
11            maxFreq=max(maxFreq, freq[s[r]]);
12            if(r-l+1 - maxFreq >k){
13                freq[s[l]]--;
14                l++;
15            }
16            maxi=max(maxi, r-l+1);
17            r++;
18        }
19        return maxi;
20    }
21};