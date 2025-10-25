// Last updated: 10/25/2025, 3:51:53 PM
class Solution {
public:
    int totalMoney(int n) {
        int tot=0;
        int whole = n/7;
        int leftout = n%7;
        for(int i=1;i<=whole;i++){
            int k=1;
            int curr=i;
            while(k<=7){
                tot+=curr;
                curr++;
                k++;
            }
        }
        whole++;
        for(int i=1;i<=leftout;i++){
            tot=tot+whole;
            whole++;
        }
        return tot;
    }
};