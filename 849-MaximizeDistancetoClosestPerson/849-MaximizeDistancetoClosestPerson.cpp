// Last updated: 8/22/2025, 11:09:57 PM
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int maxAns=0;
        int n=seats.size();
        int i=0;
        //count leading zeros
        
        while(seats[i]==0){
            
            i++;
        }
        int beg=i;
        maxAns=beg;
        int j=n-1;
        //count trailing zeroes
        
        while(seats[j]==0){
            j--;
        }
        int end=n-1-j;
        maxAns=max(maxAns,end);
        int lastPerson=i;
        for(int k=i+1;k<=j;k++){
            if (seats[k] == 1) {
                int gap = k - lastPerson - 1;
                maxAns = max(maxAns, (gap + 1) / 2); 
                lastPerson = k;
            }
        }
        return maxAns;
    }
};