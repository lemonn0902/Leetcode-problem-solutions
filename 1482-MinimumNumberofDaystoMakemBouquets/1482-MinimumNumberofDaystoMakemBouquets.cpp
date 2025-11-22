// Last updated: 11/22/2025, 10:52:59 PM
class Solution {
public:
    int find(vector<int>& bloomDay, int day, int k){
        int flowers=0;
        int bouquets=0;
        for(int x:bloomDay){
            if(x<=day){
                flowers++;
                if(flowers==k){
                    bouquets++;
                    flowers=0;
                }
            }
            else flowers=0;
        }
        return bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int maxi=INT_MIN;
        for(int x: bloomDay){
            if(x>maxi) maxi=x;
        }
        long long maxFlowers=(long long)m*k;
        int n= bloomDay.size();
        if(maxFlowers>n) return -1;
        int low=1;
        int high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            int b=find(bloomDay, mid,k);
            if(b>=m) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};