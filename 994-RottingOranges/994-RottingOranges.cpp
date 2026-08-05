// Last updated: 8/5/2026, 2:05:59 PM
1class Solution {
2public:
3    struct DSU{
4        vector<int> parent, rank_;
5        DSU(int n): parent(n), rank_(n,0){
6            iota(parent.begin(), parent.end(),0);
7        }
8        int find(int x){
9            if(parent[x]!=x) parent[x]=find(parent[x]);
10            return parent[x];
11        }
12        bool unite(int a, int b){
13            int ra=find(a), rb=find(b);
14            if(ra==rb) return false;
15            if(rank_[ra]<rank_[rb]) swap(ra,rb);
16            parent[rb]=ra;
17            if(rank_[ra]==rank_[rb]) rank_[ra]++;
18            return true;
19        }
20    };
21    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
22        int n=edges.size();
23        DSU dsu(n+1);
24        for(auto& e:edges){
25            if(!dsu.unite(e[0], e[1])){
26                return e;
27            }
28        }
29        return {};
30    }
31};