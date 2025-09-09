// Last updated: 9/9/2025, 10:37:41 PM
class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> res;
        int n=arr.size();
        for(int target=n;target>0;target--){
            int i=find(arr.begin(), arr.end(),target)-arr.begin();
            if(i==target-1){
                continue; //already in correct pos
            }
            if(i!=0){
                reverse(arr.begin(), arr.begin()+i+1);
            res.push_back(i+1);
            }
            
            reverse(arr.begin(), arr.begin()+target);
            res.push_back(target);
        }
        return res;
    }
};