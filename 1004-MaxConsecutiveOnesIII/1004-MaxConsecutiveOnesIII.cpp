// Last updated: 3/6/2026, 7:51:59 PM
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int ans = 0;
5        int l = 0, r = 0;
6        int zeroCount = 0;
7
8        while(r < nums.size()){
9
10            if(nums[r] == 0)
11                zeroCount++;
12
13            while(zeroCount > k){
14                if(nums[l] == 0)
15                    zeroCount--;
16                l++;
17            }
18
19            ans = max(ans, r - l + 1);
20            r++;
21        }
22
23        return ans;
24    }
25};