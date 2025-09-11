// Last updated: 9/11/2025, 4:04:26 PM
class Solution {
public:
    bool isCons(char ch){
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U') return true;
        else return false;
    }
    string sortVowels(string s) {
        string t=s;
        vector<pair<char,int>> vec;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(isCons(c)){
                t[i]=s[i];
            }
            else{
                vec.push_back({c,(int)c});
                t[i]=' ';
            }
        }
        sort(vec.begin(), vec.end(), [](const pair<char,int>&a, const pair<char,int>&b){
            return a.second<b.second;
        });
        int k=0;
        for(int i=0;i<s.size();i++){
            if(t[i]==' '){
                t[i]=vec[k].first;
                k++;
            }
        }
        return t;
    }
};