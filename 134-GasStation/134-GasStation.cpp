// Last updated: 10/8/2025, 9:54:53 PM
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int tank=0;
        int totGas=0, totCost=0;
        for(int i=0;i<gas.size();i++){
            totGas+=gas[i];
            totCost+=cost[i];
            tank+= gas[i]-cost[i];
            if(tank<0){
                start=i+1;
                tank=0;
            }
        }
        return totGas<totCost? -1:start;
    }
};