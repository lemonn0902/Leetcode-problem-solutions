// Last updated: 11/24/2025, 11:54:35 PM
class Solution {
public:
    int find(vector<int>& weights, int n){
        int days=1;
        int sum=0;
        for(int x:weights){
            if(sum+x>n){
                days++;
                sum=0;
            }
            sum+=x;
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int x:weights) sum+=x;
        int maxi=INT_MIN;
        for(int x:weights){
            if(x>maxi) maxi=x;
        }
        int low=maxi;
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int capacity=find(weights, mid);
            if(capacity>days) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};