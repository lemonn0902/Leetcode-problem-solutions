// Last updated: 10/29/2025, 12:19:04 AM
class Solution {
public:
    long long find(vector<int>& piles, int per){
        long long ans=0;
        for(int i=0;i<piles.size();i++){
            ans += ceil((double)piles[i] / per);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=INT_MIN;
        for(int n:piles){
            if(n>maxi) maxi= n;
        }
        int l=1;
        int e=maxi;
        while(l<=e){
            int m=l+(e-l)/2;
            long long hrs=find(piles, m);
            if(hrs>h){
                l=m+1;
            }
            else e=m-1;
        }
        return l;

    }
};