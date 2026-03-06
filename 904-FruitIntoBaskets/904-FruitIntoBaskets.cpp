// Last updated: 3/6/2026, 7:41:21 PM
1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4        unordered_map<int, int> basket;
5        int maxi=0;
6        int l=0; int r=0;
7        int n=fruits.size();
8        while(r<n){
9            basket[fruits[r]]++;
10            while(basket.size()>2){
11                basket[fruits[l]]--;
12                if(basket[fruits[l]]==0) basket.erase(fruits[l]);
13                l++;
14                
15            }
16            maxi=max(maxi, r-l+1);
17            r++;
18        }
19        return maxi;
20    }
21};