// Last updated: 7/2/2025, 12:39:42 AM
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        priority_queue<pair<int, vector<int>>> pq;
        for(auto& it: points){
            int x=it[0];
            int y=it[1];
            int d= x*x + y*y;
            pq.push({d, it});
            if(pq.size()>k) pq.pop();
        }
        
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};