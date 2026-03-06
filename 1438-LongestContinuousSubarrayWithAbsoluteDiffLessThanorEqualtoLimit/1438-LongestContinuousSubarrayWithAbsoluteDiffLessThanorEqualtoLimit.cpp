// Last updated: 3/6/2026, 11:50:49 PM
1class Solution {
2public:
3    int longestSubarray(vector<int>& nums, int limit) {
4        deque<int> maxD, minD;
5        int r=0, l=0; int n=nums.size();
6        int ans=0;
7        while(r<n){
8            while(!maxD.empty()&&nums[r]>maxD.back()){
9                maxD.pop_back();
10            }
11            maxD.push_back(nums[r]);
12            while(!minD.empty()&&nums[r]<minD.back()){
13                minD.pop_back();
14            }
15            minD.push_back(nums[r]);
16            if(maxD.front()-minD.front()>limit){
17                if(nums[l]==maxD.front()) maxD.pop_front();
18                if(nums[l]==minD.front()) minD.pop_front();
19                l++;
20            }
21
22            ans=max(ans, r-l+1);
23            r++;
24        }
25        return ans;
26    }
27};