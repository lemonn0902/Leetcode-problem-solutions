// Last updated: 5/10/2026, 1:09:50 AM
1class Solution {
2public:
3    long long pickGifts(vector<int>& gifts, int k) {
4        priority_queue<int> pq(gifts.begin(), gifts.end());
5        while (k) {
6            int x = pq.top();
7            pq.pop();
8            x = floor(sqrt(x));
9            pq.push(x);
10            k--;
11        }
12        long long sum = 0;
13        for (int i = 0; i < gifts.size(); i++) {
14            sum += pq.top();
15            pq.pop();
16        }
17        return sum;
18    }
19};