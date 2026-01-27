// Last updated: 1/27/2026, 6:05:23 PM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        int longest = 0;
5        unordered_set<int> st(nums.begin(), nums.end());
6        for(int s: st){
7            if(st.find(s-1)==st.end()){
8                //found one possible starting point
9                int count=1;
10                while(st.find(s+count)!=st.end()){
11                    count++;
12                }
13                longest = max(longest, count);
14            }
15        }
16        return longest;
17    }
18};