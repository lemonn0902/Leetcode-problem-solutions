// Last updated: 7/31/2025, 6:47:34 PM
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n,0);
        int no=bookings.size();
        for(int i=0;i<no;i++){
            int start= bookings[i][0];
            int last= bookings[i][1];
            int seats=bookings[i][2];
            for(int j=start;j<=last;j++){
                ans[j-1]=ans[j-1]+seats;
            }
        }
        return ans;
    }
};