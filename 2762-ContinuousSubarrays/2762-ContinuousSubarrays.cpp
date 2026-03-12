// Last updated: 3/12/2026, 1:14:11 PM
1class Solution {
2public:
3    long long continuousSubarrays(vector<int>& nums) {
4        deque<int> maxD, minD;
5        int l=0; long long ans=0;
6        for(int r=0;r<nums.size();r++){
7            while(!maxD.empty()&&nums[r]>maxD.back()){
8                maxD.pop_back();
9            }
10            maxD.push_back(nums[r]);
11            while(!minD.empty()&&nums[r]<minD.back()){
12                minD.pop_back();
13            }
14            minD.push_back(nums[r]);
15            while(maxD.front()-minD.front()>2){
16                if(nums[l]==maxD.front()) maxD.pop_front();
17                if(nums[l]==minD.front()) minD.pop_front();
18                l++;
19            }
20            ans=ans+(r-l+1);
21        }
22        return ans;
23    }
24};