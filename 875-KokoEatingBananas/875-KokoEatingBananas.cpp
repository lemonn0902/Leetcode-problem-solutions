// Last updated: 11/22/2025, 10:21:34 PM
class Solution {
public:
    long long find(vector<int>& piles, int per){
        long long ans=0;
        for(int i=0;i<piles.size();i++){
            ans+= ceil((double)piles[i]/per);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=INT_MIN;
        for(int x:piles){
            if(x>maxi) maxi=x;
        }
        int low=1;
        int high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hrs=find(piles,mid);
            if(hrs>h){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};