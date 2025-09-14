// Last updated: 9/14/2025, 4:02:10 PM
class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int i = 0;
        int j = 0;
        unordered_map<int,int> mp; 
        int n = arrivals.size();
        int discards = 0;
        deque<int> q;
        
        vector<int> removed(n,false);
        for(int i = 0;i<n;i++) { 
            q.push_back(arrivals[i]);
            mp[arrivals[i]]++;
            if(q.size()>w){
                if(removed[i-w]==false) mp[q.front()]--;
                q.pop_front();
                
            }
            if(mp[arrivals[i]]>m){ 
                removed[i]=true;
                discards++;
                mp[arrivals[i]]--;
            }
        }
        return discards;
        
    }
};