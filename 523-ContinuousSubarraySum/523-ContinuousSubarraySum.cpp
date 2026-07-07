// Last updated: 7/7/2026, 11:46:13 PM
1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        int n=nums.size();
5        unordered_map<int,int> mpp; //prefixsum, first occurence index
6        mpp[0]=-1;
7        int sum=0;
8        for(int i=0;i<n;i++){
9            sum+=nums[i];
10            int rem=sum%k;
11            if(mpp.find(rem)!=mpp.end()){
12                int len=i-mpp[rem];
13                if(len>1) return true;
14            } 
15            else mpp[rem]=i;
16        }
17        return false;
18    }
19};