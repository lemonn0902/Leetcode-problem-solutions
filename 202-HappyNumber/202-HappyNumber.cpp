// Last updated: 7/27/2025, 1:35:11 PM
class Solution {
public:
    int sumDigits(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum+= (r*r);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && seen.find(n)==seen.end()){
            seen.insert(n);
            n=sumDigits(n);

        }
        if(n==1)
        return true;
        else 
        return false;
    }
};