// Last updated: 8/25/2025, 12:45:05 PM
class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n=words.size(); 
        int res=0;
        for (int i=0;i<n;i++) {
            unordered_set<char> st1(words[i].begin(), words[i].end());
            for (int j = i+1;j<n;j++) {
                unordered_set<char> st2(words[j].begin(), words[j].end());
                if (st1 == st2) { 
                    res++;
                }
            }
        }
        return res;
    }
};
