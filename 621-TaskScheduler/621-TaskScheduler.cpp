// Last updated: 7/3/2025, 7:58:45 PM
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int time=0;
        vector<int> freq(26,0);
        for(auto task: tasks){
            freq[task-'A']++;
        }
        priority_queue<int> pq;
        for(auto it: freq){
            if(it>0)
            pq.push(it);
        }
        queue<pair<int,int>> q;
        while(!pq.empty()||!q.empty()){
            time++;
            if(!pq.empty()){
                int t=pq.top();
                pq.pop();
                if(t>1){
                    q.push({t-1,time+n});
                }
            }
            if(!q.empty()&& time==q.front().second){
                pq.push(q.front().first);
                q.pop();

            }
        }
        return time;
    }
};