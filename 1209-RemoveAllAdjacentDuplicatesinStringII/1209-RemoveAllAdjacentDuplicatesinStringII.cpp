// Last updated: 7/30/2025, 3:21:38 PM
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<int, char>> st;

        for (char c : s) {
            if (!st.empty() && st.back().second == c) {
                st.back().first++; 
                if (st.back().first == k) {
                    st.pop_back();  
                }
            } else {
                st.push_back({1, c}); 
            }
        }

        string res = "";
        for (auto p : st) {
            res.append(p.first, p.second); 
        }

        return res;
    }
};
