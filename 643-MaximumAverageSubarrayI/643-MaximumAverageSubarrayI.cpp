// Last updated: 2/2/2026, 11:54:09 AM
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        double avg=0.0;
5        double sum=0.0;
6        for(int i=0;i<k;i++){
7            sum+=nums[i];
8        }
9        //if(sum>0) 
10        avg=sum/k;
11        for(int i=k;i<nums.size();i++){
12            sum+=nums[i];
13            sum-=nums[i-k];
14            avg=max(avg, sum/k);
15        }
16        return avg;
17    }
18};