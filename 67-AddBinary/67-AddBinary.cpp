// Last updated: 9/14/2025, 11:26:24 PM
class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int m = a.size();
        int n = b.size();
        bool carry = false;
        int i = m - 1;
        int j = n - 1;
        while (i >= 0 || j >= 0) {
            char bitA = (i >= 0) ? a[i] : '0';
            char bitB = (j >= 0) ? b[j] : '0';
            if (bitA == '0' && bitB == '0') {
                if (!carry)
                    ans += '0';
                else {
                    ans += '1';
                    carry = false;
                }
            }
            else if (bitA != bitB) {
                if (!carry)
                    ans += '1';
                else
                    ans += '0';
            }
            else {  // both are '1'
                if (!carry) {
                    ans += '0';
                    carry = true;
                } else {
                    ans += '1';
                    
                }
            }
            i--;
            j--;
        }
        if (carry)
            ans += '1';

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
