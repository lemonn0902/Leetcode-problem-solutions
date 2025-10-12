// Last updated: 10/12/2025, 3:52:56 PM
class Solution {
public:
    double bfs(string start, string end, unordered_map<string, vector<pair<string, double>>> m){
        queue<pair<string , double>> q;
        set<string> s;
        q.push({start,1});
        s.insert(start);
        while(!q.empty()){
            pair<string, double> node=q.front();
            q.pop();
            if(m.find(node.first)!=m.end()){
                for(auto val:m[node.first]){
                    if(val.first==end){
                        return node.second*val.second;
                    }
                    else{
                        if(s.find(val.first) == s.end()){
                            q.push({val.first, (node.second * val.second)});    
                            s.insert(val.first);
                        }
                    }
                }
            }
            
        }
        return -1.0;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> res(queries.size(),-1.0);
        unordered_map<string, vector<pair<string, double>>> m;
        for(int i=0;i<equations.size();i++){
            string n1=equations[i][0], n2= equations[i][1];
            double val=values[i], opp=1/values[i];
            m[n1].push_back({n2, val});
            m[n2].push_back({n1, opp});
        }
        for(int i=0;i<queries.size();i++){
            string target= queries[i][1];
            if(m.find(target)!=m.end() && m.find(queries[i][0])!=m.end() && queries[i][0]==target){
                res[i]=1;
                continue;
            }
            res[i]=bfs(queries[i][0], target, m);
        }
        return res;
    }
};