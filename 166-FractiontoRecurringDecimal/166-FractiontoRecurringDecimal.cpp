// Last updated: 9/24/2025, 1:45:45 PM
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
       if(numerator==0) return "0";
       string ans;
       if ((numerator<0)^(denominator< 0)) ans+='-';
       long long num=abs((long long)numerator);
       long long den=abs((long long)denominator);
       long long q=num/den;
       long long r=num%den;
       ans+=to_string(q);
       if(r==0) return ans;
       ans+='.';
       unordered_map<long long, int> mp;
       string f;
       for(int i=0;r!=0;i++){
        if(mp.count(r)){
            f.insert(mp[r],"(");
            f+=')';
            break;
        }
        mp[r]=i;
        r*=10;
        f+=('0'+r/den);
        r=r%den;
       }
       return ans+f;

    }
};