// Last updated: 9/9/2025, 10:42:20 PM
class Solution {
public:
    int sq(int n){
        int sum=0;
        while(n!=0){
            int r=n%10;
            sum=sum+(r*r);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=sq(slow);
            fast=sq(sq(fast));
        } while(slow!=fast);
        return slow==1;
    }
};