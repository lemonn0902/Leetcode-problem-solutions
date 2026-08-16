// Last updated: 8/16/2026, 7:09:59 PM
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        int ans=0;
5        sort(people.begin(), people.end());
6        int l=0;
7        int r=people.size()-1;
8        while(l<=r){
9            ans++;
10            if(people[l]+people[r]<=limit){
11                l++;
12                r--;
13            }
14            else r--;
15        }
16        return ans;
17    }
18};