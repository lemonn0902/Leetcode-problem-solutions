// Last updated: 6/24/2026, 7:26:49 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        map<char, int> mpp1;
5        map<char, int> mpp2;
6        for(auto it:s) mpp1[it]++;
7        for(auto it:t) mpp2[it]++;
8        if(mpp1==mpp2) return true;
9        else return false;
10    }
11};