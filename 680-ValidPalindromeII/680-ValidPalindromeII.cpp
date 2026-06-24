// Last updated: 6/24/2026, 8:23:46 PM
1class Solution {
2public:
3    bool isPal(int l, int r, string s){
4        while(l<r){
5            if(s[l]!=s[r]) return false;
6            l++;
7            r--;
8        }
9        return true;
10    }
11    bool validPalindrome(string s) {
12        int n=s.size();
13        int l=0;
14        int r=n-1;
15        int c=0;
16        while(l<r){
17            if(s[l]==s[r]){
18                l++;
19                r--;
20            }
21            else{
22               bool option1=isPal(l+1,r,s);
23               bool option2=isPal(l,r-1,s);
24               if(option1||option2) return true; 
25               else return false;
26            }
27        }
28        return true;
29    }
30};