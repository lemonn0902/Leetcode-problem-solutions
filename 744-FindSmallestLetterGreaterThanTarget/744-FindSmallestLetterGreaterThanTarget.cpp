// Last updated: 8/13/2026, 4:02:02 PM
1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4        int n = letters.size();
5        int lo=0, hi=n;
6        char ans ;
7        while(lo<hi){
8            int m = lo+(hi-lo)/2;
9            if(letters[m]<=target) lo=m+1;
10            else hi=m;
11        }
12        return letters[lo%n];
13    }
14};