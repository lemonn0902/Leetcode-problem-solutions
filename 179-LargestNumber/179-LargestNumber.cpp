// Last updated: 10/9/2025, 10:05:15 PM
class Solution {
public:
    string largestNumber(vector<int>& nums) {
       string res;
       bool allZero=true;
       for(int n:nums){
        if(n!=0) allZero=false;
       }
       if(allZero==true) return "0";
       sort(nums.begin(), nums.end(), [](int a,int b){
        string f=to_string(a);
        string s=to_string(b);
        return f+s>s+f;
       });
       for(int n:nums){
        string s=to_string(n);
        res+=s;
       }
       
       return res;

    }
};