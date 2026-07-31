// Last updated: 7/31/2026, 10:08:36 PM
1class Solution {
2public:
3    int minimumPushes(string word) {
4        unordered_map<int,vector<char>> mpp;
5        int n=word.size();
6        int k=2;
7        for(int i=0;i<n;i++){
8            mpp[k].push_back(word[i]);
9            if(k==9) k=2;
10            else k++;
11        }
12        int ans=0;
13        for(auto it:mpp){
14            int l=it.second.size();
15            for(int i=0;i<l;i++){
16                ans=ans+(i+1);
17            }
18        }
19        return ans;
20    }
21};