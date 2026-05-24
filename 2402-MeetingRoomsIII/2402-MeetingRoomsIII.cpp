// Last updated: 5/24/2026, 1:14:19 PM
1class Solution {
2public:
3    int mostBooked(int n, vector<vector<int>>& meetings) {
4
5        sort(meetings.begin(), meetings.end());
6
7        priority_queue<int,
8                       vector<int>,
9                       greater<int>> availRooms;
10
11        for(int i=0;i<n;i++)
12            availRooms.push(i);
13
14        // {endTime, room}
15        priority_queue<pair<long long,int>,
16                       vector<pair<long long,int>>,
17                       greater<pair<long long,int>>> leave;
18
19        vector<int> cnt(n,0);
20
21        for(auto &m : meetings){
22
23            long long start = m[0];
24            long long end = m[1];
25            long long duration = end-start;
26
27            while(!leave.empty() &&
28                  leave.top().first <= start){
29
30                availRooms.push(leave.top().second);
31                leave.pop();
32            }
33
34            int room;
35
36            if(!availRooms.empty()){
37
38                room = availRooms.top();
39                availRooms.pop();
40
41                leave.push({end, room});
42            }
43            else{
44
45                auto [earliestEnd, roomNo] = leave.top();
46                leave.pop();
47
48                room = roomNo;
49
50                leave.push({earliestEnd + duration,
51                            room});
52            }
53
54            cnt[room]++;
55        }
56
57        int ans=0;
58
59        for(int i=1;i<n;i++){
60            if(cnt[i] > cnt[ans])
61                ans=i;
62        }
63
64        return ans;
65    }
66};