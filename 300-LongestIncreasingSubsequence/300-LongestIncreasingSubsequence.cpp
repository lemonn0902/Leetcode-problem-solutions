// Last updated: 8/16/2026, 4:23:54 PM
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
14        priority_queue<pair<int,ListNode*> , vector<pair<int,ListNode*>>, greater<>> pq;
15        for(auto it:lists){
16            if(it) pq.push({it->val, it});
17        }
18        ListNode dummy(0);
19        ListNode* temp=&dummy;
20        while(!pq.empty()){
21            auto [val, node]= pq.top();
22            pq.pop();
23            temp->next=node;
24            temp=temp->next;
25            if(node->next){
26                pq.push({node->next->val,node->next});
27            }
28        }
29        return dummy.next;
30    }
31};