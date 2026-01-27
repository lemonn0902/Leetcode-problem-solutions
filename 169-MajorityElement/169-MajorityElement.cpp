// Last updated: 1/27/2026, 4:13:57 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        int count=0;
6        int el;
7        for(int i=0;i<n;i++){
8            if(count==0){
9                count++;
10                el=nums[i];
11            }
12            else if(el==nums[i]){
13                count++;
14            }
15            else if(el!=nums[i]){
16                count--;
17            }
18              
19        } 
20        int cnt1=0;
21        for(int i=0;i<n;i++){
22            if(nums[i]==el) cnt1++;
23        }
24        if(cnt1> (n/2)) return el;
25        return -1;
26    }
27};