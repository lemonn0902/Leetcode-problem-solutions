// Last updated: 9/23/2025, 1:27:50 PM
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int ans=0;
        priority_queue<int> pq;
        for(int i=0;i<piles.size();i++) pq.push(piles[i]);
        while(k!=0){
            int n=pq.top();
            pq.pop();
            int change= n-n/2;
            pq.push(change);
            k--;
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;

    }
};