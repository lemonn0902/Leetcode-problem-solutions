// Last updated: 8/17/2025, 2:57:12 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n= arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]) return i;
        }
        return n-1;
    }
};