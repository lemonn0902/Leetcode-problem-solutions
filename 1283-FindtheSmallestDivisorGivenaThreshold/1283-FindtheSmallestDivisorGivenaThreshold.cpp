// Last updated: 11/24/2025, 11:05:56 PM
class Solution {
public:
    int find(vector<int>& nums, int n){
        int res=0;
        for(int x:nums){
            res += (x + n - 1) / n;
        }
        return res;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT_MIN;
        for(int x:nums){
            if(x>maxi) maxi=x;
        }
        int low=1;
        int high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            int ans=find(nums,mid);
            if(ans>threshold) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};