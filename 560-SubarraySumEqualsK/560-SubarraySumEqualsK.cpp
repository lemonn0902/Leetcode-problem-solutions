// Last updated: 11/27/2025, 11:42:33 PM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int res=0;
5        int sum=0;
6        unordered_map<int,int> prefixSum;
7        prefixSum[0]=1;
8        for(int i=0;i<nums.size();i++){
9            sum+=nums[i];
10            if(prefixSum.find(sum-k)!=prefixSum.end()){
11                res=res+prefixSum[sum-k];
12            }
13            prefixSum[sum]++;
14        }
15        return res;
16    }
17};