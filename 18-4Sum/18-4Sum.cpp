// Last updated: 8/10/2026, 12:36:05 AM
1class Solution {
2public:
3
4    int atMostK(vector<int>& nums, int k) {
5        int left = 0;
6        int right = 0;
7        int count = 0;
8
9        unordered_map<int, int> mp;
10
11        while(right < nums.size()) {
12
13            mp[nums[right]]++;
14
15            while(mp.size() > k) {
16                mp[nums[left]]--;
17
18                if(mp[nums[left]] == 0) {
19                    mp.erase(nums[left]);
20                }
21
22                left++;
23            }
24
25            count += right - left + 1;
26
27            right++;
28        }
29
30        return count;
31    }
32
33    int subarraysWithKDistinct(vector<int>& nums, int k) {
34        return atMostK(nums, k) - atMostK(nums, k - 1);
35    }
36};