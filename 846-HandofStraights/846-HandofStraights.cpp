// Last updated: 5/19/2026, 11:19:10 PM
1class Solution {
2public:
3    bool isNStraightHand(vector<int>& hand, int groupSize) {
4        int n=hand.size();
5        if(n%groupSize!=0) return 0;
6        map<int,int> freq;
7        for(int n:hand) freq[n]++;
8        while(!freq.empty()){
9            int start=freq.begin()->first;
10            for(int i=0;i<groupSize;i++){
11                int card=start+i;
12                if(freq[card]==0) return false;
13                freq[card]--;
14                if(freq[card]==0) freq.erase(card);
15            }
16        }
17        return true;
18    }
19};