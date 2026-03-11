// Last updated: 3/11/2026, 12:47:53 PM
1class Solution {
2public:
3    int f(vector<int>& nums, int k){
4        int l=0;
5        int odd_count=0, ans=0;
6        for(int r=0;r<nums.size();r++){
7            if(nums[r]%2!=0) odd_count++;
8            while(odd_count>k){
9                if(nums[l]%2!=0) odd_count--;
10                l++;
11            }
12            ans+=(r-l+1);
13        }
14        return ans;
15    }
16    int numberOfSubarrays(vector<int>& nums, int k) {
17        if(k<0) return 0;
18        int x=f(nums,k);
19        int y=f(nums,k-1);
20        return x-y;
21    }
22};