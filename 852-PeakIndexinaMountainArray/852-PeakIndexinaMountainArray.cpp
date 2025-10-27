// Last updated: 10/27/2025, 8:03:35 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n= arr.size();
        int s=0;
        int e=n-1;
        while(s<e){
            int m=s+(e-s)/2;
            if(arr[m]>arr[m+1]){
                e=m;
            }
            else{
                s=m+1;
            }
        }
        return s;
    }
};