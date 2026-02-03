// Last updated: 2/3/2026, 11:56:15 AM
1class Solution {
2public:
3    int xsum(int l, int r, vector<int>& nums, int x) {
4        unordered_map<int, int> mpp;
5        int sum=0;
6        for (int i = l; i <= r; i++) {
7    mpp[nums[i]]++;
8}
9        vector<pair<int, int>> vec(mpp.begin(), mpp.end());
10        sort(vec.begin(), vec.end(), [](auto& a, auto& b) {
11            if (a.second == b.second)
12                return a.first > b.first; // sort by key if value same
13            return a.second > b.second;   // sort by value
14        });
15        for(auto it: vec){
16            if(x==0) break;
17            sum+=it.first*it.second;
18            x--;
19        }
20        return sum;
21    }
22    vector<int> findXSum(vector<int>& nums, int k, int x) {
23        int n = nums.size();
24        vector<int> res(n - k + 1, 0);
25        int l = 0;
26        int r = 0;
27        while (r < n) {
28            if (r - l + 1 == k) {
29                res[l] = xsum(l, r, nums, x);
30                l++;
31            }
32            r++;
33        }
34        return res;
35    }
36};