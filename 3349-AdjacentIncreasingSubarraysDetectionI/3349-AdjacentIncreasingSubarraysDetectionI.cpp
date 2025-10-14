// Last updated: 10/14/2025, 11:32:39 PM
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int r=0;
        int l=0;
        bool one = false;
        vector<int> curr;
        while(r<n){
            curr.push_back(nums[r]);
            if(1+r-l>k){
                curr.erase(curr.begin());
                l++;
            }
            if (r - l + 1 == k) {
                bool inc1 = true;
                for (int i = 0; i < k - 1; i++) {
                    if (curr[i] >= curr[i + 1]) {
                        inc1 = false;
                        break;
                    }
                }

                
                if (inc1 && r + k < n) {
                    bool inc2 = true;
                    for (int i = r + 1; i < r + k; i++) {
                        if (nums[i] >= nums[i + 1]) {
                            inc2 = false;
                            break;
                        }
                    }
                    if (inc2) return true;
                }

                // Slide window
                curr.erase(curr.begin());
                l++;
            }
            r++;
        }
        return false;
    }
};