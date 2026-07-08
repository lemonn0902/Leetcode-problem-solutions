// Last updated: 7/8/2026, 11:35:24 PM
1class Solution {
2public:
3    void buildprefix(vector<int>&arr, vector<int>& prefix){
4        int n=arr.size();
5        for(int i=0;i<n;i++)
6            prefix[i+1]=prefix[i]^arr[i];
7    }
8    int getxor(int l,int r,vector<int>& prefix){
9        return prefix[r+1]^prefix[l];
10    }
11    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
12        int n=arr.size();
13        vector<int> prefix(n+1);
14        buildprefix(arr, prefix);
15        vector<int> res;
16        for(auto it:queries){
17            int l=it[0];
18            int r=it[1];
19            int ans=getxor(l,r,prefix);
20            res.push_back(ans);
21        }
22        return res;
23    }
24};