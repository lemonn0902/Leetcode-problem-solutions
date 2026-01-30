// Last updated: 1/30/2026, 11:32:45 AM
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(), people.end());
5        int n=people.size();
6        int l=0;
7        int r=n-1;
8        int ans=0;
9        while(l<=r){
10            int sum= people[l]+people[r];
11            if(sum>limit){
12                ans+=1;
13                r--;
14            }
15            else{
16                ans+=1;
17                l++;
18                r--;
19            }
20        }
21        return ans;
22    }
23};