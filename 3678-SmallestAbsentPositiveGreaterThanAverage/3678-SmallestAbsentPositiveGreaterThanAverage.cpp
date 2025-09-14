// Last updated: 9/14/2025, 3:15:51 PM
class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n=nums.size();
        int sum=0.0;
        int avg=0.0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        avg=sum/n;
        bool found=false;
        while(found!=true){
            while(avg<0){
                avg++;
            }
            int next=++avg;
            if(find(nums.begin(), nums.end(),next)==nums.end()){
                return next;
                break;
            }

        }
        return 0;

    }
};