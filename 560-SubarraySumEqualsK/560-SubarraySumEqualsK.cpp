// Last updated: 1/27/2026, 12:39:46 AM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int res=0;
5        int sum=0;
6        unordered_map<int,int> mpp;
7        mpp[0]=1;
8        for(int i=0;i<nums.size();i++){
9            sum+=nums[i];
10            if(mpp.find(sum-k)!=mpp.end()){
11                res=res+mpp[sum-k];
12            }
13            mpp[sum]++;
14        }
15        return res;
16    }
17};