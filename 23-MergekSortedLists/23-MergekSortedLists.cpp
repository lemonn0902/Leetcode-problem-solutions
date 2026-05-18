// Last updated: 5/18/2026, 8:18:53 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* mergeKLists(vector<ListNode*>& lists) {
14        ListNode dummy(0);
15        ListNode* tail=&dummy;
16        priority_queue< pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> pq;
17        for(auto node:lists){
18            if(node) pq.push({node->val,node});
19        }
20        while(!pq.empty()){
21            auto [val,node]= pq.top();
22            tail->next=node;
23            tail=tail->next;
24            pq.pop();
25            if(node->next){
26                pq.push({node->next->val,node->next});
27            }
28        }
29        return dummy.next;
30    }
31};