// Last updated: 7/23/2025, 10:41:25 PM
class Solution {
public:
    void reverse(vector<int>&n, int start, int end){
        while(start<end){
            swap(n[start], n[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(k==0) return;
        
        int n=nums.size();
        k = k % n;
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
        
    }
};