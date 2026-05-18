// Last updated: 5/18/2026, 7:26:50 PM
1class Solution {
2public:
3    int kthSmallest(vector<vector<int>>& matrix, int k) {
4        priority_queue<
5            tuple<int,int,int>,          // value,row,col
6            vector<tuple<int,int,int>>,
7            greater<tuple<int,int,int>>
8        > pq;
9        int n=matrix.size();
10        for(int i=0;i<n;i++){
11            pq.push({matrix[0][i],0,i});
12        }
13        while(--k){
14            auto [val,row,col]=pq.top();
15            pq.pop();
16            if(row+1<n){
17                pq.push({matrix[row+1][col], row+1, col});
18            }
19        }
20        return get<0>(pq.top());
21        
22    }
23};