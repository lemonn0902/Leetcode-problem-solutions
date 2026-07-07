// Last updated: 7/7/2026, 11:10:42 PM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int n=nums.size();
5        unordered_map<int,int> mpp; //prefixSum, count
6        int sum=0;
7        int count=0;
8        mpp[0]=1;
9        for(int i=0;i<n;i++){
10            sum+=nums[i];
11            if(mpp.find(sum-k)!=mpp.end()){
12                count=count+mpp[sum-k];
13            }
14            mpp[sum]++;
15        }
16        return count;
17    }
18};