// Last updated: 7/16/2026, 11:56:02 PM
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        stack<int> st;
5        int n=nums2.size();
6        unordered_map<int,int> mpp; //value, nge
7        for(int i=n-1;i>=0;i--){
8            while(!st.empty()&& st.top()<=nums2[i]){
9                st.pop();
10            }
11            int ans= (st.empty())?-1:st.top();
12            st.push(nums2[i]);
13            mpp[nums2[i]]=ans;
14        }
15        vector<int> ans(nums1.size());
16        for(int i=0;i<nums1.size();i++){
17            int res=mpp[nums1[i]];
18            ans[i]=res;
19        }
20        return ans;
21    }
22};