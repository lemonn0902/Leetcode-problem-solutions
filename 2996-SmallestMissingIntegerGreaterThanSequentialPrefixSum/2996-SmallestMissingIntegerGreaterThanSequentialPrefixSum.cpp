// Last updated: 8/11/2026, 8:17:21 PM
1class Solution {
2public:
3    int missingInteger(vector<int>& nums) {
4        int sum = nums[0];
5
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] == nums[i - 1] + 1)
8                sum += nums[i];
9            else
10                break;
11        }
12
13        while (find(nums.begin(), nums.end(), sum) != nums.end()) {
14            sum++;
15        }
16
17        return sum;
18    }
19};