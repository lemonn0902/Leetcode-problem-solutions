// Last updated: 7/30/2025, 3:58:39 PM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(map[s[i]]==1) return i;
        }
        return -1;
    }
};