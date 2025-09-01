// Last updated: 9/1/2025, 1:20:32 PM
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<tuple<double,int,int>> pq;
        for(int i=0;i<n;i++){
            int p=classes[i][0];
            int t=classes[i][1];
            double ratio=(double)p/t;
            double del=((double)(p+1) / (t+1))-ratio;
            pq.push({del,p,t});
        }
        while(extraStudents--){
            auto [g,p,t]=pq.top();
            pq.pop();
            p++, t++;
            double ratio=(double)p/t;
            double del=((double)(p+1) / (t+1))-ratio;
            pq.push({del,p,t});

        }
        double tot=0.0;
        while(!pq.empty()){
            auto [g,p,t]=pq.top();
            pq.pop();
            tot+=(double)p/t;
        }
        return tot/classes.size();
    }
};