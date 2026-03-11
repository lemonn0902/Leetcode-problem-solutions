// Last updated: 3/11/2026, 12:32:21 PM
1class Solution {
2public:
3    long long f(vector<int>& nums, int goal){
4        int l=0; long long sum=0; long long count=0;
5        for(int r=0;r<nums.size();r++){
6            sum+=nums[r];
7            while(sum>goal&&l<=r){
8                sum-=nums[l];
9                l++;
10            }
11            count+=(r-l+1);
12        }
13        return count;
14    }
15    int numSubarraysWithSum(vector<int>& nums, int goal) {
16        if(goal<0) return 0;
17        long long x=f(nums, goal);
18        long long y=f(nums, goal-1);
19        return (int)x-y;
20    }
21};