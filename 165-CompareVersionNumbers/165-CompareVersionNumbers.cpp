// Last updated: 9/23/2025, 12:56:38 PM
class Solution {
public:
    int compareVersion(string version1, string version2) {
       int n=version1.size();
       int m=version2.size();
       int i=0, j=0;
       while(i<n|| j<m){
            string n1="", n2="";
            while( i<n&&version1[i]!='.' ){
                n1=n1+version1[i];
                i++;
            } 
            i++;
            while(j<m&&version2[j]!='.' ){
                n2=n2+version2[j];
                j++;
            } 
            j++;
            int v1=n1.empty()?0:stoi(n1);
            int v2=n2.empty()?0:stoi(n2);
            if (v1>v2) return 1;
            if (v1<v2) return -1;
       }
       
       return 0;
    }
};