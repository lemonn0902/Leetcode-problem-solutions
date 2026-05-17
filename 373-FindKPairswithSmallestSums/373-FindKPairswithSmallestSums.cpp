// Last updated: 5/17/2026, 4:20:14 PM
1class Solution {
2public:
3    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
4        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
5        vector<vector<int>> ans;
6        int n=nums1.size();
7        int m=nums2.size();
8        for(int i=0;i<n;i++){
9            pq.push({nums1[i]+nums2[0],i,0});
10        }
11        while(k--){
12            auto [s,i,j]=pq.top();
13            ans.push_back({nums1[i], nums2[j]});
14            pq.pop();
15            if(j+1<m){
16                pq.push({nums1[i]+nums2[j+1],i,j+1});
17            }
18        }
19        return ans;
20    }
21};