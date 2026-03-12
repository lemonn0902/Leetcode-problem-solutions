// Last updated: 3/12/2026, 3:40:10 PM
1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        long long sum = 0;
5        long long maxi = 0;
6        unordered_set<int> st;
7        int l = 0;
8        for (int r = 0; r < nums.size(); r++) {
9
10            while (st.count(nums[r])) {
11                sum = sum - nums[l];
12                st.erase(nums[l]);
13                l++;
14            }
15            if (r - l + 1 > k) {
16                sum -= nums[l];
17                st.erase(nums[l]);
18                l++;
19            }
20            sum = sum + nums[r];
21            st.insert(nums[r]);
22            if(r-l+1==k) maxi = max(maxi, sum);
23        }
24        return maxi;
25    }
26};