// Last updated: 9/11/2025, 5:27:33 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> res(n,false);
        int max=0;
        for(int c:candies){
            if(c>max){
                max=c;
            }
        }
        int i=0;
        for(int c:candies){
            int e=extraCandies+c;
            if(e>=max){
                res[i]=true;
            }
            i++;
        }
        return res;
    }
};