// Last updated: 8/19/2025, 11:41:32 PM
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff= arr[1]-arr[0];
        for(int i=2;i<arr.size();i++){
            if(arr[i]-arr[i-1]!=diff) return false;
        }
        return true;
    }
};