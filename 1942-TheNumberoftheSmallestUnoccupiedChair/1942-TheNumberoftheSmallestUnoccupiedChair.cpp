// Last updated: 5/24/2026, 12:08:54 PM
1class Solution {
2public:
3    int smallestChair(vector<vector<int>>& times, int targetFriend) {
4        int n=times.size();
5        vector<pair<int,int>> arrivals;
6        for(int i=0;i<n;i++){
7            arrivals.push_back({times[i][0],i});
8        }
9        sort(arrivals.begin(), arrivals.end());
10        priority_queue<int, vector<int>, greater<int>> availChairs;
11        for(int i=0;i<n;i++) availChairs.push(i); //all chairs are initially available
12        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> leavingTimes;
13        for(auto it:arrivals){
14            int arrivalTime=it.first;
15            int friendidx=it.second;
16            while(!leavingTimes.empty() && leavingTimes.top().first<=arrivalTime){
17                availChairs.push(leavingTimes.top().second);
18                leavingTimes.pop();
19            }
20            int chair=availChairs.top();
21            availChairs.pop();
22            if(friendidx==targetFriend) return chair;
23            leavingTimes.push({times[friendidx][1],chair});
24        }
25        return -1;
26    }
27};