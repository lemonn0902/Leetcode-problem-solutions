// Last updated: 7/27/2025, 10:16:50 PM
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;
        int r=0;
        int n=fruits.size();
        unordered_map<int, int> types;
        int maxAns=-9999;
        while(r<n){
            
            types[fruits[r]]++;
            while(types.size()>2){
                types[fruits[l]]--;
                if (types[fruits[l]] == 0)
                    types.erase(fruits[l]);
                l++;
            }
            
            
            maxAns=max(maxAns,1+r-l);
            r++;

        }
        return maxAns;
    }
};