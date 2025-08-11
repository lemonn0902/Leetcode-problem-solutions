// Last updated: 8/11/2025, 2:08:39 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int l=0;
        int r=n-1;
        int ans=0;
        while(l<=r){
            
            int sum=people[l]+people[r];
            if(sum>limit) {
                ans+=1;
                r--;
            }
            else{
                ans+=1;
                l++;
                r--;
            }
            

        }
        return ans;
    }
};