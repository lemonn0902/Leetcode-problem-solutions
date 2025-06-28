// Last updated: 6/29/2025, 1:38:40 AM
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> res;
        vector<pair<int, int>> withIndex;
        for (int i= 0;i< nums.size();i++) {
            withIndex.push_back({nums[i], i}); //{{2,0}, {1,1},{3,2},{3,3}}
        }
        sort(withIndex.begin(), withIndex.end(), [](pair<int,int>& a, pair<int, int>& b){
            return a.first > b.first;
        });
        vector<pair<int,int>> topK(withIndex.begin(), withIndex.begin()+k);
        sort(topK.begin(), topK.end(), [](auto& a, auto&b){
            return a.second<b.second;
        });
        for(auto it: topK){
            res.push_back(it.first);
        }
        return res;
    }
};