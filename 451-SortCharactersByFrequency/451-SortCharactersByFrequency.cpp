// Last updated: 5/17/2026, 3:35:59 PM
1class Solution {
2public:
3    string frequencySort(string s) {
4        priority_queue<pair<int,char>> pq;
5        unordered_map<char,int> freq;
6        for(char ch:s){
7            freq[ch]++;
8        }
9        for(auto it:freq) pq.push({it.second, it.first});
10        string ans;
11        while(pq.size()){
12            char c=pq.top().second;
13            
14            for(int i=0;i<pq.top().first;i++) ans+=c;
15            pq.pop();
16        }
17        return ans;
18    }
19};