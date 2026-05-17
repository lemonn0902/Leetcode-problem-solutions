// Last updated: 5/17/2026, 12:17:59 PM
1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4        vector<string> ans(score.size(),"");
5        priority_queue<int> pq(score.begin(), score.end());
6        int k=1;
7        while(pq.size()){
8            int x=pq.top();
9            pq.pop();
10            auto it=find(score.begin(), score.end(), x);
11            int idx=it-score.begin();
12            if(k==1 ) ans[idx]="Gold Medal";
13            else if(k==2) ans[idx]="Silver Medal";
14            else if(k==3) ans[idx]="Bronze Medal";
15            else ans[idx]=to_string(k);
16            k++;
17        }
18        return ans;
19    }
20};