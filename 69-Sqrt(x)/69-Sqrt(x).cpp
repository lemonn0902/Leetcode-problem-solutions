// Last updated: 10/28/2025, 10:53:35 PM
class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        long long ans;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==x) return mid;
            if(mid*mid<x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};