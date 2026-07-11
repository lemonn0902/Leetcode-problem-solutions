// Last updated: 7/11/2026, 11:01:14 PM
1class Solution {
2public:
3    int findMaxLength(vector<int>& nums) {
4        unordered_map<int,int> mpp; //prefixSum, first occurence index
5        int prefix=0;
6        mpp[0]=-1;
7        int n=nums.size();
8        int maxi=0;
9        for(int i=0;i<n;i++){
10            if(nums[i]==1) prefix++;
11            else prefix--;
12            if(mpp.find(prefix)!=mpp.end()){
13                maxi=max(maxi, i-mpp[prefix]);
14            }
15            else mpp[prefix]=i;
16        }
17        return maxi;
18    }
19};