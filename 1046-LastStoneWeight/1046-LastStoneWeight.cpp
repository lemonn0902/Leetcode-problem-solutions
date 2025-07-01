// Last updated: 7/2/2025, 12:18:00 AM
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1) return stones[0];
        priority_queue<int> pq(stones.begin(), stones.end());
        
        
        while(pq.size()>1){
            int y= pq.top();
            pq.pop();
            int x= pq.top();
            pq.pop();
            
            if(x!=y){
                
                pq.push(y-x);
            }
        }
        return pq.size()==1? pq.top():0;
    }
};