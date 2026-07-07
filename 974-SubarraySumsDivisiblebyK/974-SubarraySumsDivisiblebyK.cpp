// Last updated: 7/7/2026, 11:27:41 PM
1class Solution {
2public:
3    int subarraysDivByK(vector<int>& nums, int k) {
4        int n=nums.size();
5        unordered_map<int,int> mpp; //prefixSum, remainder
6        int sum=0;
7        int count=0;
8        mpp[0]=1;
9        for(int i=0;i<n;i++){
10            sum+=nums[i];
11            int rem=sum%k;
12            if(rem<0) rem+=k;
13            count+=mpp[rem];
14            mpp[rem]++;
15        }
16        return count;
17    }
18};