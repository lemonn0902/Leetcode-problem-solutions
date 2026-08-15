// Last updated: 8/15/2026, 11:38:22 PM
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int gasSum=0;
5        int costSum=0;
6        for(int n:gas) gasSum+=n;
7        for(int n:cost) costSum+=n;
8        if(gasSum<costSum) return -1;
9        int start=0;
10        int tot=0;
11        for(int i=0;i<gas.size();i++){
12            tot+=(gas[i]-cost[i]);
13            if(tot<0){
14                tot=0;
15                start=i+1;
16            }
17        }
18        return start;
19    }
20};