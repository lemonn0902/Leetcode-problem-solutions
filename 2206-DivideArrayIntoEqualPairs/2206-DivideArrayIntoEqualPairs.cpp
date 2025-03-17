class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int pairs = nums.size()/2;
        int ele = nums.size()/pairs;
        int flag=0;
        while(!nums.empty()){
            
            int e = nums[0];
            int c= count(nums.begin(), nums.end(), e);
            if(c == ele || c%ele==0){
                nums.erase(remove(nums.begin(), nums.end(), e), nums.end());
            }
            else {
                flag=1;
                break;
            }
        }
        if(flag==1) return false;
        else return true;
    }
};