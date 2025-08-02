// Last updated: 8/2/2025, 11:35:40 PM
class Solution {
public:
    int kthGrammar(int n, int k) {
        
        //base case is row 0 k=0
        if(n==1&&k==1) return 0;
        int mid= pow(2,n-1)/2;
        if(k<=mid) return kthGrammar(n-1,k);
        else return !kthGrammar(n-1,k-mid);
    }
};