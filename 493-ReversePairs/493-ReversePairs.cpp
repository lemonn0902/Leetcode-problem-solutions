// Last updated: 1/29/2026, 12:13:49 AM
1class Solution {
2public:
3    int merge(vector<int>& nums, vector<int>& temp, int low, int mid,
4              int high) {
5        int left = low;
6        int right = mid + 1;
7        int ans = 0;
8        int k = low;
9        int j = mid + 1;
10        for (int i = low; i <= mid; i++) {
11            while (j <= high && nums[i] > 2LL * nums[j]) {
12                j++;
13            }
14            ans += (j - (mid + 1));
15        }
16        while (left <= mid && right <= high) {
17            if (nums[left] <= nums[right]) {
18                temp[k++] = nums[left++];
19            } else {
20                temp[k++] = nums[right++];
21                
22            }
23        }
24        while (left <= mid)
25            temp[k++] = nums[left++];
26        while (right <= high)
27            temp[k++] = nums[right++];
28        for (int i = low; i <= high; i++) {
29            nums[i] = temp[i];
30        }
31        return ans;
32    }
33    int mergeSort(vector<int>& nums, vector<int>& temp, int low, int high) {
34        int res = 0;
35        if (low < high) {
36            int mid = low + (high - low) / 2;
37            res += mergeSort(nums, temp, low, mid);
38            res += mergeSort(nums, temp, mid + 1, high);
39            res += merge(nums, temp, low, mid, high);
40        }
41
42        return res;
43    }
44    int reversePairs(vector<int>& nums) {
45        int n = nums.size();
46        vector<int> temp(n);
47        int count = mergeSort(nums, temp, 0, n - 1);
48        return count;
49    }
50};