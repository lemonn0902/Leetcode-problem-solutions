// Last updated: 7/11/2026, 11:09:06 PM
1class Solution {
2public:
3    int numSubarraysWithSum(vector<int>& nums, int goal) {
4        unordered_map<int,int> mpp; //prefixSum, freq
5        mpp[0]=1;
6        int prefix=0;
7        int n=nums.size();
8        int count=0;
9        for(int i=0;i<n;i++){
10            prefix+=nums[i];
11            if(mpp.find(prefix-goal)!=mpp.end()){
12                count=count+mpp[prefix-goal];
13            }
14            mpp[prefix]++;
15        }
16        return count;
17    }
18};