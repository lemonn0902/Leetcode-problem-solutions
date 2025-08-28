// Last updated: 8/28/2025, 3:55:44 PM
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int minOps=INT_MAX;
        int ops=0;
        int blacks=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='B') blacks++;
        }
        if(blacks==k) return 0;
        else ops=k-blacks;
        if(n==k){
            return ops;
        }
        minOps=ops;
        for(int i=k;i<n;i++){
            if(blocks[i]=='B') blacks++;
            char fromLeft=blocks[i-k];
            if(fromLeft=='B') blacks--;
            ops=k-blacks;
            minOps=min(ops,minOps);
        }
        return minOps;
    }
};