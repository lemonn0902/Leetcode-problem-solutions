class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        return 1.0;
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        double ans=myPow(x, N/2);
        ans*=ans;
        if(N%2) ans*=x;
        return ans;
    }
};