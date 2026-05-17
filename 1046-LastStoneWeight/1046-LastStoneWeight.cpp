// Last updated: 5/17/2026, 12:04:21 PM
1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        priority_queue<int> pq(stones.begin(), stones.end());
5        while(pq.size()>1){
6            int x= pq.top();
7            pq.pop();
8            int y=pq.top();
9            pq.pop();
10            if(x==y) continue;
11            else{
12                pq.push( abs(x-y) );
13            }
14        }
15        return pq.size()==0? 0:pq.top();
16    }
17};