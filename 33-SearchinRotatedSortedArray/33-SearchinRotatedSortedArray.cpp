// Last updated: 10/27/2025, 2:26:48 PM
class Solution {
public:
    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == target)
                return m;
            else if (nums[m] < target)
                s = m + 1;
            else
                e = m - 1;
        }
        return -1;
    }
    int findPeak(vector<int>& nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<e){
            int m= s+(e-s)/2;
            if(m < e&&nums[m]>nums[m+1]) return m;
            if(m > s &&nums[m-1]>nums[m]) return m-1;
            if(nums[s]>nums[m]) e=m-1;
            else s=m+1;
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if (n == 1) return nums[0] == target ? 0 : -1;
        int p=findPeak(nums);
        int left = binarySearch(nums, 0, p, target);
        if (left != -1) return left;
        return binarySearch(nums, p + 1, n - 1, target);
    }
};