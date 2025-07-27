// Last updated: 7/27/2025, 2:10:44 PM
class Solution {
public:
    int square(int n){
        int sum=0;
        while(n>0){
            sum=sum+(pow(n%10,2));
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow= square(slow);
            fast= square(square(fast));

        } while(slow!=fast);
        return slow==1;

    }
};