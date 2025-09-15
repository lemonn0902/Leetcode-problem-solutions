// Last updated: 9/15/2025, 1:14:10 PM
class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(int n:nums){
            st.insert(n);
        }
        vector<int> res;
        priority_queue<int> pq;
        for(int n:st){
            pq.push(n);
        }
        while(k!=0){
            if(pq.empty()) break;
            res.push_back(pq.top());
            pq.pop();
            k--;
        }
        return res;
    }
};