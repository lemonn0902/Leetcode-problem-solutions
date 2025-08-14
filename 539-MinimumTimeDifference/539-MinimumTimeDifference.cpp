// Last updated: 8/14/2025, 5:22:28 PM
class Solution {
public:
    int findMinDifference(vector<string>& t) {
        int n=t.size();
        vector<int> mins(n);
        for(int i=0;i<n;i++){
            int h=stoi(t[i].substr(0,2));
            int m= stoi(t[i].substr(3));
            mins[i]=h*60+m;
        }
        sort(mins.begin(),mins.end());
        int ans=INT_MAX;
        for(int i=0;i<mins.size()-1;i++){
            ans=min(ans, mins[i+1]-mins[i]);
        }
        ans=min(ans, 24*60-mins.back()+mins.front());
        return ans;

    }
};